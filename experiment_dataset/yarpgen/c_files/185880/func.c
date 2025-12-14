/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185880
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(3129510391951325843ULL)))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_1 [i_0]))))) * (var_15)));
        var_19 -= ((unsigned char) ((unsigned char) arr_1 [i_0]));
        var_20 = ((/* implicit */_Bool) (~(min((var_7), (((/* implicit */unsigned long long int) (unsigned char)77))))));
    }
    var_21 = ((/* implicit */_Bool) min((var_9), (max((((/* implicit */unsigned long long int) var_17)), (6599949296193814544ULL)))));
}
