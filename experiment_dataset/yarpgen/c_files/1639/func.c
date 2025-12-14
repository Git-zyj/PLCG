/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1639
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)14434)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (signed char)-107))));
        arr_3 [i_0] [i_0] = ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0])));
        var_16 = var_1;
    }
    var_17 ^= ((/* implicit */signed char) var_0);
    var_18 = ((/* implicit */_Bool) var_11);
}
