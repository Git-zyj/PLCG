/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!23403);
    var_18 += 76;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = 2359855472550880520;
        var_20 = (min(-2359855472550880520, (-2359855472550880514 % 3)));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_21 = (min(var_21, 32362));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_22 = ((-(min(3, 4))));
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_2] [1] = (~3);
                        var_23 += (min(-5, 3));
                        var_24 = ((-(max((arr_9 [i_0] [i_2] [i_0] [i_0]), 4292584576))));
                    }
                }
            }
        }
        var_25 = (342498175289589544 <= 249);
        arr_12 [13] [5] = 342498175289589567;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_26 = (~-26);
            var_27 = 249;
            var_28 = (max(var_28, ((((((0 ? 342498175289589567 : 32377))) ? ((((!(-32767 - 1))))) : -8009466147337268428)))));
            var_29 = (arr_9 [1] [i_4] [i_4] [i_4]);
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_30 = ((~((((arr_18 [i_6] [i_6]) != -2359855472550880521)))));
            var_31 = (min(var_31, (!32767)));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_32 = 3;
                            var_33 = (max(var_33, 1261988841));
                            var_34 = (-2 ? (((2359855472550880521 ? 36715 : 32367))) : (~7165970055432619713));
                        }
                    }
                }
            }
            arr_28 [i_4] = 28816;
            arr_29 [i_7] [i_7] [i_7] = -2544369080624621121;
        }
        var_35 = ((!43229) ? ((-342498175289589553 ? 2359855472550880520 : 3617940565180375674)) : (arr_3 [i_4]));
    }
    #pragma endscop
}
