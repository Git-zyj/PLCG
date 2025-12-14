/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -18285;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = (((((!((((arr_0 [1] [1]) / 14187990346681842502)))))) << ((((22323 || 65517) <= ((min((arr_0 [1] [i_2]), 50))))))));
                    arr_7 [i_0] [6] [5] = ((((((((-(arr_2 [i_0] [i_0] [i_0])))) ^ (((arr_5 [i_0] [i_0] [i_0] [i_0]) | (arr_4 [i_2] [i_1 + 1] [i_2] [i_2])))))) ? (((((var_17 ? (arr_3 [i_0]) : var_15)) <= (((arr_0 [i_0] [i_0]) ? var_0 : -6127673286536940498))))) : 28));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    arr_14 [i_3] [i_4] [i_3] = (arr_13 [i_3] [i_4] [i_5] [i_3]);
                    arr_15 [i_3] [i_4] [i_3] = ((var_17 && (((-((6127673286536940521 ? var_15 : (-2147483647 - 1))))))));
                    arr_16 [i_5] [i_4] [i_3] = ((~(((!((min((arr_10 [i_3] [i_3] [i_5]), (arr_9 [i_3] [i_3])))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_22 [i_7] [i_4] [i_7] [i_5] [i_7] [i_7] [i_5] = (arr_12 [i_3]);
                                arr_23 [i_3] [i_3] [i_3] [i_7] [i_3] [i_3] = ((((max((arr_18 [i_3] [i_3] [i_3] [i_3]), (arr_18 [i_3] [i_4] [i_6] [i_7])))) ? (arr_8 [i_7]) : ((~(arr_8 [i_5])))));
                                var_19 = 17782154070379116247;
                                var_20 += (((((arr_11 [i_3] [i_3] [i_3]) & ((~(arr_19 [12] [12] [i_6] [12]))))) / ((((max(1155501929, (arr_11 [20] [i_4] [i_5])))) ? ((28 ? var_8 : (arr_11 [i_3] [i_3] [i_7]))) : (arr_12 [i_5])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
