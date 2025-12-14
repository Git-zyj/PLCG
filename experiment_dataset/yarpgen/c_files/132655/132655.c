/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(!var_5)));
    var_11 = (!16601);
    var_12 = ((!((!(!var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] |= ((!(!1018032603)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_13 += -16401140541463586043;
                        arr_10 [i_0] [i_0] [i_1] [i_0] = (+-1018032603);
                        arr_11 [i_0] [i_1] [i_2 + 1] [i_3] = (--32767);
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        arr_14 [i_4 - 1] [i_0] [i_0] [i_0] = (~1761719684);
                        var_14 = (min(var_14, ((((~(arr_2 [i_0] [i_0] [i_0])))))));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_18 [i_0] [i_5] [i_2] [i_0] [i_5] [i_2 - 2] = -var_9;
                        var_15 = ((-(((!(arr_5 [i_5] [i_2] [i_1] [i_0]))))));
                        var_16 = ((-((~(~484959714)))));
                        arr_19 [i_0] [i_1] [i_2] [i_5] = (((-(arr_2 [i_5] [i_1] [i_0]))));
                    }
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        var_17 = ((!(+-3432572283412300153)));
                        var_18 = (-(+-5592));
                    }
                    var_19 = (+-5591);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_20 |= -4294967295;
                                arr_27 [i_8] [i_0] [i_7] [i_2] [i_0] [19] = (~71);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 &= ((!(!-var_6)));
    #pragma endscop
}
