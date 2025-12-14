/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [2] = ((~(((((1 >> (64 - 48)))) ? 47109 : ((max(1, 12)))))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_2] = arr_3 [i_1 - 1];
                        arr_15 [0] [i_2] [i_2] [i_2] = 914067185;
                        arr_16 [i_2] = 246420649;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_2] [i_2] [i_2] = (((((1 ? (arr_17 [i_5 - 1] [i_1] [i_1 + 1] [i_4] [i_4 - 1]) : (arr_1 [i_4 + 1])))) ? (((((914067185 ? var_13 : 0))) ? (((max((arr_3 [i_1]), var_3)))) : (max(-54, (arr_12 [i_0] [i_1]))))) : (((~(arr_20 [i_0] [1] [i_2] [i_0] [1]))))));
                                arr_24 [i_2] [i_1] [i_1] [i_1 + 2] [i_1] [9] = -1884971594;
                                arr_25 [i_0] [i_1] [i_2] = ((134217696 == (((min(var_4, (max((arr_2 [i_2]), -106))))))));
                            }
                        }
                    }
                    arr_26 [0] [i_0] [i_2] = ((-914067186 ? -31 : -7212239029757411719));
                }
            }
        }
    }
    var_16 = (((var_13 ? 0 : (~var_1))));

    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        arr_29 [i_6] [i_6] = (~var_9);
        arr_30 [i_6] [i_6] |= ((((!1) + 1)));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_40 [i_7] [i_9] = ((min(80, 0)));
                    arr_41 [12] [i_8] [i_7] = 1;
                    arr_42 [i_7] = (min((((-2147483647 - 1) ? (arr_27 [i_7]) : (((var_14 ? (arr_36 [i_7] [i_8] [14]) : -1884971594))))), (((~(max((arr_36 [12] [i_8] [12]), var_0)))))));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    arr_45 [i_7] [6] [i_10] = (((max(1, (arr_32 [i_8] [i_8]))) >= -50));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_51 [i_10] [8] [i_12] = (max((max((max(var_0, (arr_34 [i_7] [1] [i_7]))), (arr_37 [i_7] [i_7] [i_7]))), 914067185));
                                arr_52 [i_7] [i_8] [i_10] [i_7] = (arr_47 [i_12] [1] [i_10] [i_8]);
                            }
                        }
                    }
                    arr_53 [i_7] [i_8] [12] = (((arr_31 [i_7]) + (arr_46 [i_10] [i_7] [i_8] [i_7] [1])));
                    arr_54 [i_7] [8] [14] [i_7] = ((79 <= (min(7670, 9223372036854775807))));
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                {
                    arr_58 [4] [i_8] [i_8] [i_8] = -9164995890175921097;
                    arr_59 [i_7] [0] [i_8] [i_7] = ((((914067185 >= (max(-8013952593464635287, 1)))) ? ((max((arr_57 [i_13] [i_8] [6]), (min(-914067186, -573089637))))) : (max(1, (min(-8013952593464635281, 7670))))));
                    arr_60 [i_7] = 49;
                    arr_61 [i_7] [i_8] [i_7] [i_7] = 7262;
                }
                arr_62 [i_7] = (max(49, (((((((arr_43 [i_7] [i_8] [i_8] [i_8]) | -50))) ? -2359876589683331432 : (arr_35 [2] [i_8] [i_7]))))));
            }
        }
    }
    #pragma endscop
}
