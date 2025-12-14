/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((1 ? var_2 : 4294967274))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, (((((((max(1, (arr_2 [i_0] [i_1] [i_0]))) + 16))) <= ((~(min(var_9, (arr_4 [i_2]))))))))));
                            var_15 = (arr_2 [i_0] [i_1] [i_2]);
                            var_16 = (max(var_16, (((~0) ? (((arr_5 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]) ? -37 : (arr_5 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]))) : (((-((((arr_4 [i_0]) >= var_7))))))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_12 [16] [i_4] [i_4] [i_0] = var_1;
                    arr_13 [i_4] [5] [i_4] = (((~7) * (((max(18446743936270598144, (arr_10 [i_0] [i_1] [i_4]))) % (max(1, 10192747753658041909))))));
                    var_17 ^= ((((((arr_9 [i_0] [i_1] [i_0] [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_4])))) ? ((-(arr_9 [i_0] [i_1] [i_4] [i_4]))) : ((max((arr_9 [i_0] [i_1] [i_1] [i_1]), (arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_18 = ((+(max((arr_16 [i_0] [i_1] [i_4] [i_5] [i_6]), -2114881785164110825))));
                                var_19 = (max(var_19, ((max(((-753390730 ? -1568111309 : -23529)), -1476075465)))));
                            }
                        }
                    }
                }
                arr_20 [11] [i_0] [i_0] = ((-4439 ? (min((max(576443160117379072, 2217945440)), (((13 ? 836170761 : (arr_2 [i_1] [i_0] [i_0])))))) : (((((-(arr_16 [i_0] [i_0] [i_0] [i_1] [i_1])))) ? ((((arr_11 [i_0] [i_0]) / (arr_10 [i_0] [i_1] [i_0])))) : (arr_18 [i_0] [i_1] [i_1] [i_0] [10] [i_1])))));
                var_20 += ((!(((((!(arr_15 [i_0] [i_0] [i_0] [14] [i_1]))) ? (min((arr_16 [i_0] [i_0] [i_0] [i_1] [i_1]), (arr_15 [i_0] [i_1] [i_1] [i_1] [i_1]))) : (!65525))))));
                arr_21 [i_1] = ((0 | ((~(arr_15 [i_0] [i_0] [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_21 = 2431924008;
    #pragma endscop
}
