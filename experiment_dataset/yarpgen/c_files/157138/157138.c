/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = (((arr_0 [i_0 + 1] [i_0 + 1]) ? -var_5 : (((((9697 ? (arr_0 [i_0] [i_0 - 1]) : 0)) > (arr_0 [i_0 - 1] [i_0 - 1]))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1 - 3] [i_2] [i_2] = ((0 < 217201510169839582) % (arr_6 [i_2] [i_1 - 2] [i_0] [i_0]));
                    var_19 = (((((18229542563539712034 ? ((min(-1349190130, 1))) : (min(18229542563539712034, var_17))))) ? (!var_11) : ((var_8 >> (65511 >= 2460137228)))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (var_9 || 0);
        arr_12 [i_3] = ((105 ? -var_10 : (min(9223372036854775793, (!206)))));
        var_20 = ((9223372036854775807 ? (arr_9 [i_3]) : ((((min(53135, -1295068051))) ? 198 : 1834830072))));
    }
    var_21 = ((-(max(var_4, var_5))));
    var_22 = var_16;
    #pragma endscop
}
