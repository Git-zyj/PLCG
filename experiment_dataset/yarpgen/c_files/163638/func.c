/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163638
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) arr_0 [i_0]);
        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -5905912329805299024LL)) - ((+(arr_1 [i_0 - 2])))));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        arr_7 [i_1] = ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (arr_5 [i_1 - 1]) : (arr_5 [i_1 - 3])));
        var_19 = (-(max((((arr_4 [i_1]) * (((/* implicit */unsigned long long int) arr_3 [i_1 - 1])))), (arr_5 [i_1 - 3]))));
        arr_8 [12ULL] = arr_6 [i_1] [i_1];
        var_20 = (~(max((((/* implicit */unsigned long long int) arr_3 [i_1 - 2])), (((arr_1 [i_1]) % (arr_1 [i_1]))))));
    }
}
