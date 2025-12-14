/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((max(127, var_14))), (max(var_12, (min(var_15, 2147483647))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((~(arr_3 [i_0 + 4] [i_0 + 3]))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = -65535;
                                var_19 += (max((-127 - 1), (max((min(708697999080947245, var_12)), (arr_13 [i_0 + 3] [i_1] [i_0 + 3] [i_2 - 1] [i_4])))));
                                var_20 = (15390216060874080673 >= 235);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_22 [i_5] [i_5] = ((min(((255 ? 34630 : 7434), -1841837846))));
                            var_21 = var_4;

                            for (int i_7 = 0; i_7 < 13;i_7 += 1)
                            {
                                var_22 = (max(var_22, ((((742708940 ? 34630 : 249))))));
                                arr_25 [i_5] = (min(1, 2147483647));
                                var_23 = -1;
                                var_24 = (var_9 >= var_4);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_4;
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 10;i_10 += 1)
            {
                {
                    arr_34 [i_8] [i_8] [i_9] [5] = ((max(1, (~18359348877681888664))));
                    arr_35 [i_8] [i_9] [i_9] = ((min((min(14845, (arr_26 [1]))), (var_9 && var_10))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_26 = 3513486664;
                                var_27 = (max(var_27, (((((min(((min(-122, 4))), (min(-125, 18446744073709551615))))) ? var_7 : (~1))))));
                            }
                        }
                    }
                    arr_41 [i_9] = (max(1, (max(2238198501, 1470))));
                }
            }
        }
    }
    #pragma endscop
}
