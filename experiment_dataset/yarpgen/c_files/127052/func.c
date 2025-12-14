/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127052
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) ((((((min((arr_0 [i_0]), (arr_0 [i_0]))) + (2147483647))) << (((arr_1 [i_0]) - (9489821710446652304ULL))))) >> ((((+(4194304U))) - (4194284U)))));
        arr_2 [4U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (992U)))) || (((max((0U), (((/* implicit */unsigned int) arr_0 [4LL])))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))));
    }
    var_14 = ((/* implicit */int) (+(((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5)))) : (max((0U), (var_10)))))));
    var_15 ^= ((/* implicit */unsigned short) (+(var_3)));
}
