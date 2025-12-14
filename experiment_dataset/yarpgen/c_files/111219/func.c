/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111219
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
        arr_4 [(_Bool)1] = ((((/* implicit */_Bool) 2463404959U)) ? (((((/* implicit */_Bool) (unsigned short)37742)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (2199466383U))) : (((/* implicit */unsigned int) arr_1 [6] [i_0])));
        arr_5 [6U] [6U] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        arr_6 [i_0] [10ULL] |= ((/* implicit */int) ((unsigned int) (~(1340601497U))));
    }
    var_19 = (_Bool)1;
}
