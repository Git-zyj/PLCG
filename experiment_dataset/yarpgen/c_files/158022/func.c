/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158022
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775792LL) : (9223372036854775807LL))) : (((long long int) (signed char)33))))) ? (((/* implicit */long long int) (+((+(((/* implicit */int) var_14))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-35))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (signed char)-36);
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((var_7) - (((/* implicit */long long int) ((/* implicit */int) var_16))))))) >> ((((-(((/* implicit */int) max(((signed char)118), ((signed char)(-127 - 1))))))) + (129))))))));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (max(((-(var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 2042218250893434444LL))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
}
