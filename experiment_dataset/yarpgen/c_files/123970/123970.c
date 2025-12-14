/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max((var_1 & 189), (!0)))) % 11));
    var_12 = var_1;
    var_13 = (-506373290 ^ var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = (~-11);

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_10 [i_2] [i_1] [i_2] = (((arr_5 [i_0] [i_0] [i_0]) ? (8660667182743886556 >> 1) : (arr_3 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_3] [i_0] = (arr_11 [i_3] [i_3]);
                                arr_18 [i_4] [i_3] [i_4] [i_0] [i_4] = (((arr_15 [i_0] [i_4] [i_0] [i_0]) ? (((1 ^ -378674608) ? (arr_3 [i_0]) : ((min(-11, (arr_14 [i_3] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((1 * (arr_7 [i_1] [i_2]))))));
                            }
                        }
                    }
                    arr_19 [i_0] = (min(((max((arr_1 [i_1]), (arr_15 [i_2] [i_1] [i_1] [i_0])))), ((max((((arr_14 [i_2] [i_2] [i_0] [i_1] [i_2] [i_2] [i_0]) ? 1 : 315100694)), 1)))));
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_30 [i_7] [i_6] [i_6] [i_1] [i_0] = (!(arr_29 [i_6] [i_5 - 3] [i_5 - 2]));
                                arr_31 [i_6] [i_6] [i_5 + 2] [i_5] [i_5 - 1] [i_5 + 2] = ((-8654308366640243438 ? ((2833265998 ? (arr_0 [i_0]) : (arr_28 [i_0] [i_1] [i_1] [i_0] [i_1] [i_7]))) : ((-15 ? 1 : 40750))));
                            }
                        }
                    }
                    arr_32 [i_0] = ((-2094406491 ? 20 : 36447));
                }
                arr_33 [i_0] [i_0] [i_1] = ((-20 ? ((min((~36464), ((-83 ? (arr_25 [i_1]) : (arr_27 [i_1])))))) : ((1715818363 ^ (arr_4 [i_1] [i_0])))));
            }
        }
    }
    var_14 = -0;
    #pragma endscop
}
