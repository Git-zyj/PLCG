/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162139
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
    var_14 = ((/* implicit */unsigned short) 2024780549U);
    var_15 = 3991662730285233807ULL;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_1 [(short)6] [i_0]) : (((/* implicit */int) var_6))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((3926082153994805568ULL), (((/* implicit */unsigned long long int) var_8))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) var_12);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned short)4318), ((unsigned short)61218)))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((int) max((3416675803U), (((/* implicit */unsigned int) (unsigned short)9019))))), (((((/* implicit */int) (unsigned short)61217)) * ((+(((/* implicit */int) arr_10 [i_0] [i_1] [10ULL] [(unsigned short)2]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) ((short) arr_14 [i_0] [i_1] [i_2] [i_2] [i_5]))) : (((/* implicit */int) (unsigned short)4318))));
                        var_18 = ((/* implicit */short) (unsigned short)61218);
                    }
                    for (signed char i_6 = 2; i_6 < 13; i_6 += 2) 
                    {
                        arr_22 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */int) (unsigned short)8180);
                        arr_23 [i_0] [(short)15] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) var_8)), ((~((~(((/* implicit */int) var_2))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 3) 
                    {
                        arr_26 [i_7] [i_7] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1843278957171101302ULL))));
                        arr_27 [i_0] [i_0] [i_2] = (!(var_6));
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((unsigned long long int) min((min((arr_7 [(short)2]), (((/* implicit */unsigned long long int) arr_13 [(unsigned short)8] [i_0] [(unsigned short)2] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) var_1)))))));
    }
}
