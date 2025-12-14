/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_10 -= ((((((arr_5 [i_0] [i_1] [i_2] [i_0]) >= (max(25946, 2147483647))))) % (((arr_3 [i_0]) ? (arr_3 [i_1]) : 5593))));
                        arr_10 [i_0] [i_0] [i_3] [i_0] = (((((5614127013396908678 ? 28727 : (arr_9 [i_3] [1] [i_2] [i_3])))) ? (arr_4 [i_0]) : (arr_1 [i_3])));
                        arr_11 [i_0] [i_3] [i_0] [i_3] = ((((((((arr_0 [i_0]) ? 31554 : (arr_9 [i_3] [i_3] [i_2] [i_3]))) ^ var_1))) ? (((-3269 * 1) ? var_9 : var_9)) : (max(((0 ? (arr_6 [i_2]) : var_9)), ((((arr_6 [i_3]) ? 50661 : var_2)))))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_11 = (((((arr_3 [i_0]) ? ((var_6 ? var_3 : (arr_5 [i_2] [i_2] [i_1] [i_0]))) : (var_4 == var_9)))) ? ((((!var_6) * (arr_2 [i_0] [8])))) : (!32256));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_12 = 0;
                            arr_16 [1] [i_1] [1] [i_4] [i_5] = ((var_6 ? (arr_15 [i_0] [3] [i_2] [i_4] [i_5]) : var_9));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_13 -= ((18446744073709551595 | (arr_2 [i_4] [i_6])));
                            var_14 *= (((arr_18 [i_6]) ? (((arr_14 [i_1] [0] [i_1]) ? 28831 : var_4)) : var_3));
                            var_15 = (max(var_15, ((((arr_18 [i_0]) ? ((56881 ? (arr_0 [0]) : (arr_17 [i_0] [i_1] [8] [i_4] [i_4] [i_6]))) : ((28734 ? (arr_6 [i_1]) : 1)))))));
                            var_16 = (((arr_4 [i_1]) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] [i_0]) : 0));
                            var_17 = ((-((31554 ? 8252036326880370791 : 63))));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_7] [i_1] [i_1] = (((max(var_2, 1))) ? (arr_0 [i_7]) : (-7930963554132815392 && var_7));
                            arr_24 [i_7] [i_7] [i_7] [i_4] [i_7] [i_1] [6] = ((!(!var_9)));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_18 -= (max(11, (max(var_6, var_7))));
                                var_19 = ((+(min((arr_31 [i_0] [i_2] [i_0]), ((-190882301 ? 36819 : (-127 - 1)))))));
                                var_20 = (-946331489 ^ -170306974);
                            }
                        }
                    }
                    arr_32 [i_0] = 1;
                    var_21 = (min(var_21, 745409386683089015));
                }
            }
        }
    }
    var_22 = (max(var_22, ((((((var_0 < var_5) ? var_6 : (var_7 - -234788260))) & var_8)))));
    var_23 = min(var_7, ((41609 ? (max(var_9, -112138679)) : var_1)));
    var_24 = (var_7 <= var_1);
    var_25 = ((2560841818876998317 || (((5 ? var_6 : var_0)))));
    #pragma endscop
}
