/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132388
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_10))));
            arr_8 [i_1] = ((/* implicit */long long int) ((unsigned int) ((signed char) arr_5 [i_0])));
            var_17 = ((/* implicit */int) var_7);
        }
        var_18 *= ((/* implicit */unsigned int) var_6);
        var_19 = ((((/* implicit */_Bool) max((13692083022385761770ULL), (var_12)))) ? (min((((/* implicit */unsigned int) arr_1 [i_0])), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
    }
    var_20 &= ((/* implicit */long long int) var_8);
    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((2145921898U) & (((/* implicit */unsigned int) ((int) var_1)))))) : (9223372036854775807ULL)));
}
