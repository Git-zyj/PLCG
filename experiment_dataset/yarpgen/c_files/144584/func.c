/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144584
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
    var_16 = ((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (5794971695946071583ULL));
    var_17 = ((((/* implicit */_Bool) var_6)) ? ((+(((((/* implicit */_Bool) var_7)) ? (1482601734764087660ULL) : (var_5))))) : ((-(var_10))));
    var_18 = ((((var_1) >= (var_11))) ? (var_14) : (var_2));
    var_19 = var_10;
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (17ULL)));
        var_21 += (-(((var_2) ^ (arr_1 [i_0]))));
        var_22 = var_1;
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    arr_9 [i_2] [i_3] [i_3] [i_2] = var_13;
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (arr_6 [i_2])));
                }
            } 
        } 
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_0) | (max((var_3), (arr_6 [i_1]))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
    {
        arr_15 [i_4] [i_4] = ((((/* implicit */_Bool) var_10)) ? (max((arr_2 [i_4]), (((11129528244871237180ULL) & (var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_13 [i_4] [i_4]), (18446744073709551615ULL)))) && (((/* implicit */_Bool) arr_2 [i_4])))))));
        var_24 *= ((((/* implicit */_Bool) min((((unsigned long long int) var_14)), (arr_6 [3ULL])))) ? (((((unsigned long long int) var_0)) | (((((/* implicit */_Bool) arr_14 [0ULL] [7ULL])) ? (15028368747250602655ULL) : (18446744073709551597ULL))))) : (arr_3 [i_4]));
    }
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        var_25 &= var_7;
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    {
                        arr_29 [i_5] [i_5] [i_6] [i_7] [i_5] = arr_20 [i_5];
                        var_26 = ((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_24 [i_5]) : (arr_28 [i_5] [i_6] [i_7])));
                        var_27 -= ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (min((18446744073709551615ULL), (16197033287130283846ULL))) : (((unsigned long long int) arr_22 [i_5] [i_5] [i_5] [i_5])));
                    }
                } 
            } 
        } 
    }
}
