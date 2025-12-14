/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142411
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_13))));
    var_15 = ((/* implicit */short) var_6);
    var_16 ^= ((/* implicit */unsigned char) min((((/* implicit */int) var_4)), ((~(var_1)))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) max((arr_2 [i_0] [i_0 + 1]), (((/* implicit */int) var_4))))) ? (arr_2 [i_0] [i_0]) : ((-2147483647 - 1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)86)) != (((/* implicit */int) (short)32767))))) : (var_13)))));
        var_18 += ((/* implicit */unsigned char) var_7);
    }
    for (int i_1 = 2; i_1 < 6; i_1 += 3) 
    {
        arr_5 [9] = arr_1 [0];
        arr_6 [i_1] = min((((((/* implicit */_Bool) var_2)) ? (1435385465) : ((~(((/* implicit */int) (short)0)))))), (min((((var_10) / (var_1))), (var_12))));
        var_19 += ((/* implicit */short) (+(((/* implicit */int) (short)1))));
        var_20 = max((max((((var_12) | (var_6))), (var_2))), (((((/* implicit */int) (short)-1)) * (-1445659550))));
        var_21 += ((/* implicit */unsigned char) arr_1 [2]);
    }
    for (int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_0)))) ? (((int) var_6)) : (((var_10) / (((/* implicit */int) arr_0 [i_2]))))));
        arr_10 [i_2] = ((/* implicit */unsigned char) (short)-1740);
    }
}
