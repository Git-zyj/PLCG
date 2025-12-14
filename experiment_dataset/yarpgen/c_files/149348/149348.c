/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((arr_2 [i_0 - 1]) * ((min((arr_1 [i_0 + 1] [i_0 - 1]), (arr_1 [i_0 + 1] [i_0 - 1]))))));
                var_11 = (!var_8);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] = ((var_3 ? ((((arr_8 [i_3 + 1] [i_2] [i_2] [i_3 + 1]) / (arr_8 [i_3 + 2] [2] [2] [i_3 + 2])))) : (arr_9 [i_1] [4])));

                            for (int i_4 = 1; i_4 < 1;i_4 += 1)
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] = (~-1665);
                                var_12 = (min(((6583005145048643341 ? -var_9 : var_6)), (arr_12 [9] [9] [9] [2] [i_3] [i_3 - 2] [i_4])));
                                arr_17 [i_1] [i_1] = (min(-15990, ((1 ? 1884928097267750780 : (((1 ? 1 : -27963)))))));
                                var_13 = 1;
                            }
                            arr_18 [i_3] [i_2] [i_1] [9] = (((((var_1 ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2])))) ? (arr_10 [i_3 + 1] [i_0 - 1] [i_2] [2]) : var_3));
                            var_14 = var_4;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 21;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_15 = ((min(((173 ? -5665 : -1486530220)), (((arr_20 [i_5]) ? (arr_19 [3] [i_9]) : var_8)))));
                                var_16 = ((+(min((arr_28 [i_5] [i_5] [i_5] [i_5]), (133688954979665711 != 2640246359)))));
                                arr_33 [i_5] = (((((min(5, -2519)) > (arr_26 [i_5 - 1] [i_5] [i_7 - 3]))) ? (arr_30 [i_5 - 3] [i_5 - 3] [i_5] [10] [1]) : ((((((arr_19 [i_5] [i_5]) ? (arr_20 [i_5]) : 1654720936)) > ((((arr_21 [19]) ? (arr_23 [i_7] [i_6] [i_5]) : var_8))))))));
                            }
                        }
                    }
                    var_17 = (min(((min(((min(16738, (arr_27 [i_5] [i_5] [10] [i_7] [i_7])))), ((-(arr_31 [i_5 - 2] [i_5 - 2] [i_6] [i_6] [7] [i_7])))))), ((-(min(1, 7314178342781000197))))));
                }
            }
        }
    }
    #pragma endscop
}
