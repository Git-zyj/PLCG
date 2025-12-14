/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (max((1 || 1475191953), ((~(arr_0 [1])))));
                var_19 = (arr_3 [i_1] [i_0] [i_0]);
                arr_5 [i_0] [i_0] [i_0] = ((arr_2 [i_1]) ? ((((arr_0 [i_0]) ? (arr_4 [1] [i_1] [i_0]) : (arr_0 [i_0])))) : (arr_3 [i_0] [i_1] [i_1]));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_20 = arr_6 [14];
                            arr_14 [i_2 - 1] [i_2 - 1] [i_2] [18] [i_4] [0] = max(((((arr_10 [i_2] [3]) >= (arr_10 [i_2] [i_3])))), (min((arr_10 [i_2] [i_3]), (arr_10 [i_2] [1]))));
                            arr_15 [i_2] [16] [i_4] [i_2] = (arr_10 [i_2] [i_3 + 1]);
                        }
                    }
                }
                arr_16 [i_2] [i_2] = (max((arr_6 [17]), ((((((arr_10 [i_2] [i_3]) ? (arr_9 [i_2]) : (arr_1 [i_2]))) * (((arr_11 [i_2] [i_2] [i_2 + 3]) ? (arr_2 [i_3 + 1]) : (arr_0 [i_3]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    var_21 = max((((arr_18 [i_7 - 1] [i_6 + 1]) ? (arr_18 [i_7 - 1] [i_6 + 1]) : (arr_18 [i_7 - 1] [i_6 + 1]))), (arr_4 [i_6 + 1] [i_7] [23]));
                    var_22 = (((arr_3 [i_6] [i_8 - 1] [i_8 - 1]) ? (((((arr_0 [i_8]) >= (((max((arr_22 [i_7] [i_7] [i_7]), (arr_2 [i_7 - 1]))))))))) : (((arr_2 [i_8 - 1]) ? (arr_3 [i_6 - 1] [i_6] [i_6 + 1]) : (((arr_3 [i_6] [i_6 + 1] [i_6]) ? (arr_2 [i_6 - 1]) : (arr_4 [i_6] [i_7] [i_8])))))));
                }
            }
        }
    }
    #pragma endscop
}
