/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182198
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) (((~(var_3))) - (((/* implicit */unsigned long long int) (~(arr_7 [i_2] [4LL]))))));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 7316289151450654067LL)) ? (6277101864527730255ULL) : (255ULL)))))) ? (((/* implicit */unsigned long long int) var_6)) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))), (16325424593684862687ULL)))));
                    var_14 = ((/* implicit */long long int) max((arr_4 [i_2] [i_1]), (arr_6 [i_0] [0LL])));
                    var_15 = ((/* implicit */long long int) arr_6 [0ULL] [17LL]);
                    arr_9 [i_2] [i_2] [8ULL] &= ((/* implicit */unsigned long long int) ((long long int) ((long long int) max((arr_2 [i_2 - 4]), (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_3);
    var_17 = ((unsigned long long int) -7173475340814551538LL);
    var_18 = var_8;
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 1) 
            {
                {
                    arr_19 [i_5] [9LL] [i_4] [i_5] = arr_14 [i_4];
                    var_19 *= ((/* implicit */unsigned long long int) max((max((var_8), (((/* implicit */long long int) ((216172782113783808ULL) == (((/* implicit */unsigned long long int) arr_17 [i_3] [i_4] [6LL]))))))), (arr_10 [i_3])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                arr_24 [16ULL] [i_5] [i_5] = ((/* implicit */long long int) arr_11 [i_6 - 3] [12LL]);
                                arr_25 [i_5] = ((/* implicit */unsigned long long int) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
