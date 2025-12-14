/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_1 / 8512515185430691801);
    var_12 = (max(var_12, (max(8512515185430691801, 40892))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_13 = ((var_8 > 8512515185430691791) + -1271614557);
                        var_14 = ((((!((!(arr_5 [i_0] [11] [i_2 - 1] [i_2]))))) ? var_5 : var_8));
                        arr_9 [i_3] [i_2] [i_2] [10] = ((((max(1, (arr_0 [i_2 - 1])))) ? (((arr_3 [i_2 + 1] [i_2 - 1] [i_2 + 2]) ? (arr_3 [i_2 + 1] [i_2 + 2] [i_2 - 1]) : var_6)) : ((((arr_8 [i_0] [i_0] [1] [i_2] [17] [10]) * (((arr_8 [13] [i_0] [i_0] [i_2] [i_3] [1]) ? (arr_2 [16] [i_2] [16]) : (arr_1 [i_1]))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_15 = (~var_0);
                                arr_15 [14] |= 3841539533;
                                var_16 = (arr_5 [i_5] [i_1] [i_2] [i_4]);
                                var_17 = ((1271614557 % ((((8512515185430691801 == var_4) >= (((!(arr_13 [i_0] [i_1] [i_2] [4] [i_5])))))))));
                            }
                        }
                    }
                    var_18 ^= ((1 / ((0 ? (arr_14 [i_2 + 2] [i_2] [i_2] [i_2] [i_2 + 1] [10] [i_2 + 1]) : (arr_14 [6] [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1] [0] [i_2 + 2])))));
                }
            }
        }
    }
    #pragma endscop
}
