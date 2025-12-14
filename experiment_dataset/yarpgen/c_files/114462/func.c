/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114462
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
    var_16 = ((/* implicit */unsigned char) var_6);
    var_17 = ((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)0)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1 - 1] [12] [i_1] [10ULL] [i_4] = ((/* implicit */short) (~((+(((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_1]))))));
                                arr_17 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -1695005626)) != (var_2)))) < ((-(((/* implicit */int) (unsigned short)26075)))))));
                                arr_18 [i_1] [(signed char)21] = ((/* implicit */unsigned long long int) var_1);
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */long long int) var_6);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (long long int i_6 = 2; i_6 < 21; i_6 += 4) 
                        {
                            {
                                arr_26 [i_5] = ((/* implicit */_Bool) (+((~(var_0)))));
                                arr_27 [i_6] [i_1] [i_2] [i_1] [(signed char)22] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-7841)) - (((/* implicit */int) var_9))));
                                arr_28 [i_1] [i_2] [i_2] = ((/* implicit */int) ((arr_5 [i_1] [i_2] [i_2]) ? ((-((+(3450773659U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14613632385880105408ULL)) ? (var_5) : (((/* implicit */unsigned long long int) 844193648U))))) ? (((/* implicit */int) ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : (((/* implicit */int) ((13ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38)))))))))));
                                arr_29 [i_0 - 2] [i_1] [i_5] [i_1] [i_6] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2 + 2])) ? ((~((+(9007164895002624ULL))))) : (((arr_25 [i_2 + 2]) * (((/* implicit */unsigned long long int) var_0))))));
                            }
                        } 
                    } 
                    arr_30 [(signed char)12] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -481884791)) ? (((/* implicit */long long int) ((/* implicit */int) (short)7866))) : (min((arr_1 [i_0]), (((/* implicit */long long int) (short)-13537))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_1))))) < ((+(11564805512620972499ULL)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) >= (var_6))))) >= (var_11))))));
                }
            } 
        } 
    } 
}
