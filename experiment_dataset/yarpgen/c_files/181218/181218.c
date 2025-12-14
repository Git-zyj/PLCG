/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 = ((var_8 ? ((~((var_8 ? var_13 : var_8)))) : var_14));
    var_20 = var_16;
    var_21 = var_16;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_22 = (((var_7 >> (arr_0 [i_0] [i_0 + 1]))));
        var_23 = (((0 | 58) ? ((var_1 ? 476400102 : 15281326426751125166)) : ((((476400118 ? -476400087 : 1288792680))))));
        var_24 = 0;
        var_25 = ((var_7 << (((((min(var_17, (arr_1 [i_0])))) || -476400109)))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_26 = ((arr_0 [i_1 - 2] [i_1 - 2]) && (((476400109 ? 476400109 : 476400087))));
        var_27 = (((max((arr_1 [i_1 - 2]), var_12))) ? (arr_3 [i_1 - 1] [i_1]) : ((var_8 ? (arr_0 [1] [1]) : (!var_13))));
        var_28 = -1;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_29 = var_11;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_30 = ((-30331 ? -32249 : 0));
                        var_31 = ((((((arr_12 [14] [i_3] [14]) + var_17))) ? (arr_14 [i_2] [i_3] [i_2] [i_2] [i_2]) : (arr_8 [i_5 + 1])));
                        var_32 = var_15;
                        var_33 = (arr_1 [i_2]);
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_34 = (~(arr_17 [i_6] [i_6] [i_6] [i_6] [i_6 - 1]));
                            var_35 = 15281326426751125166;
                            var_36 = (((arr_21 [i_2] [1] [i_6 - 2] [i_6] [1] [i_6]) ? (arr_21 [i_2] [5] [i_6 + 1] [i_6] [i_7] [i_4]) : -235522216));
                            var_37 = ((((var_17 ? var_7 : var_9)) & (!var_7)));
                            var_38 = -476400087;
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            var_39 = (-(arr_19 [i_2] [i_3] [i_2] [i_6] [i_8]));
                            var_40 = (((!476400113) >> (((476400123 * var_15) - 11748510448825961267))));
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_41 = 4032;
                            var_42 = ((11069750523250957185 ? 1182066811 : 0));
                        }
                        var_43 = (((arr_19 [i_6] [i_6] [i_6] [i_6 - 1] [i_6]) && var_2));
                        var_44 = ((!(arr_24 [i_6] [i_3] [i_6 - 1] [i_6])));
                    }
                    var_45 = ((var_9 ? (arr_26 [i_3] [i_4] [i_3] [i_3] [i_3]) : (min(((1 - (arr_8 [i_4]))), (((0 ? 476400098 : -958512420)))))));
                    var_46 = ((~(~var_2)));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        var_47 = (arr_28 [i_10]);
        var_48 = (max((arr_28 [i_10]), ((max((476400098 + 0), (var_3 || var_5))))));
        var_49 = ((-(((arr_28 [i_10]) ? var_8 : (arr_28 [19])))));
    }
    #pragma endscop
}
