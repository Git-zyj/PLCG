/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 23481;
        arr_3 [i_0] = -18835;
        arr_4 [i_0] [i_0] = ((-(min((-18835 * 0), 10848))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = (!18835);
                    var_13 -= var_7;
                    arr_12 [i_0] [i_1] [i_0] = arr_7 [i_1 - 1];
                }
            }
        }

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_14 = (8589926400 * var_4);
            var_15 = ((~(arr_0 [i_0])));
            var_16 = (((-((max(var_10, -18835))))));
        }
    }
    var_17 = (min((!-3786973606687202955), (~var_1)));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_19 [i_4] = (!var_7);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    var_18 += ((arr_23 [i_6 - 1] [i_6 - 1]) >= (arr_23 [i_6 - 1] [i_6 - 1]));
                    var_19 = (arr_20 [i_4]);
                    var_20 = (arr_21 [i_5] [i_6 - 1]);
                    var_21 = 3;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 7;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    arr_32 [i_8] [i_9] [i_9] [i_9] = (~23352);
                    arr_33 [i_9] [i_9] [i_8] [i_9] = (max(((max((arr_16 [i_7] [i_8]), (arr_31 [i_7] [i_8 + 1] [i_9])))), (((arr_16 [i_7] [i_9]) & 1))));
                    arr_34 [i_7] [i_8] [i_8] = ((((((arr_6 [i_8 - 1]) & (max((arr_27 [i_8] [i_8] [i_8]), (arr_28 [i_7] [i_8])))))) ? (~var_4) : (max(((-(arr_21 [i_7] [i_9]))), var_3))));
                }
            }
        }
        var_22 += (arr_1 [i_7] [i_7]);

        for (int i_10 = 1; i_10 < 9;i_10 += 1)
        {
            var_23 = (arr_14 [i_10] [i_10] [i_7]);
            var_24 = (max(562949945032704, 54687));
        }
        var_25 = ((+(((!826015339) ? (826015339 <= 562949945032704) : 8551))));

        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            arr_40 [i_11] = var_8;
            arr_41 [i_7] &= 18844;
        }
        for (int i_12 = 1; i_12 < 9;i_12 += 1)
        {
            arr_44 [i_12] [i_7] |= (arr_28 [i_7] [i_7]);
            arr_45 [i_7] [i_7] = ((-((+((3468951971 ? (arr_22 [i_12 - 1]) : -23377))))));
            var_26 = (((((~((~(arr_29 [i_12] [i_12])))))) + ((~(arr_11 [i_7] [i_7])))));
        }
    }
    #pragma endscop
}
