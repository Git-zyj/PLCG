/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135139
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_13 -= ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0 - 2]) & (var_6)))) ? (max((18446744073709551615ULL), (max((arr_0 [i_0] [i_0]), (1722326058370071829ULL))))) : (max((((var_9) ^ (5071436773403827044ULL))), (max((var_9), (5064312278842040796ULL))))));
        var_14 ^= ((max(((~(arr_0 [i_0] [i_0 - 2]))), (arr_1 [i_0]))) * (((unsigned long long int) 16202610054419899678ULL)));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) max((arr_1 [17ULL]), (var_0)))) ? (max((((((/* implicit */_Bool) 5071436773403827065ULL)) ? (var_3) : (var_4))), (arr_0 [i_0 - 2] [i_0]))) : (max((arr_1 [i_0 - 2]), (var_9))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] |= max(((((-(arr_3 [i_1]))) - (2244134019289651938ULL))), (arr_4 [23ULL] [i_1 - 1]));
        var_15 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (154299242147920307ULL) : (arr_4 [i_1 + 2] [i_1])))) ? (arr_1 [i_1 + 2]) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (var_2) : (2244134019289651938ULL))))), (arr_1 [i_1]));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 4) 
            {
                {
                    var_16 = (~((((!(((/* implicit */_Bool) 12076605177410052530ULL)))) ? (((var_3) + (arr_8 [i_1] [i_1] [i_3]))) : (1587609343838879702ULL))));
                    arr_11 [i_1] [i_1] [15ULL] [i_3] = (+(5ULL));
                }
            } 
        } 
    }
    var_17 = (((~((~(var_10))))) >> (((((((5064312278842040796ULL) ^ (var_11))) << ((((~(var_11))) - (11472670950886609811ULL))))) - (4316814440166096894ULL))));
    var_18 = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (1587609343838879714ULL) : (16429400184451291052ULL))))) ? (var_6) : (var_10));
}
