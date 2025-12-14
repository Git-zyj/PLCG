/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168102
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
    var_16 = ((/* implicit */unsigned long long int) var_11);
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_11))));
    var_18 = ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_19 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0])))), (max((((/* implicit */int) (_Bool)1)), (925609004))))))));
        var_20 &= ((/* implicit */int) 5857221017665843006LL);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_21 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) - (1279961632U)))));
            var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        var_23 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
        var_24 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(8036229893819370779LL))))))));
    }
}
