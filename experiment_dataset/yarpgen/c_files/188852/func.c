/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188852
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
    var_16 |= var_10;
    var_17 = var_1;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] |= ((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (((((/* implicit */_Bool) max((var_10), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_0)) ? (8950725528079188219LL) : (-8011704278381065425LL))) : (-1123267631196396172LL))) : (1123267631196396171LL));
        var_18 = max((arr_1 [i_0]), (0LL));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_19 = ((long long int) (-9223372036854775807LL - 1LL));
        arr_7 [i_1] = ((/* implicit */long long int) ((var_0) < (min((((arr_5 [i_1] [i_1]) * (-1LL))), (((long long int) 7027807442105136081LL))))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 22; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), ((-(var_10)))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        {
                            var_21 = var_2;
                            var_22 = max((((long long int) -12LL)), (max((var_9), (arr_10 [i_4] [i_2 + 1]))));
                            var_23 = ((/* implicit */long long int) min((var_23), (arr_9 [i_2 - 2] [i_5 + 3])));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) min((var_24), ((~(max((-7333570582225060017LL), ((+(7LL)))))))));
                var_25 = (-9223372036854775807LL - 1LL);
            }
        } 
    } 
}
