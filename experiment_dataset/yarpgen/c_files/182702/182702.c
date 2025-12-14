/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = var_5;
        arr_2 [i_0] = min(((((max(var_9, 105))) == 105)), (-1053751183 && 1505330725));
        var_20 = (min(-1053751206, 2382554808446878715));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] [i_1] |= (max((max((arr_4 [i_1]), var_6)), var_11));
        var_21 = (max(0, (((-(arr_4 [i_1]))))));
        var_22 = ((!((min(0, 1102919801407512697)))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_8 [i_2] = var_16;
        var_23 |= (min((max(102, 1816745343)), ((max(var_7, var_8)))));
        arr_9 [i_2] [11] = max(150, (~27648346));
        var_24 = (min(var_24, (arr_6 [i_2])));
    }
    var_25 = (min((((~(-32767 - 1)))), var_13));
    var_26 |= (((((min(var_7, var_9)))) ? (((max(27648346, 154)))) : 27648338));
    var_27 = ((min((((6386055527567988440 ? var_2 : var_17))), -5018774432294940886)));
    var_28 |= var_15;
    #pragma endscop
}
