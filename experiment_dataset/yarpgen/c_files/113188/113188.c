/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 -= ((+(((arr_6 [i_0] [i_0] [i_2] [i_2]) ? (arr_6 [1] [i_1] [i_1] [i_0]) : (arr_6 [i_2] [i_2] [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] = min((arr_3 [i_1] [i_1]), ((-(((arr_0 [i_1]) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_5 [i_2]))))));
                                var_18 = ((733142027 ? (!var_9) : 2));
                                var_19 = (((arr_8 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]) ? ((-((0 ^ (arr_4 [i_3]))))) : (!-733142053)));
                                var_20 = (((!(arr_12 [4] [4]))) ? ((((!(arr_4 [i_3 - 1]))))) : (max((((~(arr_6 [i_0] [i_0] [10] [i_0])))), (((arr_1 [i_3]) ? (arr_5 [5]) : (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_6] [i_5] = ((-(((!(arr_16 [i_5]))))));
                    var_21 = (max(185071290, ((10487286701329670520 / (~var_15)))));
                    var_22 = (max(((((((arr_21 [i_5] [i_5] [i_5]) ? (arr_15 [i_6] [i_5]) : var_16)) != (max((arr_17 [i_5] [i_5]), 733142026))))), (min(((0 ? 8758391737913477932 : 733142062)), ((min((arr_21 [i_5] [i_5] [i_7]), (arr_17 [i_5] [i_5]))))))));
                    var_23 = ((((min(23816, 12288))) ? ((-295416505 ? (arr_18 [i_5] [i_5]) : (arr_18 [i_5] [i_5]))) : (arr_16 [i_5])));
                }
            }
        }
    }
    #pragma endscop
}
