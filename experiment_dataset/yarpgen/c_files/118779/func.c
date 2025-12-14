/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118779
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
    var_13 ^= ((/* implicit */int) var_1);
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (var_3)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) (-(((int) arr_1 [i_0] [i_0]))))) : (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((int) arr_1 [i_0] [i_0])))))));
        var_16 = ((/* implicit */short) (+(521433704U)));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) (-(var_2))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))) * (var_2)))));
    }
}
