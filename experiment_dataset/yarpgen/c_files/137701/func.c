/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137701
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
    var_15 ^= (-(max((((unsigned long long int) var_4)), (var_11))));
    var_16 ^= max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(17ULL))))))), (var_8));
    var_17 = ((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551598ULL))) ? (var_8) : (var_4));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 = min(((~(arr_0 [i_0] [8ULL]))), (((((/* implicit */_Bool) 18446744073709551598ULL)) ? (17ULL) : (18446744073709551604ULL))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(1075954926948814871ULL)))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(140737488355327ULL))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((unsigned long long int) max((arr_4 [i_1 + 2]), (arr_4 [i_1 + 1]))))));
        var_22 = (~(144115188075331584ULL));
    }
    var_23 = ((((((/* implicit */_Bool) max((var_6), (var_14)))) ? (((((/* implicit */_Bool) 11336798389362069199ULL)) ? (11023563329699335797ULL) : (18446744073709551609ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551610ULL)))))))) % (((((/* implicit */_Bool) ((var_6) >> (((var_4) - (13365620753128543783ULL)))))) ? ((-(var_10))) : ((~(18246402000893237538ULL))))));
}
