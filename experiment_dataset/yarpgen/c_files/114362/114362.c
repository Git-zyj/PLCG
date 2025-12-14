/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_2);
    var_13 += ((((9248378674803466746 ? -26880 : var_8))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 *= ((((min((((arr_1 [i_0]) ? var_10 : (arr_0 [18]))), (arr_0 [i_0])))) ? (arr_0 [i_0]) : var_8));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = ((((min(2800811377, 51168))) >> (((max((((!(arr_1 [i_1])))), (((arr_2 [i_2] [20]) ^ (arr_3 [i_0] [4] [i_0]))))) - 9841680650566200885))));
                    var_16 += (((((((arr_4 [i_0] [i_0] [i_0]) >> (((arr_4 [i_0] [i_0] [i_0]) - 638635452))))) ? ((((var_9 || (arr_4 [i_2] [i_1] [i_0]))))) : (arr_3 [i_0] [3] [i_0]))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    {
                        var_17 = var_10;
                        var_18 = (min((max(((-(arr_8 [i_5 + 2] [i_4]))), ((max(14366, (arr_9 [i_5] [i_4])))))), ((((var_7 >= 9122) ? (arr_11 [i_3] [i_5] [i_5 + 1] [i_5]) : var_4)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
