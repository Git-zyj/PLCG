/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(var_10, (((~1) ? (max(var_2, var_2)) : (((max(var_4, var_10)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_0] = (((147411525 ? var_8 : (arr_1 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = (((((2348731167 ? (arr_0 [i_1]) : (arr_2 [i_3 - 2] [i_0])))) ? (((arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) ? var_9 : (arr_8 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1]))) : (1346457318 || -1346457298)));
                                var_18 = (var_14 == var_7);
                            }
                        }
                    }
                }
            }
        }
        var_19 = ((((37665 ? (arr_4 [i_0]) : 1)) + (arr_0 [i_0])));
        arr_12 [i_0] = (arr_4 [i_0]);
        var_20 = (min(var_20, (((~(((3145660542 || (arr_0 [i_0])))))))));
        arr_13 [i_0] [i_0] = ((((!(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))) | ((-(arr_1 [i_0]))));
    }
    var_21 = var_6;
    #pragma endscop
}
