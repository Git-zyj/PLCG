/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_6);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_8 [4] [i_3] [i_2] = (min((((((-1432665912 ? 0 : 12))) ? (min((arr_1 [i_0]), 11384239698872149025)) : (!var_4))), var_5));
                        arr_9 [i_3] [i_2] [i_3] = (!14);
                        var_12 = (((max((min(-1, 0)), (arr_3 [i_1] [i_1] [i_1]))) <= (((((arr_0 [i_3]) || ((min(0, var_7)))))))));
                        var_13 = (arr_7 [i_0] [i_1]);
                    }
                }
            }
        }
        arr_10 [i_0] = -135;
        var_14 = (arr_7 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        arr_13 [4] = (10907442649631367260 + -335687535);
        arr_14 [i_4] [i_4 + 3] = (~var_2);
    }
    var_15 = -799462142;
    #pragma endscop
}
