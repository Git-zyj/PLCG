/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_15 = 113;
                                arr_13 [5] [i_3] [i_0 + 3] [i_2] [2] [i_0 + 3] [i_0 + 3] = ((-((-((~(arr_4 [i_0 - 3] [i_4])))))));
                                arr_14 [i_2] [i_1] [i_2] [9] [i_4] = ((~((~(~25)))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 2; i_5 < 6;i_5 += 1)
                {
                    arr_17 [i_0 - 3] [2] [0] |= 113;
                    var_16 = ((-((~(arr_2 [5])))));
                    arr_18 [i_5] [4] [i_5 - 1] = var_14;
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_17 = ((-(--2133427385071282066)));
                    arr_21 [i_0 + 3] [i_0] [i_1] [i_6] = ((!(~-113)));
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_18 = ((-(~-2005563263)));
                    var_19 = (!1305477414354661521);
                    arr_25 [i_7] [i_1] [i_1] = (~-29956);

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_20 = (!29956);
                        var_21 = (!var_11);
                    }
                }
            }
        }
    }
    var_22 = (+-0);
    var_23 = -0;
    var_24 = ((!(!-121)));
    #pragma endscop
}
