/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127039
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
    var_19 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0])) < (((((/* implicit */_Bool) arr_2 [i_0] [(signed char)9])) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */int) ((-213647442) < (((/* implicit */int) var_14))))) : (((/* implicit */int) arr_1 [(_Bool)1]))));
        var_20 ^= ((/* implicit */unsigned char) (_Bool)1);
        arr_4 [10LL] [7] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)56)) << ((((~(((/* implicit */int) arr_1 [i_0])))) + (11052)))));
    }
    var_21 = var_4;
    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
    var_23 = (!((_Bool)1));
}
