/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_10 = (min(var_10, (((~(((arr_0 [i_2] [i_1]) ? var_0 : var_5)))))));
                    var_11 = ((var_1 ? (arr_6 [i_0] [i_1]) : var_3));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_12 = (min(var_12, (((((!(((var_4 ? var_8 : 35475))))) ? ((((var_4 ? var_1 : (arr_7 [i_0] [i_1] [i_3] [i_3]))))) : (((var_1 < (-2147483647 - 1)))))))));
                    var_13 = (((((((max(30, var_4))) ? (((!(arr_5 [i_0] [5] [i_3])))) : var_4))) ? (~var_2) : (arr_10 [i_0])));
                    var_14 = ((10650 << (((var_6 / var_3) ? (arr_1 [i_0]) : 5213))));
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_5] [i_5] = (((((min((arr_11 [i_4 + 1] [i_5] [i_5 - 1] [i_5]), (arr_8 [i_0] [i_5 + 1] [i_4 - 1] [i_4 - 2]))))) - (((~var_5) ? 262136 : 81))));
                            arr_16 [i_0] [i_0] [i_1] [i_4] [i_5] [i_5] = (min(((min(var_6, var_2))), 2));
                            var_15 = (((max(((82 ? -32 : -5955056201315480759)), ((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? -59 : var_3)))))) ? ((((((arr_13 [i_0] [i_0] [13] [i_0] [i_0] [i_0]) / (arr_10 [i_5 - 1]))) != ((((arr_10 [i_1]) ? -55 : -23)))))) : ((+(((arr_9 [i_5] [i_4] [i_0]) ^ 0)))));
                        }
                    }
                }
                var_16 = ((((((min((arr_10 [i_0]), 1))) || (var_9 > var_4))) ? (arr_9 [i_0] [i_1] [i_1]) : var_9));
            }
        }
    }
    var_17 = (14777911881484455604 ? (((((var_4 ? var_8 : -18))) ? var_6 : 172)) : ((var_0 ? (3767211725 || var_1) : var_9)));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    arr_26 [i_8] [i_7] [i_7] [i_6] = (min((((arr_20 [i_6] [i_8]) ? (max(var_4, var_7)) : (~var_2))), (~var_7)));
                    var_18 = (min(var_18, (((var_6 ? (arr_21 [12]) : ((min((arr_18 [i_7]), (arr_0 [i_6] [i_6])))))))));
                }
            }
        }
    }
    #pragma endscop
}
