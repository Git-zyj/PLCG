/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((-((min(var_10, -32755)))))) - var_5));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = -4;
                    arr_8 [i_1] = 4294967295;
                }
            }
        }
        arr_9 [i_0] |= ((((((arr_2 [i_0]) ? -32755 : (arr_0 [i_0] [i_0])))) ? -1 : -2147483645));
    }
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        var_14 = ((((((arr_13 [i_3]) % (((max((-32767 - 1), 32743))))))) ? -12 : 3817523783730336737));
        var_15 ^= (arr_3 [i_3 + 1] [i_3 + 1]);
        arr_14 [i_3] [i_3] = 1;
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = var_10;
        arr_18 [i_4] = (((((((~(arr_1 [i_4]))) & 1))) ? ((max((((~(arr_4 [i_4])))), (arr_15 [12])))) : (((((8465226100922559547 ? 17624157 : var_11))) ? (((-3817523783730336737 ? 1 : var_0))) : var_7))));
        var_16 = (min(var_16, (~255)));
        arr_19 [i_4] [i_4] = (-32747 || ((max((var_4 - -3817523783730336723), (arr_3 [i_4] [i_4])))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_17 = ((!((!(arr_2 [i_8])))));
                        var_18 = 65534;

                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            var_19 = (max(var_19, ((((arr_20 [i_6] [i_5]) ? (arr_34 [i_9 + 1] [i_8] [i_9] [i_8] [i_5]) : (arr_21 [i_7]))))));
                            var_20 = -6445143621607144067;
                        }
                    }
                    var_21 += (arr_3 [i_5] [i_7]);
                    var_22 = ((var_5 ? (!var_3) : ((-6445143621607144080 ? var_8 : var_5))));
                    var_23 = var_5;
                }
            }
        }
        var_24 = var_1;
        arr_35 [i_5] = ((var_1 + (arr_34 [i_5] [i_5] [14] [i_5] [i_5])));
    }
    #pragma endscop
}
