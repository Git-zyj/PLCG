/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157376
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
    var_15 *= ((unsigned long long int) ((((((/* implicit */_Bool) 10994480634551144962ULL)) ? (var_7) : (var_4))) >> (((max((var_3), (var_7))) - (14351892514624494134ULL)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 ^= (~((~(min((12936689459495514115ULL), (4442361083182088016ULL))))));
                    var_17 = var_8;
                    arr_6 [i_2] [i_2] [i_2] [i_2] &= ((5510054614214037504ULL) - (((unsigned long long int) 14004382990527463593ULL)));
                    var_18 = ((unsigned long long int) ((var_1) + (arr_3 [i_0] [i_2])));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (arr_5 [i_0] [i_0] [i_3])));
            arr_9 [i_0] = (+(((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_3])) ? (12936689459495514110ULL) : (12555201274192345683ULL)))));
            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_3])) ? (9071683850779678152ULL) : (arr_8 [i_3] [i_3] [i_0])))) ? (min((((arr_5 [i_0] [i_3] [i_0]) / (var_3))), (3163731961597792969ULL))) : (max((18353435521858717937ULL), (arr_0 [i_3] [i_0]))));
            arr_10 [i_3] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (var_1) : (15354508960196915691ULL)))) ? (((5891542799517205929ULL) ^ (arr_4 [i_0] [i_0] [2ULL]))) : (((arr_8 [i_0] [i_0] [i_0]) ^ (arr_4 [i_0] [i_0] [i_0]))));
            var_21 -= var_4;
        }
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        var_22 = ((unsigned long long int) 1116892707587883008ULL);
        var_23 = arr_12 [i_4];
    }
    var_24 = min((4062940361205103588ULL), (var_5));
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        arr_16 [i_5] = ((unsigned long long int) ((arr_2 [i_5] [i_5] [i_5]) - (arr_14 [i_5])));
        var_25 = ((unsigned long long int) ((unsigned long long int) 18446744073709551615ULL));
        var_26 = ((((/* implicit */_Bool) (+(((arr_5 [i_5] [i_5] [i_5]) - (var_0)))))) ? (((((/* implicit */_Bool) arr_2 [i_5] [i_5] [i_5])) ? (0ULL) : (arr_2 [i_5] [i_5] [i_5]))) : (((((/* implicit */_Bool) 9375060222929873471ULL)) ? (var_11) : (((arr_5 [i_5] [i_5] [i_5]) + (arr_14 [i_5]))))));
    }
}
