/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_20 ^= (arr_10 [i_3]);
                        var_21 &= (arr_4 [0] [6]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_22 = -32744;
                        arr_14 [6] [5] [i_1] [10] = (arr_0 [9]);
                        var_23 = (min(var_23, (((arr_1 [i_1] [8]) ? 133 : (arr_8 [i_1])))));
                    }
                    var_24 = (max(32765, (min((arr_2 [2]), (!32760)))));
                    arr_15 [i_0] [i_1] [i_2] = 16261;
                }
            }
        }
        var_25 = (arr_12 [i_0] [4] [i_0] [4]);

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_19 [i_0] [i_0] [i_0] = (((((arr_9 [i_5] [i_5] [i_5] [i_0]) < (arr_3 [i_0] [i_0] [i_0]))) ? (-32744 == 124) : ((((arr_4 [i_0] [i_0]) < -13633)))));
            var_26 = (-32767 - 1);
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = (-32756 >= -32742);
        var_27 = 8372224;
        arr_24 [i_6] = (arr_3 [i_6] [i_6] [7]);
        var_28 = (min(var_28, (((!(arr_1 [i_6] [i_6]))))));
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        arr_27 [16] [16] = -9199;

        for (int i_8 = 3; i_8 < 18;i_8 += 1)
        {
            arr_30 [i_7] [i_8 + 3] = 361140973;
            arr_31 [i_7] [i_8] = (max((min((arr_26 [i_7]), ((-1073741824 ? (arr_26 [i_7]) : (arr_28 [i_7]))))), (((~(arr_25 [i_7]))))));
        }
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            var_29 = (min(((((arr_25 [i_7]) > 86))), -32717));
            arr_34 [i_9 + 2] [i_7] [i_7] = 63;
            var_30 -= ((-23964 < (arr_25 [20])));
            var_31 = (arr_29 [11] [i_9]);
            var_32 = (min((arr_25 [i_7]), 32719));
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            var_33 ^= ((!(-32767 - 1)));
            var_34 = (arr_33 [i_7]);
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 3; i_11 < 13;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 16;i_12 += 1)
        {
            {
                var_35 = (((min(-17463, (arr_35 [18] [i_11 + 1]))) < ((((arr_37 [i_11] [i_11]) > ((~(arr_36 [i_12 - 2] [i_11]))))))));
                var_36 = 103;
            }
        }
    }
    #pragma endscop
}
