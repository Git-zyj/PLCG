/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~8215063050363669789);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [2] [i_1] [i_1] [i_1] = (max(3933016720, 679837313));
                    arr_11 [i_0] [i_0] [i_1 - 1] [i_2 - 3] = ((arr_8 [i_2 - 4] [i_2 - 4] [i_2 - 1]) + (((arr_8 [i_2 - 1] [i_2 - 4] [i_2 + 1]) ^ (arr_8 [i_2 - 4] [i_2 - 1] [i_2 - 2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 -= 244;
                                var_22 = 209;
                                arr_16 [i_0] [i_1] [i_3] = ((!((min(((min((arr_15 [i_0] [i_1 - 2] [i_2] [i_3] [i_4]), (arr_5 [i_2 - 3])))), ((2210720505712784476 ? (arr_15 [i_0] [i_0] [i_2 - 2] [i_3] [i_4]) : (arr_6 [i_1] [1] [1]))))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_23 &= (max((max(3615129983, 8215063050363669785)), 3687205046));
                        var_24 = (((((arr_4 [i_1 - 2] [i_1]) ? (arr_4 [i_1 + 1] [i_1]) : (arr_4 [i_1 - 3] [i_1])))) ? (arr_13 [i_1 - 1] [i_1 - 2]) : ((~(arr_4 [i_1 - 1] [i_1]))));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_21 [i_6] [i_2 - 1] [i_0] [i_0] &= 94;
                        var_25 = ((!(((4018656121316749995 ? (((((arr_7 [i_0] [i_0] [i_0]) && -7495981795123678298)))) : (arr_8 [i_2] [i_2 + 1] [23]))))));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1 - 2] [i_0] [i_7] = ((!((!(arr_13 [i_0] [i_0])))));
                        var_26 += ((-1427999289 != (arr_12 [i_7] [i_7] [i_7] [i_7] [i_7])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
