/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106603
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)0)))) <= (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)0)) || (arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = (((-(((/* implicit */int) arr_2 [i_0] [i_0])))) + ((-(((/* implicit */int) arr_2 [i_0] [i_0])))));
    }
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) (~(var_2))))))))));
    var_20 -= ((/* implicit */unsigned short) var_0);
}
