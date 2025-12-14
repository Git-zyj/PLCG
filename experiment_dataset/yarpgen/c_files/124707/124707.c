/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((((((1 ? -36 : 1))) ? 2413934619 : (!1)))), var_8));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (((((1881032676 ? (min(var_8, (arr_0 [i_0]))) : (((((arr_7 [i_0] [i_1] [i_2]) != 11))))))) ? (arr_6 [i_0] [i_1] [i_2]) : (min(var_3, (((4294967295 && (arr_5 [i_0] [i_0] [i_0]))))))));
                    var_20 = ((+(((max((arr_0 [i_0]), (arr_2 [i_0]))) % (arr_5 [1] [i_1] [i_0])))));
                    arr_8 [i_0] [i_1] [i_2] = ((0 * (arr_2 [i_2])));
                    var_21 += 0;
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_22 &= 1;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_19 [i_6] [12] [i_5] [i_4] [i_3] [i_0] [i_0] = ((-9268 ? (((1 || (arr_3 [i_0] [i_0])))) : ((((arr_12 [i_0] [i_3] [0]) || 0)))));
                            var_23 = (arr_17 [i_5 + 3] [i_5 - 2] [i_6 + 2] [i_6] [i_6 - 1]);
                            arr_20 [0] [i_3] [i_4] [i_5] [i_4] = (arr_10 [i_0] [i_3] [14]);
                            var_24 = -124;
                            arr_21 [i_0] [i_3] [i_4] [i_4] [i_0] [i_3] = (-1 == 4138433400);
                        }
                    }
                }
            }
        }
        var_25 = (((~(min(24624922, var_14)))));
    }
    var_26 = var_10;
    var_27 = (min(var_9, ((((max(var_14, var_7))) ? ((max(var_15, var_12))) : var_11))));
    var_28 = -13;
    #pragma endscop
}
