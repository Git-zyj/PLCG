/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155348
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
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 1])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)117)) != (((/* implicit */int) (unsigned char)101))))))) * (((/* implicit */int) (unsigned char)255))));
        arr_3 [i_0] = ((/* implicit */signed char) (+(1281495490)));
    }
    var_15 = ((/* implicit */unsigned char) ((unsigned short) var_0));
}
