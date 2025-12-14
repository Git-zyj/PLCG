/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_2] [i_0] [i_1] [1] = -3498;
                        var_17 = (max(((max((18446744073709551615 > 9223372036854775807), (min((arr_10 [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0])))))), (arr_0 [i_0] [i_0])));
                    }
                }
            }
        }
        arr_12 [10] |= (max((((arr_5 [i_0] [i_0] [12]) % ((((346231384 != (arr_3 [10] [i_0] [i_0]))))))), ((((arr_5 [i_0] [i_0] [10]) << (!737829413312548080))))));
        arr_13 [i_0] = (arr_6 [i_0] [7]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_18 = (min(var_18, 243));
                            arr_29 [i_6] [15] [12] [i_8] [15] [i_8] = (0 >> 1);
                            arr_30 [0] [i_6] = (((arr_22 [i_8 - 1] [i_5] [i_5 - 2] [i_8 - 1]) >= (arr_22 [i_8 + 1] [13] [i_5 + 3] [i_7])));
                        }
                    }
                }
            }
            var_19 = (0 && 43);
        }
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            arr_33 [i_9] [i_9] [i_9] = 541540103;
            arr_34 [i_9] [i_9] = 1;
            var_20 = (max(var_20, (((5712 ? -8253337948201961989 : (((255 << (((arr_16 [8] [2]) + 883185811))))))))));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_21 = (arr_14 [i_10]);
            arr_38 [i_4] [i_10] [14] |= (arr_37 [i_4] [i_10] [i_10]);
        }

        for (int i_11 = 4; i_11 < 15;i_11 += 1)
        {
            var_22 = (4294967290 != -1);
            var_23 = ((133 & ((((arr_14 [i_4]) ? 293885804 : (arr_8 [10] [12]))))));
            var_24 = 35825;
            var_25 = (min(var_25, (1 & 15717330448753117510)));
        }
        arr_41 [i_4] = 3;
    }
    var_26 = (((((min(var_4, 2147483647)))) ? var_11 : (!1)));
    #pragma endscop
}
