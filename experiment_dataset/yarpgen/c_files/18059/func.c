/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18059
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((unsigned long long int) arr_7 [i_1] [i_2 - 1] [i_2] [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 *= ((((((/* implicit */_Bool) (short)31151)) ? (((((/* implicit */_Bool) var_5)) ? (arr_10 [i_0] [i_0] [i_4 + 2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16743))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))))))) << (((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_4 - 1])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_3] [i_0]))))), (var_9))) - (62879ULL))));
                                arr_13 [i_4] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) 6763462122494876659ULL)) && (((/* implicit */_Bool) (unsigned short)40492))))));
                                arr_14 [i_4] [i_1] [i_2 - 1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((short) arr_11 [i_3] [i_3] [i_3]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (short i_6 = 1; i_6 < 21; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_0] [i_6] [i_1] = ((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_1] [i_0] [i_5] [i_6]);
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) min((var_3), (arr_7 [i_0] [i_2] [i_5] [i_6])))) && (((((/* implicit */_Bool) 11683281951214674961ULL)) || (((/* implicit */_Bool) var_3))))));
                                arr_24 [i_6] [i_0] [i_1] [i_1] [i_5] [i_6] = ((unsigned long long int) ((((((/* implicit */int) (unsigned short)40512)) != (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_5] [i_5] [i_6])) + (2147483647))) << (((arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) - (17183159685206468329ULL)))))) : (((((/* implicit */_Bool) var_8)) ? (arr_12 [i_0] [i_2]) : (arr_18 [i_0] [i_0] [i_0] [i_0])))));
                                arr_25 [i_0] [i_1] [i_2] [i_6] [i_6 - 1] = ((/* implicit */short) arr_12 [i_1] [i_2]);
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((var_5), (var_13))))));
}
