/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102662
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
    var_19 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ ((+(((/* implicit */int) var_17)))))))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((var_2) && (((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (406601847798540505LL))))))));
    var_21 = min((((/* implicit */unsigned int) var_4)), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47))) / (3028157006U))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_22 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_17))))) ^ ((~(3028156992U)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_24 &= ((/* implicit */unsigned char) (~(((((/* implicit */int) ((_Bool) var_17))) + (((/* implicit */int) ((signed char) var_9)))))));
        var_25 &= ((/* implicit */_Bool) max((max((arr_5 [i_1]), (((/* implicit */int) var_5)))), ((-(arr_5 [i_1])))));
    }
}
