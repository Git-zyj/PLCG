/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111161
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0] [(signed char)8] [i_0])) : (((/* implicit */int) var_3)))) + (((/* implicit */int) ((signed char) arr_0 [i_0])))))) ? (((/* implicit */int) min((arr_1 [i_1 + 2] [i_1 - 1]), (((/* implicit */unsigned char) ((signed char) arr_0 [i_1])))))) : ((+(((/* implicit */int) var_4))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_1 [i_0] [i_1]))));
                    arr_8 [i_1] [10U] [i_1] [5U] = ((/* implicit */unsigned long long int) ((unsigned char) var_1));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_15 = (-(((((/* implicit */int) arr_5 [i_0] [i_1 + 2] [i_1] [i_3 - 1])) - (((/* implicit */int) arr_6 [(short)9] [i_1 + 2] [i_1 + 2] [i_3 - 1])))));
                                arr_15 [i_0] [i_0] [10LL] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((var_10) ? (((/* implicit */int) var_11)) : (var_1)))) : (8029078365241519033LL)))) ? (min((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_3)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)15173)), ((unsigned short)65504))))));
                                arr_16 [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1 - 1] [i_1] = ((/* implicit */int) var_8);
                    var_16 += ((/* implicit */short) ((long long int) arr_3 [i_0]));
                }
                arr_18 [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) -8029078365241519039LL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)30002)) ? (1073741824U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37519))))))));
                arr_25 [17] [i_6] [i_6] = ((/* implicit */signed char) var_8);
                arr_26 [i_5] [i_6] = ((/* implicit */short) arr_22 [(unsigned short)21] [i_6]);
                arr_27 [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_23 [i_5] [i_6]);
                arr_28 [i_6] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_19 [i_5]))) ? (((arr_24 [i_6]) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_4))));
}
