/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117084
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
    var_17 = ((/* implicit */unsigned int) var_11);
    var_18 = ((/* implicit */unsigned int) -7493067564238755421LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3176294133U)) * (5943536799507277747ULL)));
            var_19 ^= (~(var_7));
            arr_8 [i_1] = ((/* implicit */_Bool) ((arr_2 [i_1 + 1] [i_1 + 1]) << (((14388003697579917784ULL) - (14388003697579917733ULL)))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_13))))) > (var_6)));
            arr_11 [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) var_16);
            var_21 = ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) var_12)))) ? (4196334027962200502LL) : (arr_3 [13ULL] [i_0] [13ULL]));
        }
        arr_12 [14LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
        var_22 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned long long int) var_1);
        arr_16 [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_3]))));
    }
    var_23 = ((/* implicit */long long int) var_1);
}
