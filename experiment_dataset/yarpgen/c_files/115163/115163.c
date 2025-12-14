/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((((arr_5 [i_0] [i_1]) == (max(-var_1, (arr_7 [i_0] [16] [i_1] [i_0]))))))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_14 = ((min(25498, 2277130461252858710)));
                        var_15 = (((!19052) % (max((arr_1 [i_0]), (arr_8 [i_0])))));
                        var_16 &= (-(~2117230543));
                        var_17 = -25498;
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_18 = (((((-(arr_14 [i_0] [i_1] [i_2] [i_0] [i_0])))) ? (max(((40061 ? (arr_11 [i_0] [i_0]) : (arr_13 [i_4 - 1] [i_2] [i_0] [i_1] [i_0]))), (((!(arr_11 [i_2] [i_2])))))) : (40044 & 25498)));
                        arr_15 [i_0] [i_1] [i_2] [i_4 + 1] [7] = ((-2105057138 ? 16927184599496776629 : 25465));
                    }
                    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            var_19 = (arr_0 [10]);
                            arr_20 [i_0] [1] [i_0] = ((+((((((arr_11 [i_0] [i_0]) & (arr_12 [i_0] [i_1] [11] [i_5 + 1])))) ? var_1 : (arr_17 [0] [0] [i_2] [i_2] [i_2])))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 17813007027700436062;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            arr_24 [i_0] [i_7] [i_7] = ((-(arr_9 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                            arr_25 [i_7] [i_1] [i_2] = (((arr_10 [i_0] [i_1] [i_5 + 1]) % (arr_10 [i_5] [i_1] [i_1])));
                            var_20 = (((arr_2 [i_5 - 1]) | (arr_2 [i_5 - 1])));
                        }
                        var_21 = (!var_12);
                        var_22 = 762213372;
                    }
                    for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        var_23 = (((((633737046009115550 ? (arr_27 [i_0] [i_8 - 1] [7] [i_8 + 1] [i_8 + 1] [i_8]) : (arr_7 [i_8] [i_8 + 1] [i_8 + 1] [i_8 - 1])))) || ((!(!30208)))));
                        var_24 = ((-(max((max((arr_17 [i_1] [i_2] [i_1] [i_1] [i_0]), 633737046009115555)), (((-(arr_7 [16] [i_1] [i_2] [16]))))))));
                        var_25 = ((((((7105127177330496238 / 4294966784) * 65535))) ? var_4 : var_0));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            var_26 = (var_10 & (arr_0 [i_0]));
                            var_27 = (4294966789 ? 16927184599496776629 : 133693440);
                            arr_43 [i_0] [i_9] [i_11] [i_11] [i_12] = ((-(+-8918720120934687329)));
                        }
                        var_28 = ((var_10 != ((-((-6978890680830952707 ? 271139269 : 136902082560))))));
                        var_29 = var_4;
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        var_30 = (((arr_44 [i_13]) ? (((max(13195, var_11)))) : (((arr_44 [i_13]) | (arr_44 [i_13])))));
        var_31 &= (max(1, (((arr_44 [i_13]) - -1854866745161635422))));
        var_32 = ((((min(2147483647, ((var_11 ? (arr_45 [i_13]) : var_1))))) ? (min(6418231593535449900, (arr_45 [i_13]))) : var_4));
    }
    var_33 = (((~-var_12) ? var_7 : (!var_4)));
    var_34 = -var_8;
    #pragma endscop
}
