/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = (min(((-(var_1 != var_2))), (~10014)));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_14 *= (arr_0 [i_0 + 1]);
                var_15 = (~10014);

                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (~var_0);
                        arr_17 [i_0] [i_0 + 1] [i_0 + 1] [5] [i_1] [i_0] [i_4] = 268435455;
                        var_16 = ((-0 ? (146 * 17349498015425565449) : (arr_9 [i_0] [i_1] [i_1])));
                    }
                    var_17 = (min(var_17, (((!((max(5255928760683843405, (var_10 + var_3)))))))));
                    arr_18 [i_1] = var_1;
                    arr_19 [i_0] [i_0 + 1] [0] [i_0] |= 31142;
                    arr_20 [i_1] [8] [i_1] |= 89;
                }
                var_18 = (min(var_18, -var_1));
                var_19 = (max(var_19, ((max((arr_6 [i_2]), ((~((-649879121 ? (arr_14 [i_0 + 1] [i_1] [8] [i_1] [i_2]) : 89)))))))));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_20 = (min(var_20, ((min(-439547988, (arr_1 [i_0 + 1]))))));
                var_21 *= ((~((-28087 ? 199 : 1))));
            }
            var_22 = ((+((max((arr_15 [i_0 - 1] [i_0 - 1] [i_0 + 1]), (arr_15 [i_0 - 1] [i_0 - 1] [i_0 + 1]))))));
        }
        arr_25 [i_0] |= ((~(max((((var_4 ? (arr_7 [i_0] [i_0] [i_0 - 1] [i_0]) : 52))), var_3))));
        var_23 = (((((var_8 ? (arr_21 [i_0 - 1] [i_0 - 1] [i_0 + 1]) : var_0))) / (((arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [1]) * (max(116, 5255928760683843405))))));
        arr_26 [i_0] [i_0] = (-(--2079108135));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_29 [i_6] = 127;
        arr_30 [i_6] = ((((max((!var_4), ((!(arr_27 [1] [i_6])))))) * ((min((arr_27 [i_6] [i_6]), ((min(103, var_10))))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        arr_33 [i_7] [i_7] = var_8;
        var_24 = (((arr_31 [i_7] [i_7]) ? var_10 : var_0));
    }
    var_25 = 1;
    var_26 |= (min(1, (min(var_9, var_1))));
    #pragma endscop
}
