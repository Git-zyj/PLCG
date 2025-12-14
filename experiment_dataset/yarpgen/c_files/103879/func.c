/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103879
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
    var_19 = ((/* implicit */long long int) var_14);
    var_20 = ((/* implicit */int) ((_Bool) var_13));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_21 |= ((/* implicit */_Bool) ((unsigned int) ((signed char) arr_0 [i_0] [i_0])));
        var_22 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [(unsigned char)9] [i_0]);
    }
    for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) arr_4 [(_Bool)1]);
        var_23 = ((/* implicit */long long int) ((_Bool) ((unsigned short) ((int) arr_3 [i_1]))));
    }
}
