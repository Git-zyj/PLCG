/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146417
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 &= ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_2 [i_0])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) 800068965)))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((long long int) var_15));
        arr_4 [i_0] |= ((/* implicit */unsigned short) var_17);
    }
    var_19 += ((/* implicit */unsigned long long int) ((337130150) % (((/* implicit */int) var_10))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) & (-408027877)));
    var_21 = ((/* implicit */unsigned short) var_9);
}
