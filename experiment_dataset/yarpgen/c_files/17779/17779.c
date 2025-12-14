/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (-82 + -1728873223);
        arr_3 [i_0] = 103;
        var_19 = arr_1 [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = -var_0;
        var_20 += (arr_0 [i_1] [i_1]);
        var_21 += ((12680548288891742309 ? var_10 : (arr_0 [i_1] [i_1])));
        var_22 = (arr_1 [i_1] [i_1]);

        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_12 [i_1] [i_2] = (((((-7720344102006483063 ? var_16 : var_18))) ? (-6920397853203217633 || 43) : 4611655478949654722));
                arr_13 [i_1] [i_2] [i_3] = (((((7720344102006483048 ? (arr_11 [i_1] [3]) : -86))) ? var_8 : 1368067278));
                arr_14 [i_1] [i_2 + 1] = 10353795481857870606;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_19 [4] [i_2] [i_5] [i_4] = (((arr_9 [i_1]) << ((var_0 ? 2 : 9135407924898507815))));
                            arr_20 [i_4] [i_4] [i_4] [i_5] [i_5 - 1] = ((963286715 ? var_7 : (arr_16 [i_2 - 2] [i_2 + 1] [i_5 - 1] [i_5 - 1])));
                        }
                    }
                }
            }
            var_23 += ((var_18 ? ((2458885879048915208 ? -2 : 12680548288891742309)) : ((((var_18 + 2147483647) << (16299255145048293402 - 16299255145048293402))))));
            arr_21 [i_1] [i_1] [i_1] = var_18;
        }
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                {
                    arr_30 [i_7] [i_7] [i_8] = -var_9;
                    var_24 = ((var_9 ? ((-89 ? (arr_26 [i_7]) : 0)) : (((arr_26 [i_7]) ? -109 : var_11))));
                }
            }
        }
        arr_31 [i_6] [i_6] = var_17;
        var_25 = (((((((var_4 ? 2147483647 : var_17))) ? 17349312159670719088 : ((min(1060317568, var_18))))) << (((max(var_4, (arr_22 [i_6] [i_6]))) - 18446744073709551457))));
        arr_32 [i_6] = ((var_1 <= (max(2261022145, 18446744073709551613))));
    }
    var_26 = ((((((1 ? var_9 : var_6))) ? var_10 : 18076675464668420027)));
    #pragma endscop
}
