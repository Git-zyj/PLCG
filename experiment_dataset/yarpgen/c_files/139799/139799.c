/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(((1600624960 ? (!1600624960) : 1600624983)), var_3)))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_12 = var_1;
        var_13 = (min((((-(((!(arr_2 [2] [i_0]))))))), (max(var_9, (arr_2 [i_0] [i_0 + 2])))));
        arr_3 [i_0 + 1] = arr_0 [i_0 + 2];
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_14 = (max(9223372036854775807, 217));
        arr_8 [4] [9] = ((!((((39 ? 65535 : 38)) < 40376))));
        var_15 = ((var_4 > (arr_0 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                {
                    var_16 -= var_6;
                    arr_15 [i_3] [i_3] [i_3] [i_3] = ((~(arr_14 [i_1] [i_1] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
