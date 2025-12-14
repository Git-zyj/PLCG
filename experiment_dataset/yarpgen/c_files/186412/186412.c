/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_10 = ((!(((var_3 ? (arr_2 [i_0 + 2] [i_0 + 2]) : (arr_0 [i_0 - 1]))))));
        var_11 = (min(var_11, var_9));
        var_12 &= min((min((((-32753 ? -18989 : var_7))), ((var_0 ? 5945968835564477263 : (arr_0 [i_0 + 1]))))), var_9);
        arr_3 [i_0] = (((((arr_1 [i_0 + 1] [i_0 + 2]) ? 19017 : 89)) >= (arr_1 [i_0 + 2] [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_13 = (var_0 >= 13607624);
        arr_6 [i_1] = (arr_5 [i_1] [i_1]);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_12 [i_3] = (max(((-18989 ? -1 : ((-24569 ? 1 : 5945968835564477263)))), ((max((arr_10 [i_2] [i_3] [19]), (arr_10 [i_3] [i_3] [i_2]))))));
                arr_13 [i_2] [i_3] = 24569;
            }
        }
    }
    #pragma endscop
}
