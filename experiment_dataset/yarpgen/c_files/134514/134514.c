/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = var_6;
        arr_5 [i_0] [i_0] = (min(var_0, (-32767 - 1)));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_16 = (((max((arr_6 [i_4 - 4] [i_1 + 1]), var_1)) ^ (8217744001357410285 ^ 9115971568254836330)));
                                arr_19 [i_1] [i_1] [2] [i_4 + 2] [i_5] |= ((~(((!(arr_9 [i_2] [i_4 - 1]))))));
                            }
                        }
                    }
                    var_17 = 16775168;
                    arr_20 [i_1] [i_3] [i_3] = (((arr_9 [i_1 - 2] [i_1 + 1]) > (((255 >= (arr_17 [i_1] [i_1] [i_1] [i_3] [i_3]))))));
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_18 = (max(var_18, (((((((arr_3 [i_6]) ? (arr_3 [i_6]) : (arr_3 [i_6])))) ? (((~var_15) ^ (134217727 > 2684898496))) : ((min((arr_22 [i_6]), var_6))))))));
        arr_23 [i_6] = 10229000072352141331;
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_19 -= max(var_12, ((192 & (((arr_25 [i_7]) ? (arr_25 [7]) : var_5)))));
        arr_26 [1] = (6 > -1);
        arr_27 [i_7] [i_7] |= -10;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 9;i_10 += 1)
                    {
                        var_20 = (min(var_20, (~var_10)));
                        var_21 -= (((arr_25 [i_9]) == var_1));
                        arr_36 [i_8] [i_10] = (arr_35 [i_9] [4] [i_10 - 2] [i_10 - 2]);
                        var_22 = (((((3357968054 ? (arr_28 [i_7]) : (arr_2 [i_9])))) ? var_15 : (arr_34 [i_10] [i_10 - 1] [i_10 - 1] [i_10 + 2])));
                    }
                    var_23 = var_9;
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
    {
        var_24 &= var_10;
        arr_41 [i_11] = (max((arr_39 [i_11]), var_4));
        var_25 = (min(var_25, 0));
        var_26 = (!var_12);
    }
    #pragma endscop
}
