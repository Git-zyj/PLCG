/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = (-4 ? ((((min(var_10, var_8))) ? ((14142 ? 1970741272 : 108)) : var_4)) : var_4);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((((min(var_3, var_4))) ? (7 == 4746765332846721906) : (max((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))) ? ((((arr_0 [i_0] [i_0]) > (min(var_9, 253))))) : ((-((max(251, (arr_1 [7] [i_0]))))))));
        var_13 = (arr_0 [i_0] [i_0]);
        var_14 = (max(var_14, (((-116 ? -14143 : 14148)))));
    }
    var_15 = 13699978740862829709;
    #pragma endscop
}
