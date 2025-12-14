/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171906
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((arr_1 [0ULL] [i_0]) | (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)248)), (1751401240U)))) : (max((var_9), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))));
        var_17 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 17845423724178197713ULL)))) ? (min((((((/* implicit */_Bool) 323100065407872369ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_11))), (((/* implicit */unsigned long long int) (~(arr_1 [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 536868864))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) min((max((8160ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned long long int) max((-622521488), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (var_15))))))));
        arr_5 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 7936LL)) ? (17845423724178197700ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [(_Bool)1]))));
        var_18 = ((/* implicit */int) max((var_18), (min((((/* implicit */int) var_16)), (var_15)))));
    }
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(var_13))))));
    var_20 = ((/* implicit */signed char) var_15);
}
