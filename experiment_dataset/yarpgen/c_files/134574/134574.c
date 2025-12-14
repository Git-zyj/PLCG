/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 += min((min((min(131, 134)), (arr_0 [i_2] [i_3]))), ((max(134, (arr_7 [i_0] [i_0] [i_0] [2])))));
                                var_16 = (max(var_16, (min((max(119, 122)), 37))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] = max((max(61, 218)), 122);
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    var_17 = (((arr_18 [i_5] [i_5 - 1] [i_5]) ? (((arr_5 [i_0]) ? 212 : 122)) : (arr_12 [10])));
                    arr_19 [i_0] [i_0 + 1] = (((134 || 37) + 213));
                }
                arr_20 [i_1] [i_0] = max(218, 114);
            }
        }
    }
    var_18 &= ((var_2 << (!229)));
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((((max((!221), (arr_22 [i_6 + 3])))) ? (146 + 141) : (((var_8 || 146) ? (((arr_11 [i_9] [i_8] [i_6] [i_6] [i_6]) % (arr_11 [i_9] [i_8] [i_7] [i_6] [i_6]))) : ((133 ? (arr_0 [i_6] [i_7 - 1]) : 45)))))))));
                            var_20 = ((((!(arr_6 [i_8])))));
                        }
                    }
                }
                arr_31 [i_6] |= 104;
            }
        }
    }
    #pragma endscop
}
