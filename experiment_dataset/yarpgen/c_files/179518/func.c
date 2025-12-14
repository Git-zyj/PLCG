/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179518
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [0] [0] &= ((/* implicit */unsigned int) min((max((((/* implicit */long long int) arr_2 [i_0])), (((var_9) & (arr_0 [i_1]))))), (((/* implicit */long long int) 3593153992U))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) /* same iter space */
                {
                    arr_7 [20] [0] |= ((/* implicit */unsigned char) (+(((3593153992U) * (((/* implicit */unsigned int) var_2))))));
                    var_20 = ((/* implicit */signed char) var_13);
                }
                for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 4) /* same iter space */
                {
                    arr_11 [i_0] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) 701813297U)) ? (14865259437862131582ULL) : (((/* implicit */unsigned long long int) arr_8 [i_1] [i_0])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_3] [i_1])))))))))));
                    var_21 = ((/* implicit */int) ((unsigned short) min(((-(((/* implicit */int) (unsigned short)2832)))), (((/* implicit */int) arr_10 [i_3 + 1] [i_1] [i_3 - 1])))));
                }
                for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) var_7);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) (_Bool)1);
                        arr_19 [i_0] [i_0] [i_4] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 + 1]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 16691220661642467547ULL)) || (((/* implicit */_Bool) 16691220661642467547ULL))));
                            arr_22 [i_1] [i_1] [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-96))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_4 + 1] [i_5] [13]))) : (((arr_14 [i_4 + 1] [i_1] [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-105)) ? (((var_13) << (((var_13) - (7879547148667668077LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)-12))))));
                        }
                        arr_23 [i_1] [i_4 - 1] [i_4 - 1] [i_5] [i_4 - 1] [i_4] = ((/* implicit */unsigned short) (signed char)127);
                    }
                    for (long long int i_7 = 1; i_7 < 21; i_7 += 4) 
                    {
                        var_26 = max((arr_0 [i_7 + 1]), (((/* implicit */long long int) ((signed char) arr_0 [i_7 + 1]))));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-25215)) + (25234)))))) ^ (((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_11))) | (((/* implicit */unsigned long long int) ((long long int) (short)-25207))))))))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 + 2])) ? (arr_16 [i_4 + 2] [i_4 + 1] [i_4 + 2] [i_4 + 2]) : (arr_16 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 - 1])))) ? (((/* implicit */unsigned int) min((var_12), (((/* implicit */int) (short)-25215))))) : (((((/* implicit */_Bool) arr_16 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 2])) ? (arr_16 [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4 + 2]) : (arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 - 1])))));
                        arr_26 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_5 [i_7 - 1] [i_4 + 1] [i_4 + 2] [i_4])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_5 [i_7 + 1] [i_4 + 2] [i_4 + 2] [i_1])) ? (((/* implicit */int) arr_5 [i_7 - 1] [i_4 + 2] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_5 [i_7 - 1] [i_4 - 1] [i_4 + 1] [i_4])))) - (37050)))));
                    }
                    arr_27 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((unsigned short) arr_13 [18LL]))))) ? (((unsigned long long int) ((unsigned short) arr_14 [i_0] [i_0] [i_4]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)62718)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [0U] [i_0])))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)49))))))))));
                    var_29 = ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)2817)));
                }
                var_30 = ((/* implicit */unsigned long long int) arr_9 [i_0]);
                arr_28 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_17 [i_1] [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) var_14))));
            }
        } 
    } 
    var_31 |= ((/* implicit */unsigned long long int) var_1);
}
