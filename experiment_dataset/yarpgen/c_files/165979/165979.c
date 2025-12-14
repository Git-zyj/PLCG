/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((13120 && var_3) ? ((0 ? 0 : 255)) : var_9))) ? (((max((!1), 127)))) : (((2147483647 && var_0) ? ((var_1 ? 1242493799523667199 : var_9)) : -var_7))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 ^= ((((((arr_11 [i_0] [7] [5] [13] [i_0] [7] [i_0]) ? var_4 : (max(var_8, 2147483647))))) ? ((var_4 ? (((max(199, var_6)))) : (min(var_0, -1525044536512778769)))) : ((max(((2279180619381213861 ? 246 : 1122133129)), (arr_0 [i_0 - 2]))))));
                                arr_14 [8] [6] [3] [0] [7] = (arr_4 [13]);
                                arr_15 [1] [i_1] = (arr_9 [i_3] [9] [17] [i_3]);
                                arr_16 [12] = (max((arr_0 [i_0]), (((~-1525044536512778769) ? var_8 : (arr_5 [i_0 + 1])))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_15 = (max(var_15, -199));
                        arr_20 [i_0] [i_0] [7] [i_0] = (((arr_4 [i_2]) ? (((-(arr_6 [i_1] [i_1] [1])))) : ((((max(1525044536512778768, 65524))) ? var_10 : (max(16167563454328337754, 54806))))));
                        var_16 = (arr_12 [14]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_17 = 2759541193671371949;
                        var_18 = (max(var_18, (arr_10 [6] [11] [11] [i_6])));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_19 = (((arr_9 [9] [i_0 - 1] [i_0 - 1] [i_0 - 1]) || var_8));
                        var_20 = (max(((var_6 ? ((((arr_2 [5]) ? var_5 : var_12))) : (arr_17 [i_0] [9] [i_0 - 1] [i_0 - 1] [9]))), ((~(((arr_19 [1] [i_1]) ? -1525044536512778765 : 0))))));
                        var_21 += (max((max(((max(1, (arr_24 [i_0] [13] [i_2] [1])))), ((1 ? 65535 : 65535)))), var_11));
                        var_22 = (max(var_22, var_5));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        var_23 = ((var_1 ? (16932 >= var_3) : var_7));
                        var_24 = (max(var_24, (!18446744073709551615)));
                        arr_30 [i_0] [i_8] = ((var_2 ? (arr_21 [i_0] [i_8] [1] [i_8] [8] [i_0 - 2]) : (arr_21 [i_0] [i_8] [i_1] [i_1] [i_1] [i_0 - 2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
