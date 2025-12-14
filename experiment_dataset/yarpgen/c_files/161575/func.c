/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161575
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
    var_10 = (unsigned char)98;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_11 ^= var_6;
        var_12 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) ((signed char) (unsigned char)0))) : (((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (unsigned char)235)))))) - (((/* implicit */int) max((arr_1 [i_0] [(unsigned char)10]), (arr_0 [i_0] [i_0]))))));
        var_13 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) < (((/* implicit */int) arr_1 [(unsigned char)21] [i_0]))));
    }
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)111)))))));
}
