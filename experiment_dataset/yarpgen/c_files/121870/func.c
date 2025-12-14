/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121870
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) (~(((arr_1 [i_0] [i_0]) - (-1)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_1] [9]), (((/* implicit */long long int) 0U))))) ? (var_5) : (max((arr_4 [i_0] [i_1] [i_1]), (arr_4 [10] [i_0] [7LL])))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (3ULL) : (((/* implicit */unsigned long long int) 3810894922U))))) ? (3837007466108512976ULL) : (3837007466108512991ULL)));
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) 3837007466108512976ULL)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) 14609736607601038639ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 254562013)) ? (((/* implicit */unsigned long long int) 6LL)) : (arr_10 [i_0] [i_0] [i_2] [i_1]))))))))))));
                            arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */long long int) (~(3837007466108512997ULL)));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_1 [i_0] [i_0])))));
            }
        } 
    } 
    var_16 ^= ((/* implicit */long long int) 14609736607601038654ULL);
}
