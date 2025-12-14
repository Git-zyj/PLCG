/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 - 1] = 3282906757;
                arr_7 [i_1 - 1] [i_0] [i_0] = arr_2 [i_0] [i_1 - 1];
                arr_8 [i_0] = ((((((!(var_6 % 1012060547))))) / 3282906757));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            {
                var_17 = (((min((arr_5 [i_3 + 1]), 3282906757))) ? ((-var_5 ? ((3282906757 ? 3282906757 : 1012060538)) : ((480094002 << (18446744073709551615 - 18446744073709551611))))) : (min((((3814873303 != (arr_5 [i_3])))), (min((arr_12 [i_3 + 1] [i_2]), var_1)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_20 [i_2] [i_3 + 2] [i_4] [i_5] = 480093992;
                            var_18 = (min(var_18, ((max(((var_3 ? (arr_19 [i_5] [i_5 + 3] [i_5 - 1] [i_3 - 1]) : (arr_19 [i_5 + 3] [i_5 + 3] [i_5 - 1] [i_3 - 1]))), (min(4239979740, 1012060538)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_19 = (-1012060534 ? (((-(arr_12 [i_3 - 1] [i_3 + 2])))) : ((-(arr_16 [i_7] [i_6 - 1] [i_6] [i_6] [i_2]))));
                            arr_26 [i_7] [i_6] [i_3] [i_2] = 480093992;
                            arr_27 [i_7] [i_6] [i_2] [i_2] = (((((-(arr_15 [i_2] [i_3 + 1] [i_7])))) ? (~0) : (arr_12 [i_2] [i_2])));
                        }
                    }
                }

                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    arr_31 [i_8 - 2] [i_2] [i_2] [i_2] = 480093992;
                    var_20 = ((!((!(arr_4 [i_2] [i_3])))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_34 [i_2] [i_9] [i_3] [i_8] [i_9] [i_9] = 54987552;
                        var_21 -= 480094003;
                        arr_35 [i_9] [i_8] [i_3] [i_9] = ((((var_3 ? var_6 : (arr_32 [i_9] [i_9] [i_3] [i_9] [i_2]))) >= -1012060559));
                        var_22 = ((-(arr_32 [i_3] [i_9] [i_3] [i_3 + 2] [i_3])));
                    }
                }
                arr_36 [i_2] = 3282906751;
            }
        }
    }
    #pragma endscop
}
