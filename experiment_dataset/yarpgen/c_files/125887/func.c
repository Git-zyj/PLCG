/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125887
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2])))), (((((/* implicit */_Bool) 14499428700557119970ULL)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)4])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_0 + 1]))))));
                                var_12 = ((/* implicit */unsigned long long int) (short)-17126);
                                arr_15 [i_0 - 1] [i_0] [i_1] [i_2] [i_2] [i_4] = var_4;
                            }
                        } 
                    } 
                    arr_16 [i_0 - 2] [i_0] [i_1] [i_2] = arr_3 [i_0 - 2];
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        arr_21 [i_5] = ((/* implicit */short) (~(3947315373152431649ULL)));
                        arr_22 [(signed char)4] = ((/* implicit */unsigned int) 14499428700557119987ULL);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        for (short i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            {
                arr_29 [(unsigned short)0] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_7])) ? (arr_26 [i_7]) : (((((/* implicit */_Bool) ((unsigned long long int) arr_23 [i_7] [18U]))) ? (((((/* implicit */_Bool) (unsigned short)12566)) ? (14499428700557119987ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1184))))) : (arr_27 [i_7] [i_7])))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) 3947315373152431655ULL))));
            }
        } 
    } 
}
