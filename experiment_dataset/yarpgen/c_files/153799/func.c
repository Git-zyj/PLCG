/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153799
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
    var_13 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((268435456) >> (((18446744073709551615ULL) - (18446744073709551612ULL)))))), (18446744073709551610ULL))), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_0)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_1] [i_1] [i_0])))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned short) var_2);
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) <= (arr_4 [i_1] [i_1] [i_1]))) ? (max((arr_3 [i_2]), (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [(unsigned short)18] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
                            }
                        } 
                    } 
                } 
                var_15 ^= ((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_0]);
            }
        } 
    } 
}
