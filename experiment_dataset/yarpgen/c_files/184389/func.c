/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184389
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
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-554)) ? (var_7) : (var_7)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (((((/* implicit */_Bool) (unsigned char)148)) ? ((-(var_10))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206))))) : (((/* implicit */long long int) ((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
}
