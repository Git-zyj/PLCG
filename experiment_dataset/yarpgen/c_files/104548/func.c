/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104548
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
    var_12 = ((/* implicit */signed char) var_6);
    var_13 *= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)14))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 -= ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
        arr_2 [20] [i_0] = ((/* implicit */signed char) (unsigned short)56373);
        arr_3 [i_0] [(signed char)5] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)9158))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4))) : (((((/* implicit */_Bool) (unsigned short)2)) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
    }
    var_15 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) max((var_5), ((signed char)-21)))) + ((+(((/* implicit */int) (signed char)3))))))));
}
