/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124122
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
    var_12 = ((/* implicit */long long int) 0ULL);
    var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) 4194048LL)) / (var_6))))), (((unsigned long long int) var_6))));
    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (~(var_11))))))), (((unsigned long long int) ((2720596009474757828LL) <= (var_11))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_15 = ((long long int) arr_0 [i_0] [i_0]);
        var_16 ^= ((/* implicit */long long int) (-((+(var_1)))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_7))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(0LL))) % (arr_2 [i_1 + 1])))) && (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775794LL)) && (((/* implicit */_Bool) var_3))))), (max((arr_2 [i_1]), (arr_0 [14LL] [i_1]))))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) 18446744073709551615ULL))));
        var_19 = ((/* implicit */long long int) min((var_19), (arr_2 [i_1])));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = max((min((((unsigned long long int) 15728640ULL)), (var_3))), (((((/* implicit */unsigned long long int) var_7)) % (arr_3 [i_2]))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [0ULL])) ? (((/* implicit */unsigned long long int) arr_5 [i_2])) : (arr_6 [i_2]))), (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_2] [i_2])))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((arr_5 [i_2]) > (arr_2 [0LL]))))))) : (((long long int) arr_2 [i_2]))));
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) min((var_21), (max((var_0), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3])) || (((/* implicit */_Bool) arr_6 [i_3]))))), (var_7)))))));
        var_22 = ((/* implicit */unsigned long long int) arr_1 [i_3] [i_3]);
    }
}
