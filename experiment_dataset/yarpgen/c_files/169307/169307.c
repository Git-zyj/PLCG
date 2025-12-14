/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((var_8 / (arr_4 [7]))))));
                var_15 = ((1 ? (arr_1 [i_1 + 2] [i_0]) : ((min(var_6, (~253))))));
            }
        }
    }
    var_16 = var_7;
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_17 = ((!(((var_10 ? 8214 : (arr_13 [i_2 + 2] [i_2 - 1] [i_4] [i_2 - 1]))))));
                    arr_14 [i_4] [i_3] [6] [i_2] = (!103);
                    var_18 = (((!-3745689982151051173) & (((arr_2 [i_2 + 3]) ? (arr_2 [i_2 - 1]) : 105))));
                    arr_15 [i_2 + 2] [i_3] [i_4] = (arr_4 [i_2 + 3]);
                    arr_16 [i_2 - 1] [i_3] [i_2 - 1] = 1743405151034498248;
                }
            }
        }
    }
    var_19 = (min(var_11, ((-(!var_2)))));
    #pragma endscop
}
