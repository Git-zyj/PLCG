/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117346
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
    var_19 = ((/* implicit */unsigned long long int) (unsigned char)7);
    var_20 = ((/* implicit */int) ((var_17) && (((_Bool) ((int) var_12)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) (short)-16))));
        var_21 += ((/* implicit */unsigned char) ((-1593828020) / (-696632987)));
    }
}
