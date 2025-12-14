/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min(((min(((min(8, 259))), ((-(arr_4 [3] [i_1] [i_1])))))), (min((arr_2 [i_1]), (((arr_3 [i_1] [i_1]) ? (arr_0 [i_0]) : (arr_3 [i_0] [1])))))));
                var_12 = ((+((-((max((arr_2 [i_1]), (arr_2 [3]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_13 = (min(var_13, (arr_7 [i_3])));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_15 [i_2] [i_3] [i_2] = (max(((((max((arr_9 [7] [i_3] [i_4 - 2]), (arr_7 [i_2])))) ? (max((arr_8 [i_3]), (arr_13 [i_2] [i_3]))) : ((((!(arr_14 [i_2] [i_2] [i_3] [i_2]))))))), (arr_8 [i_3])));
                            var_14 = (max(var_14, (min(((min(259, ((65409 ? 8 : (arr_13 [i_2] [6])))))), (min((arr_6 [i_4]), (arr_14 [i_2 + 4] [i_2 + 4] [i_5] [1])))))));
                            arr_16 [i_2 + 2] [i_3] [i_3] [i_2 + 2] = (((((~((-(arr_13 [3] [3])))))) ? (arr_10 [i_2] [i_3] [11]) : ((~(min((arr_9 [i_2] [i_2] [i_2]), (arr_12 [i_3])))))));
                        }
                    }
                }
                arr_17 [i_3] = (((((~(max((arr_12 [i_3]), (arr_9 [i_3] [i_3] [i_3])))))) ? (((arr_13 [i_2] [i_2]) ? (((arr_7 [7]) ? (arr_8 [i_3]) : (arr_10 [i_2] [i_3] [10]))) : (((arr_8 [i_3]) ? (arr_9 [1] [i_3] [i_3]) : (arr_11 [i_3] [i_3] [i_3] [3]))))) : ((+(max((arr_14 [i_3] [i_3] [i_3] [i_2]), (arr_10 [i_2] [i_3] [1])))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_15 *= (((arr_14 [i_2 - 3] [i_2 - 3] [0] [i_7 - 2]) ? ((-(arr_20 [i_2] [i_3] [i_6] [5]))) : -242));
                            arr_24 [i_2] [i_2 + 1] [i_3] [10] [i_7] = (min((arr_23 [i_2 - 2] [i_3] [i_6 + 1] [i_7 - 2]), (min(((max((arr_14 [i_3] [i_3] [i_3] [i_2]), (arr_10 [i_2 + 4] [i_2 + 4] [i_6])))), (min((arr_14 [i_2] [i_3] [i_3] [i_3]), (arr_21 [i_3])))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_16 -= ((+((-((min((arr_23 [16] [10] [10] [i_9 - 1]), (arr_26 [21] [i_3] [21]))))))));
                            var_17 *= ((((max((((arr_23 [i_9 - 1] [10] [10] [8]) ? (arr_7 [i_3]) : (arr_25 [4] [i_3] [10]))), (((!(arr_13 [i_2 - 2] [i_8]))))))) ? (((-(arr_28 [1] [1] [i_3] [i_3] [i_3])))) : (min(-2575499111427308557, ((min(1220171556, 65409)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
