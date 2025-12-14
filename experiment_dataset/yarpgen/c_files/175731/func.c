/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175731
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 2622615129729536107ULL))))))) ? (((((/* implicit */_Bool) var_3)) ? ((~(var_8))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))))) : (var_10)));
    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (~(4580514431138242521LL)));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) arr_6 [i_2] [i_1]);
                    var_16 = ((/* implicit */unsigned int) (~((+(var_8)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_0] [i_0] = (+((+(((long long int) var_9)))));
                        var_17 &= ((/* implicit */_Bool) ((unsigned long long int) (~(var_10))));
                        arr_12 [i_0] = ((/* implicit */int) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0]))) | (215716879U))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) (unsigned char)217))))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 + 1] [i_1] [i_2] [i_2] [i_1] [i_2])))));
                        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 + 2])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1])))))) ? ((((~(var_6))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114)))));
                    }
                    for (unsigned char i_4 = 3; i_4 < 20; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), ((+(arr_0 [10LL])))));
                        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [3] [i_1]))))) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_2] [(short)1] [i_2] [i_2 - 1] [i_2])) : (var_0))) << (((((((/* implicit */int) var_9)) >> (((/* implicit */int) (_Bool)1)))) - (1624)))));
                        arr_16 [i_0] [(signed char)8] [(unsigned short)6] = ((/* implicit */_Bool) arr_10 [i_1] [i_2 - 1]);
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_4 - 2])) ? (215716890U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (max((max((var_8), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))))))))));
                    }
                    for (int i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        arr_19 [i_5] [i_1] [i_2] [i_5] = ((/* implicit */_Bool) arr_13 [i_5] [i_2 - 1] [20] [i_0]);
                        arr_20 [(unsigned char)10] [0] [i_1] [0] [i_2] [i_5] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 + 1] [i_2 + 1] [i_2 - 1] [i_1]))) ^ (15824128943980015509ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
                        arr_21 [i_5] [i_5] [i_2] [i_5 + 1] = ((/* implicit */unsigned long long int) var_2);
                        var_21 = ((/* implicit */unsigned int) (~(min((((/* implicit */int) arr_13 [i_0] [i_5 + 1] [i_2 + 1] [i_5 - 1])), (var_0)))));
                        arr_22 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -1822411021785058491LL)) : (arr_5 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5])))) ? (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 215716890U)))))) % ((~(-4580514431138242521LL))))) : (((/* implicit */long long int) var_2))));
                    }
                    arr_23 [i_0] [7LL] [(unsigned short)6] = ((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_2 + 2] [i_1])), (((((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 2])) * (((/* implicit */int) arr_6 [i_2 + 2] [i_1]))))));
                }
            } 
        } 
    } 
    var_22 = var_10;
}
