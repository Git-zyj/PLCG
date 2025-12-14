/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((min(var_8, (var_1 + 9807662432081361937))) | ((((var_9 < (~8639081641628189671))))));
    var_13 = min((~9807662432081361930), (((var_11 ? (min(-13, 32757)) : -var_2))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [10] |= 9807662432081361939;
        arr_3 [i_0] = (min(8639081641628189659, ((((arr_1 [i_0] [i_0]) > ((min(23415, var_11))))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_14 = 32737;
                        arr_11 [i_0] [i_1] [i_2 + 3] [i_3] = ((((9807662432081361918 != (arr_7 [i_0] [i_1] [i_0]))) ? ((~(arr_7 [i_0] [i_2 - 1] [i_0]))) : (var_4 == 69)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
