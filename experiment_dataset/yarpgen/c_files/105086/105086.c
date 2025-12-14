/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 &= (max(-1815610484, -112));
                            var_20 = (((((arr_7 [i_0] [i_0] [i_1] [i_0] [i_1]) << (-112 + 139))) < (((((((-97 + 2147483647) << (((arr_1 [i_2]) - 1615476179)))) != (~-112)))))));
                            arr_10 [i_1] = (((((max(-39, (arr_6 [i_0]))))) ? ((~(arr_1 [i_0]))) : ((max((arr_8 [i_0] [i_1] [i_2]), var_14)))));
                            var_21 &= ((-(((112 >= (3720267544 | 0))))));

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_22 = (((((arr_1 [i_1]) != (arr_1 [i_1]))) ? (((arr_1 [i_4]) >> (var_0 - 939328761))) : (((arr_1 [i_2]) ? (arr_1 [i_1]) : (arr_1 [i_0])))));
                                var_23 = (((1 ? (-1 <= 119) : (arr_12 [i_0] [i_1] [1] [i_3] [14]))));
                            }
                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                arr_17 [i_0] [i_1] [i_0] = (((((~(arr_16 [i_5] [i_3] [i_1] [i_0])))) ? (((arr_13 [i_0] [i_0] [i_2] [i_0] [i_3] [i_5]) ? var_3 : (arr_16 [i_0] [i_1] [i_2] [2]))) : (((!(arr_13 [i_0] [8] [i_0] [i_0] [1] [i_0]))))));
                                var_24 *= -119;
                                var_25 = (max(var_25, (((((((!(arr_5 [i_0] [i_1] [12] [i_3]))))) != (max((~4467570830351532032), var_6)))))));
                                arr_18 [i_0] [i_2] [4] [i_3] [i_5] &= ((((((126 ? (arr_14 [i_2] [i_0] [i_1] [i_2] [i_3] [10]) : (arr_3 [i_5]))) >= (arr_9 [i_5] [i_2] [i_1] [i_0]))) ? 13074412312161882681 : ((min((2394488237 < var_9), (max(694335757, var_8)))))));
                            }
                        }
                    }
                }
                arr_19 [i_1] [i_1] = (max(var_3, (arr_2 [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    arr_27 [i_6] [i_6] [i_7] [i_7] = ((~(((arr_24 [i_6] [i_7] [i_8] [i_8]) ? (arr_24 [i_8] [i_7] [i_7] [i_6]) : (arr_24 [i_7] [i_7] [i_6] [i_6])))));
                    var_26 += (max(((-(max(1, 5397905342486391332)))), (((-28 ? ((((4226020748 < (arr_22 [i_6] [i_7] [i_8]))))) : 4467570830351532029)))));
                }
            }
        }
    }
    #pragma endscop
}
