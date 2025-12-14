/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((0 ? 1 : 0))) ? (arr_1 [i_0]) : -116));
        arr_4 [i_0] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 = (max(var_15, ((((arr_5 [i_1] [i_1]) ? var_14 : ((~(-127 - 1))))))));
        arr_7 [i_1] = (arr_5 [i_1] [i_1]);
        arr_8 [i_1] = (!(arr_6 [i_1]));
        var_16 = (min(var_16, (((!(18014398508433408 & 4294967295))))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_12 [i_1] = 1694985626;
            arr_13 [i_1] [i_1] [i_1] = (((arr_5 [i_2] [i_1]) < var_5));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_18 [i_3] = 255;
        arr_19 [i_3] = (arr_17 [i_3]);
    }
    var_17 += (((((var_11 ? 34441 : var_1))) ? var_10 : (max((1 - 95), (~var_8)))));
    var_18 = (((((((var_1 ? 398863333 : 2147483636))) ? 4160749568 : -2147483632)) <= (((1 % (((-127 - 1) ? var_6 : 42553)))))));

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        var_19 = (32767 ? ((6028 ? ((3521440875 ? 0 : 515530901)) : -56)) : 31094);
                        arr_31 [i_5] [i_5] = 1;
                        arr_32 [i_6] [i_6] = (min((((var_12 / 56) ? 1 : ((-831350387 ? 0 : (arr_20 [i_4]))))), ((((1 <= var_3) ? (31094 && var_12) : 1)))));
                        var_20 = (max(var_20, (((((var_2 >= 30857) && 1568626004)) ? (((arr_22 [i_4] [i_6] [i_7]) | 60802)) : 2147483636))));
                        arr_33 [i_4] [i_4] [i_4] [i_4] = 1;
                    }
                }
            }
        }
        var_21 -= ((((((arr_23 [i_4]) ? 2147483632 : var_5))) ? ((~(arr_23 [i_4]))) : (arr_23 [i_4])));
        arr_34 [i_4] = 6022;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        var_22 = (((((((max(-1, 1))) ? (arr_38 [i_4] [i_9] [i_10]) : var_10))) ? (((32767 == (~var_3)))) : (-127 - 1)));
                        var_23 = (((((min(63, -2147483640)))) && 4096));
                        var_24 = (max(var_24, (((((427004159 ? (((arr_27 [i_8] [i_8] [i_4]) ? var_5 : 46)) : (~515530901))) == (-1 % 60506))))));
                        arr_43 [i_4] [i_8] [i_9] [i_8] = -29;
                        arr_44 [i_4] [i_4] = -120;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        arr_47 [i_11] = (((arr_45 [i_11] [i_11]) ? 0 : ((~(arr_46 [i_11] [i_11])))));
        var_25 = 1;
        arr_48 [i_11] [i_11] = ((123 - 39995) ? 60818 : (~866));
    }
    #pragma endscop
}
