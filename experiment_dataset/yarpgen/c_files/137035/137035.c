/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_1] = ((!(!var_0)));
            arr_6 [i_0] [i_1] [i_1] = var_11;
            arr_7 [i_0] = 235;
            var_15 = ((!(arr_4 [i_0] [i_0])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_12 [i_2] [i_2] = (arr_10 [i_0] [i_0]);
            arr_13 [i_0] = (247843995355278691 - var_10);
            arr_14 [i_0] [i_2] = (~0);
            var_16 += 17;
        }
        for (int i_3 = 4; i_3 < 22;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_17 = ((((var_5 - -31) ^ (arr_18 [i_3 - 4]))));
                            var_18 ^= (arr_10 [i_0] [i_5]);
                            var_19 -= (min((((!(-63 - 7579225621094419596)))), (min((((arr_4 [i_0] [i_0]) ^ var_10)), -82))));
                        }
                    }
                }
            }
            arr_26 [i_0] = var_7;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            arr_29 [i_0] [i_0] [i_7] = ((-(arr_11 [i_0] [i_7])));
            var_20 = (arr_23 [i_0]);
        }
        arr_30 [i_0] = (((arr_1 [i_0] [i_0]) - (((~var_3) - 4294967295))));
        arr_31 [i_0] [i_0] = ((!(((397759612 | ((max(1, 30))))))));
        var_21 = (min((arr_19 [i_0] [i_0] [i_0]), ((min((arr_20 [i_0] [i_0] [i_0]), (arr_20 [i_0] [i_0] [i_0]))))));
        var_22 = (arr_23 [i_0]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        arr_34 [i_8] [i_8] = -var_13;
        arr_35 [i_8] = ((0 - (arr_20 [i_8] [i_8] [i_8])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_23 = -8;
        var_24 -= ((~(arr_11 [i_9] [i_9])));
    }
    var_25 = 18215486534747732800;
    var_26 = var_7;
    var_27 = -var_1;
    #pragma endscop
}
