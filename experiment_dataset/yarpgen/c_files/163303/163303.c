/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = var_5;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = 9;
        var_18 = (min(var_18, 650203870));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_19 = (min(var_19, ((min((-650203867 >= 1), (((~var_3) * -650203850)))))));
                    arr_12 [12] [i_2] [i_3] = ((18446744073709551615 % 28) * (!var_0));
                    arr_13 [i_1] [i_1] = (min((max(1, var_5)), var_9));
                    arr_14 [i_2] [i_2] [i_2] = (min(-85, -93));
                }
            }
        }
        arr_15 [i_1] [i_1] = ((-29041 * ((((-4 && ((min(0, 134)))))))));
        arr_16 [1] = var_1;
        arr_17 [i_1] [i_1] = -504764865;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        arr_21 [i_4] = -650203858;
        var_20 = (-6900 <= var_9);
    }
    var_21 = (min(var_3, var_1));
    var_22 = ((~(~var_3)));
    #pragma endscop
}
