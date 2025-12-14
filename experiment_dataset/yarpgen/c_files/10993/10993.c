/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] = (max((max(67108864, var_13)), (!var_6)));
                arr_7 [i_0] [i_1] = (arr_2 [19] [i_1]);
            }
        }
    }
    var_18 = (0 | 18014364149743616);

    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_19 -= -1853712747;
        var_20 = ((!(!1)));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        arr_15 [10] = (+-3039198543);
        var_21 += ((+(((arr_5 [22]) ? -18014364149743617 : var_3))));
        arr_16 [i_3] [0] = 2837997430983520699;
        var_22 = -1262276451;
    }
    #pragma endscop
}
