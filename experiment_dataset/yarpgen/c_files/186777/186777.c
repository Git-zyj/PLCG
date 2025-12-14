/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    var_14 = (min((((var_10 && 125) ? var_3 : (var_11 % var_0))), 204));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((-126 ? 29234 : 9843584867803388142));
        var_15 = (min(var_15, ((min((((2069264131 + -1635173141) ? ((min(var_9, var_12))) : (max(var_12, 0)))), ((max((var_4 <= 16278952013256750371), var_8))))))));
        var_16 = (max((((var_1 ? var_4 : var_5))), (min((min(16278952013256750371, var_5)), ((max(var_3, var_9)))))));
    }
    var_17 = 4551217539495828773;
    #pragma endscop
}
