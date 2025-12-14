/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10645
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
    var_12 = ((/* implicit */unsigned int) var_5);
    var_13 = ((/* implicit */signed char) (+((+(((/* implicit */int) max((var_0), ((signed char)-99))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) (signed char)62);
        arr_3 [i_0] = ((/* implicit */unsigned char) var_6);
    }
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((~((~(((/* implicit */int) var_4)))))) : (((/* implicit */int) ((unsigned char) min((var_8), (((/* implicit */unsigned long long int) var_9))))))));
    var_15 = ((/* implicit */int) var_4);
}
