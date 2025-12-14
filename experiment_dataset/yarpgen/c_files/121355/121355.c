/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((!1) != var_4)))) - var_2));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, 7));
        arr_2 [i_0] = ((-(-8 / -1)));
        arr_3 [i_0] = ((~(arr_0 [i_0])));
        var_15 = (min(var_15, -1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_16 = (arr_14 [i_1] [i_2] [i_3] [i_4]);
                        var_17 *= (((arr_13 [i_2 + 3] [i_4] [i_4] [i_2 + 1]) % -7));
                    }
                }
            }
        }
        var_18 = (~10);
    }
    var_19 = ((~(((~1432979256458475148) + var_12))));
    #pragma endscop
}
