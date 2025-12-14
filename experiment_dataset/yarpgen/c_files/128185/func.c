/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128185
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
    var_19 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [i_0] = var_1;
                            arr_10 [i_0] [i_1] [i_2] [(unsigned char)14] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [2ULL] [(_Bool)1] [i_1 + 1])), (13998270451905238493ULL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_1] [i_1 - 1])) > (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [11ULL] [i_1 - 1]))))) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1]))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                            {
                                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (short)4095))));
                                arr_13 [i_4] [i_2] [i_2] [(unsigned short)4] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (unsigned char)209)))));
                                arr_14 [i_0] [i_1 - 1] [14LL] [14LL] [(unsigned short)18] [i_0] = ((/* implicit */unsigned char) var_14);
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (arr_2 [i_1 + 1]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40907))) / (14ULL)))));
                            }
                            for (unsigned char i_5 = 1; i_5 < 20; i_5 += 3) 
                            {
                                arr_18 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */int) arr_12 [i_0] [i_0] [(short)11] [18LL] [i_2] [i_3] [i_5])) / (((/* implicit */int) (signed char)37)))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_16 [i_1] [i_3] [i_5 + 1])))))));
                                arr_19 [i_0] [(unsigned char)13] [i_2] [i_3] [i_5] = ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_12 [i_5] [i_5 - 1] [i_2] [i_2] [i_1 + 1] [(unsigned short)10] [(_Bool)1])) ^ (((/* implicit */int) arr_12 [i_5] [i_5 + 1] [i_5] [i_2] [i_1 + 1] [(unsigned char)11] [i_1])))));
                            }
                            for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                            {
                                var_22 = ((/* implicit */unsigned long long int) (unsigned char)147);
                                var_23 = ((/* implicit */long long int) min((var_23), ((+(5475386677126714264LL)))));
                            }
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)212)))) + (((/* implicit */int) (unsigned char)212))))) ? (((((/* implicit */int) (unsigned char)144)) & (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) (unsigned char)70)))))));
                        }
                    } 
                } 
                arr_22 [i_0] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) (signed char)102);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((_Bool) var_13));
}
