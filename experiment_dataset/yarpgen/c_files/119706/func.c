/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119706
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
    var_20 = ((/* implicit */unsigned short) var_18);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_22 = (short)-32649;
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
        var_23 += ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (short)3)) != (((/* implicit */int) (short)32766)))))));
        var_24 |= ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
    }
}
