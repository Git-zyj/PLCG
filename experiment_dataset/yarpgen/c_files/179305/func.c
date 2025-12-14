/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179305
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((signed char) var_8));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_4))))) >= (var_11)));
                        arr_11 [i_2] [(_Bool)1] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
                        var_21 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_15))))) > (var_3)));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((long long int) var_3)))));
                        arr_15 [i_4] [12ULL] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_4))));
                    }
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) min((max((((/* implicit */short) var_2)), (var_4))), (((/* implicit */short) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_5)))))))) > (((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) var_2)) - (198))))))))));
                    var_24 ^= var_5;
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0 + 1] [i_2] [i_0 + 1] [i_0] = ((/* implicit */signed char) (((((+(((/* implicit */int) var_18)))) << (((((/* implicit */int) var_8)) - (227))))) | (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) ^ (var_3)))) || (((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_15)))))))));
                                arr_22 [i_0 - 1] [i_6] [i_6] [i_5] [6LL] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))) < ((+(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_3)))))));
                                var_25 ^= ((/* implicit */_Bool) ((((int) var_0)) + (max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */_Bool) var_8);
                }
            } 
        } 
        arr_23 [2] &= ((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) < (((((/* implicit */int) var_7)) % (((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((((/* implicit */int) min((var_4), (((/* implicit */short) var_2))))) > ((-(((/* implicit */int) var_10))))))) : (((/* implicit */int) ((unsigned char) var_7)))));
    }
    var_27 = ((/* implicit */short) var_0);
}
