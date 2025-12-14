/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134383
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 &= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_3))))) >= (((/* implicit */int) ((_Bool) var_13))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_15 ^= ((/* implicit */signed char) ((unsigned int) max((((/* implicit */unsigned int) var_8)), (var_13))));
        var_16 = ((/* implicit */long long int) max((var_16), (((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-122))))) / (var_1)))));
        arr_3 [i_0] &= ((/* implicit */unsigned char) var_11);
    }
    for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        arr_6 [i_1] |= ((/* implicit */short) (~(((((/* implicit */int) var_9)) << (((((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_2)))) - (40)))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    arr_11 [(unsigned short)15] = ((/* implicit */short) (-((+(var_7)))));
                    arr_12 [(_Bool)1] [i_3] = ((/* implicit */unsigned long long int) var_2);
                    arr_13 [i_1] [i_1] [(_Bool)1] [i_3] = var_12;
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (((/* implicit */int) var_9)))) % (((((/* implicit */int) var_0)) % (((/* implicit */int) var_12))))))) || (((/* implicit */_Bool) var_4))));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        {
                            arr_24 [i_7] [i_7] [i_7] [(short)14] [i_6] [i_5] = ((/* implicit */int) ((signed char) max((((long long int) var_3)), (((/* implicit */long long int) (+(((/* implicit */int) var_8))))))));
                            arr_25 [i_4] [i_5] [9ULL] [i_5] = (!((((-(((/* implicit */int) var_4)))) >= (((/* implicit */int) ((unsigned short) var_12))))));
                            arr_26 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((((var_6) + (((/* implicit */long long int) var_7)))) < (((/* implicit */long long int) min((((/* implicit */int) var_9)), (var_7))))))) | (((/* implicit */int) ((_Bool) var_8)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) ((var_1) != (((/* implicit */long long int) var_7)))))))))));
}
