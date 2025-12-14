/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_2));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [20] [7] [i_3 - 1] [i_2] [13] |= ((-2692615897299557497 ? (arr_6 [i_0] [i_0] [0]) : (arr_10 [i_0 + 2] [i_0] [i_0 + 1])));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_12 = (max(var_12, (((arr_7 [i_0 - 1]) != var_5))));
                            arr_17 [i_1] [i_2] [i_3] &= (arr_7 [i_0 + 2]);
                            var_13 = (min(var_13, var_8));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_14 |= ((var_0 ? -2078959014 : 199));
                            var_15 = (((arr_12 [i_1 + 1] [i_3 - 2]) - (arr_12 [i_1 - 1] [i_3 + 1])));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_16 -= ((arr_8 [i_0 + 3] [i_1] [i_2] [i_6]) != ((var_9 + (arr_6 [16] [18] [18]))));
                            var_17 -= (~255);
                            var_18 &= ((((arr_13 [i_1]) ? 7061330307870219625 : var_4)));
                            var_19 = (arr_20 [i_0] [i_1] [i_2] [i_3 - 1] [i_3 + 2] [i_6]);
                        }
                    }
                }
            }
        }
        arr_24 [i_0] = ((1 >= (arr_16 [i_0 + 2] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 2])));
        var_20 = (min(var_20, ((((arr_13 [i_0 + 3]) % (arr_13 [i_0 + 3]))))));
    }
    var_21 = ((((((var_0 ? var_1 : var_5)))) ? -5320996072051349780 : ((min((0 >= var_4), var_8)))));
    var_22 = ((((max(4294967295, -5320996072051349780))) ? -var_7 : var_7));
    #pragma endscop
}
