/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max((((var_8 ? 1 : 14141195271712870046))), (~var_11));
    var_16 = ((var_4 ? (+-1919678935) : (var_10 * var_6)));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_17 = ((-(((arr_0 [i_0 - 3]) / (arr_0 [i_0 - 1])))));
        var_18 = (min(var_18, -25356));
        var_19 = ((((var_3 ? 1 : 338711657))));
        var_20 = (((((58335264414134743 ? ((14141195271712870046 ? 1 : (arr_0 [i_0 + 4]))) : -var_10))) ? ((max(215, (1 >= var_13)))) : (max((arr_1 [i_0 + 2] [i_0]), -19344))));
    }
    var_21 = (min(((max((var_5 && var_3), (max(var_12, var_13))))), (max(var_2, ((1 ? var_0 : var_8))))));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_10 [i_2 + 2] [i_2 + 1] [i_3] = 0;
                    var_22 = (((arr_3 [i_2 + 2]) ? 2714723198 : (arr_7 [i_1] [i_3] [i_3] [i_2 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
