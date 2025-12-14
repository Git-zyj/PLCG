/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_9 ? 4294967295 : ((min(var_7, (min(var_11, var_13)))))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] [i_0] = 0;
                        arr_11 [i_0 - 3] [i_0 - 2] [i_1] [i_1] [i_2] [i_3] = 0;
                    }
                }
            }
        }
        arr_12 [i_0] = 498326908196546158;
        arr_13 [i_0] = (min((!1), 1835));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_23 [i_4] [i_4] [i_4] [i_4] = (213940635 && 66);

                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_0 - 3] [i_0] [i_0] = var_4;
                            var_17 += var_11;
                            arr_28 [i_0 - 3] [i_0] [i_0 - 3] [i_0 - 3] [i_0] [i_0] &= (min(-var_1, (((min(var_5, -1836))))));
                            arr_29 [i_5] = ((((((min(498326908196546170, 65535))) ? ((((arr_26 [i_0]) <= 15823497237586339593))) : (((var_2 || (arr_1 [i_0] [i_0])))))) - ((((((arr_24 [i_7] [i_5] [i_5] [i_6] [i_5]) < (arr_22 [i_0] [i_4] [i_0] [i_4])))) + (var_4 - 0)))));
                            var_18 &= ((((min((min(1, var_4)), (((var_0 ^ (arr_1 [i_0] [i_5]))))))) ? (min(var_8, (1831844186 >> var_14))) : ((0 ? ((min(var_15, 6))) : ((var_6 ? (arr_17 [i_0] [i_7]) : var_2))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            arr_34 [8] [i_4] [8] [8] [i_6 + 1] [i_8] &= ((!(((arr_17 [i_0] [1]) && (arr_19 [1] [i_4] [i_4])))));
                            arr_35 [i_0] [i_0] [i_0] [6] [i_0] = (arr_15 [4]);
                        }
                        var_19 ^= (min(((min((arr_20 [4] [i_5] [i_4]), (arr_25 [i_0 - 3] [1] [i_5 - 2] [i_5 - 2] [i_6])))), (((((((arr_8 [i_5] [i_5] [5] [i_5]) ? (arr_20 [1] [16] [i_4]) : 3))) && -1839)))));
                        arr_36 [i_0] [i_4] = ((((((1 & 0) ? 490193849 : (((arr_0 [i_0]) ? 18602 : 2849933301))))) ? (~var_0) : (arr_3 [i_0])));
                    }
                }
            }
        }
    }
    var_20 = (min(((min(var_7, -213940635))), var_6));
    #pragma endscop
}
