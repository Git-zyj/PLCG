/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = ((var_7 % (((min(var_9, (max(1, var_4))))))));
                arr_5 [15] [14] = (min(1, 7914412747772170297));
            }
        }
    }

    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_12 = ((min((max(var_6, var_7)), ((max(var_6, var_2))))));
        arr_8 [i_2] = (46669 ? (-var_8 && -1955564187) : var_8);
    }
    var_13 = var_3;
    #pragma endscop
}
