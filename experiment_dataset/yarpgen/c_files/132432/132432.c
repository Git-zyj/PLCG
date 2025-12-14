/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -126;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (+-4611686009837453312);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                arr_8 [i_0] [i_1] [i_0] = (((-9223372036854775807 - 1) ? (!1) : ((((max((arr_6 [i_0] [i_0] [i_0] [i_0]), var_4)) || ((!(arr_7 [i_0] [i_1]))))))));
                var_11 = (105 * -16136);
                arr_9 [i_0] [i_0] [i_0] [i_0] = (-546576628 ? (max((arr_4 [i_0]), var_9)) : 13759184987161749993);
                var_12 = (arr_7 [i_0] [15]);
                var_13 += (max((max(8806, -28)), (((!((max(var_2, var_1))))))));
            }
            arr_10 [i_0] [5] [i_0] = 133;
        }
        arr_11 [i_0] = ((~(~173)));
        var_14 -= (max(((((arr_7 [i_0] [i_0]) ^ (arr_7 [i_0] [i_0])))), 16));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = ((min(((1 ? 7911031109065908458 : 20)), 3216359942)) ^ (((((~(arr_4 [3])))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((min(1, (max(((48941 ? 1 : 126)), ((var_3 & (arr_22 [i_5] [0] [i_5]))))))))));
                                var_16 -= (((min((arr_6 [i_5 - 1] [i_6 - 4] [i_6] [14]), var_8)) != ((min((313793261 ^ -56), 4063232)))));
                                var_17 = 346534906436222067;
                            }
                        }
                    }
                    arr_27 [i_5] [i_3] [19] = ((((max((~var_4), -8540173052334140284))) ? (((!(!var_7)))) : var_6));
                    arr_28 [i_3] [i_4] = ((var_3 ? var_9 : -8934178333336555653));
                }
            }
        }

        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_32 [i_3] = min((arr_18 [i_3] [i_3]), ((var_4 ? (arr_18 [i_3] [i_8]) : (arr_18 [i_3] [i_3]))));
            arr_33 [i_3] = 0;
        }
    }
    #pragma endscop
}
