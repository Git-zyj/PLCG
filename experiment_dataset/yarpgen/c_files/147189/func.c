/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147189
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) var_18);
        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)3))));
        var_21 -= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)15626))));
        arr_2 [i_0] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1073741824)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) == (min((((/* implicit */unsigned int) (short)8780)), (var_0)))));
    }
    var_22 = ((/* implicit */unsigned short) min((((((/* implicit */int) (short)-16750)) <= (((/* implicit */int) (short)16738)))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) < (567922376U)))));
    var_23 = ((/* implicit */short) (~(((/* implicit */int) var_18))));
}
