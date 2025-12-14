/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((max((max(-25331, 1)), (max(1, -25343)))), (max((min(-1, var_12)), ((max(var_9, var_1)))))));
    var_15 = (max((min(((min(var_4, var_4))), (max(var_8, var_13)))), ((max((max(1377029828, var_0)), ((min(-32742, var_12))))))));
    var_16 = (min((max((min(var_4, 7948284928529633998)), ((min(25342, 1377029834))))), ((min((max(248, (-32767 - 1))), (min(var_7, var_12)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [1] = (max(32739, (min((max(3, 4167091123)), ((max(127876146, -2117038978088401566)))))));
        var_17 = (min(((max(((max(var_1, var_6))), (min((arr_1 [i_0]), (arr_2 [9] [i_0])))))), (min((min((arr_2 [i_0] [i_0]), (arr_0 [3]))), ((max((arr_2 [i_0] [i_0]), var_13)))))));
    }
    #pragma endscop
}
