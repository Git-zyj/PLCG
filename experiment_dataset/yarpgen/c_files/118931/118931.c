/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(90909075280566948, var_16));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = min(((min(-4948, var_14))), 1633418391038114784);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((min((arr_10 [i_0] [14] [i_2 - 1] [i_2 - 1] [i_4 - 2]), (arr_0 [i_0 - 1]))))));
                                arr_11 [i_4] [i_0] [i_2] [i_0] [i_0] = (var_8 ^ var_10);
                                var_21 += (min((min(((0 ? var_8 : var_3)), var_8)), (min(((max((arr_8 [i_2]), var_0))), (~var_3)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_22 = ((-(min((arr_6 [i_5]), var_17))));
                                arr_26 [i_6] [i_5] [i_6] = ((-2 - ((min((arr_7 [i_5 + 1] [13] [i_5 - 3] [i_5] [i_7 + 3] [i_7]), (arr_19 [i_5]))))));
                                var_23 = ((1535250110515649452 ? -1 : -90909075280566974));
                            }
                        }
                    }
                    var_24 = (max(var_24, ((!((min(1, ((var_16 ? 25296 : var_4)))))))));
                }
            }
        }
    }
    #pragma endscop
}
