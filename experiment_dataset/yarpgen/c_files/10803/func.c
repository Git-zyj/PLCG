/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10803
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0] [i_0 + 1]))))), (79666797U)));
                arr_6 [i_0] [(unsigned short)1] [i_1] = ((/* implicit */unsigned char) var_7);
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) ((short) ((int) 4215300509U)));
                var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_14) + (((/* implicit */unsigned int) arr_9 [i_2 + 2]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_7), (var_10)))), (((((/* implicit */_Bool) 79666797U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(_Bool)1]))) : (var_15))))))));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_14 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) (unsigned char)143);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_2 - 1]))));
                        var_22 = ((/* implicit */unsigned short) (unsigned char)1);
                    }
                    var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((_Bool) max((var_6), (var_6))))), (arr_13 [i_2 + 1])));
                }
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    arr_23 [i_2] [i_3] [i_6] [i_2] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (+(var_0)))) ? (2147483647) : (((((/* implicit */_Bool) 79666787U)) ? (arr_9 [i_6]) : (((/* implicit */int) var_1)))))));
                    arr_24 [i_2] [i_6] = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) arr_18 [i_2] [i_3] [i_3] [i_3] [(unsigned short)6]))), (((((/* implicit */_Bool) arr_11 [i_2 + 2] [i_2 + 2] [i_2 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_17))))));
                    var_24 += ((/* implicit */short) (((+(((((/* implicit */_Bool) (unsigned short)0)) ? (2621741570447409842LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) != (((max((((/* implicit */long long int) var_0)), (arr_12 [i_6]))) - (((/* implicit */long long int) 4215300523U))))));
                    var_25 = var_10;
                    var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (var_12)));
                }
            }
        } 
    } 
}
