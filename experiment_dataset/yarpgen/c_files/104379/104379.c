/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(var_2, 1))) ? (((var_8 ? var_3 : var_2))) : var_4));
    var_11 = (max(var_6, 1));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] = (((1 ? var_2 : 4294967295)));
            var_12 = (min(((~(arr_0 [i_0 + 3]))), (arr_0 [i_0])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_13 = ((var_6 ? ((1 ? var_0 : 4480705027711990722)) : 232));
            var_14 *= var_7;

            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                var_15 = var_8;
                arr_10 [i_3] [i_2] = ((var_6 - (arr_7 [i_0 + 2])));
                var_16 = (((arr_7 [i_0 - 1]) % 1));
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_14 [i_4] [i_2] [3] = var_8;
                arr_15 [i_2] [11] = ((arr_9 [i_0 + 3] [i_0 + 2] [i_4]) ? var_3 : 4480705027711990701);
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_17 = -4480705027711990694;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        {
                            arr_23 [i_5] [i_2] [i_2] [i_2] [5] = 5589462735355575728;
                            var_18 = 3202863659476846455;
                            arr_24 [i_5] [i_2] [i_5] [i_6] [i_6] = ((-(arr_6 [i_0 + 2] [i_7 + 2])));
                            arr_25 [8] [i_5] [i_5] [i_0] = (((var_3 + -4480705027711990715) ? (((~(arr_8 [i_2] [i_5] [i_7 + 3])))) : -4097108792719848720));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_28 [11] [i_8] = var_6;
            var_19 = (((var_0 << (188 - 185))));
            arr_29 [i_8] [i_8] [i_0] = (var_2 & 1);
        }
        var_20 = (((max(131, (arr_27 [i_0] [i_0])))));
    }
    var_21 = (max(var_21, var_8));
    #pragma endscop
}
