/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129992
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
    var_20 |= ((/* implicit */unsigned long long int) var_1);
    var_21 = ((/* implicit */signed char) var_16);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) (unsigned short)0))) | ((+(arr_2 [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_22 *= ((/* implicit */_Bool) (unsigned short)3);
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */long long int) ((int) ((short) (+(((/* implicit */int) arr_1 [i_0] [i_1]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-108))) ^ (arr_5 [i_1 - 1] [i_0]))));
                }
            } 
        } 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_14)) >> (((arr_12 [i_0]) - (946230308U))))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */int) var_14)), (var_4)))), (((arr_5 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_14)) >> (((((arr_12 [i_0]) - (946230308U))) - (433918899U))))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */int) var_14)), (var_4)))), (((arr_5 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
        var_24 *= ((/* implicit */signed char) (short)-4933);
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        var_25 = ((((_Bool) var_6)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_5] [i_5]))))) : (arr_19 [i_5]));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) var_17);
        arr_23 [i_5] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5])) || (((/* implicit */_Bool) (unsigned char)7)))))) : (arr_19 [i_5]));
    }
    var_26 = ((/* implicit */int) max((var_26), ((-(((var_16) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0))))))));
}
