/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166597
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
    var_13 = max((var_7), (0ULL));
    var_14 |= ((/* implicit */int) ((((/* implicit */_Bool) (~(var_6)))) && (((/* implicit */_Bool) max(((-(18446744073709551598ULL))), (var_4))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) 3ULL);
        arr_4 [i_0] = ((/* implicit */int) min(((((~(7124607993095363226ULL))) - (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_0]) / (arr_1 [i_0])))) ? (max((arr_1 [i_0]), (1069547520))) : (((arr_1 [i_0]) - (arr_1 [i_0]))))))));
        arr_5 [i_0] [i_0] = var_5;
        arr_6 [i_0] [i_0] = ((/* implicit */int) max((var_4), (((/* implicit */unsigned long long int) arr_1 [12]))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_11 [i_2] = ((int) arr_0 [i_2]);
            var_15 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))));
            arr_12 [i_2] [i_1] [i_2] = max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((-642376643) & (arr_1 [i_1])))) < ((-(18446744073709551598ULL)))))), (var_2));
            arr_13 [i_2] [0] = ((/* implicit */int) arr_0 [i_1]);
        }
        arr_14 [i_1] &= max((18446744073709551598ULL), (0ULL));
        arr_15 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
    }
    for (int i_3 = 3; i_3 < 19; i_3 += 2) 
    {
        var_16 *= (((-(arr_17 [i_3 + 3] [i_3 + 3]))) - (((/* implicit */unsigned long long int) (+((-(var_3)))))));
        arr_19 [i_3] = min((9591513306460890920ULL), (min((max((((/* implicit */unsigned long long int) var_8)), (11322136080614188376ULL))), (arr_16 [14ULL]))));
        var_17 |= ((/* implicit */int) arr_16 [i_3 - 1]);
    }
}
