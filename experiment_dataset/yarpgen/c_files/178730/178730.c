/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] |= (((((var_6 ? (3138405744 - 0) : var_2))) ? var_4 : (((arr_5 [i_2 + 1] [1] [i_1] [i_1]) ? 0 : var_3))));
                    var_11 = 44;
                    var_12 = (max(var_12, (((((((var_5 << (803055771 - 803055766)))) && ((((arr_4 [i_0] [i_2]) / var_6)))))))));
                    arr_8 [i_2] [0] [i_2] = arr_5 [3] [i_2] [14] [20];
                    var_13 = (max(var_13, ((max(90, 1365193782)))));
                }
            }
        }
    }
    var_14 += ((((max((3898168945355882980 & -19), 3898168945355882983))) ? 163 : 16159954851203087201));

    /* vectorizable */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        var_15 = (arr_9 [i_3 + 1]);
        arr_12 [i_3] [i_3] = (((arr_9 [i_3 - 2]) ? (arr_9 [i_3 - 1]) : (arr_9 [i_3 + 1])));
    }
    var_16 = (max(var_16, (59 & var_4)));
    #pragma endscop
}
