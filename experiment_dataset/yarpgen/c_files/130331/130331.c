/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = (arr_3 [10]);
                    arr_8 [i_0] [i_1] |= (((min((arr_2 [i_2] [i_1]), ((-1 ? (arr_2 [i_1] [4]) : (arr_2 [11] [i_2]))))) + (arr_3 [i_0])));
                }
            }
        }
    }
    var_14 = (max(var_14, var_4));

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = ((((((arr_9 [i_3]) ? (arr_10 [i_3] [i_3]) : 23794))) ? 5088383842309790732 : ((min((arr_10 [i_3] [i_3]), (arr_10 [i_3] [i_3]))))));
        var_15 *= 2047354742194559823;
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            {
                var_16 = min(((((var_6 % 1) == (arr_15 [i_5 + 1] [i_5 - 1])))), (((~var_8) ? 0 : ((max((arr_13 [i_5]), -5854966363521549075))))));

                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    var_17 = (max(var_17, ((((!-4517648780463906428) - ((var_1 + (arr_15 [i_5 + 1] [i_5 - 1]))))))));
                    var_18 |= var_9;
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    arr_24 [i_4] [i_5] [i_7] [i_5] = ((~(arr_23 [i_4] [i_4] [i_4] [i_5])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_19 -= 255;
                                var_20 = (arr_22 [i_7] [i_5 + 1] [i_5 + 1]);
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    arr_32 [i_4] [i_5] [0] = (max(((((arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) || (arr_18 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1])))), ((((((arr_27 [i_4] [i_4]) ? (arr_26 [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_17 [i_4])))) ? (arr_26 [i_4] [i_4] [i_4] [i_4] [20]) : 12603721163214950014))));
                    arr_33 [i_4] [i_5] [i_10] [i_5] = ((18446744073709551615 - (((arr_31 [i_4] [i_5 - 1] [i_5 + 1] [i_10]) - (arr_31 [i_5] [i_5 - 1] [i_5 - 1] [i_5])))));
                }
            }
        }
    }
    #pragma endscop
}
