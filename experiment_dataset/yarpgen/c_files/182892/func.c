/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182892
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
    var_12 = ((var_3) != (((/* implicit */unsigned int) ((2096616485) | (((((/* implicit */int) var_1)) >> (((-2096616481) + (2096616497)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] [1ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3501758816U)) && (((/* implicit */_Bool) 14324196030669423391ULL))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (((_Bool)0) ? (4092612722U) : (1046918650U))))));
            var_14 = ((/* implicit */_Bool) (-(((((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) (_Bool)1)))) ? (18371995141899400644ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0]))))));
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */unsigned long long int) 793208479U)) & (14324196030669423405ULL))))))));
        }
    }
}
