/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [5] [5] = ((11883712146404815516 ? 224 : 64191));
        arr_4 [i_0] = ((((max(var_3, (arr_0 [i_0]))))));
        var_16 = (((var_11 ? (!var_4) : ((15057613839392561060 ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = ((((((!(arr_6 [i_1] [i_1]))))) ? (!1) : (((!((min(-1426796570, -5))))))));
        var_18 += (max(0, 1663681119699963349));
        var_19 += (arr_5 [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_20 = (max(((+(((arr_5 [i_2]) ? var_9 : (arr_8 [0] [i_2]))))), 13));
        var_21 += -var_8;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_13 [i_2] = (((arr_5 [i_2]) ? (arr_7 [i_2] [i_3]) : var_7));
            arr_14 [4] [4] &= (!95);

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_22 += ((197 ? 197 : var_6));

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_23 += (!var_6);
                    arr_21 [i_2] [i_3] [i_4] [i_2] = 89;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_26 [i_4] [0] [i_2] &= ((~((58 ? 516096 : 11587))));
                    arr_27 [i_2] [i_2] [i_4] [0] = ((!(arr_8 [i_2] [i_2])));
                    var_24 = var_10;
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_30 [i_7] [10] [10] [i_2] &= ((-(!var_6)));
                    var_25 &= -var_5;
                    var_26 = var_5;
                    arr_31 [i_2] = (~214);
                }
            }
            arr_32 [i_2] [i_2] = -0;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_27 = 5594277517655202294;
            arr_36 [i_2] [i_2] = 1614308982;
            arr_37 [i_2] [i_2] [i_2] = (~0);
        }
        var_28 = (~58332);
        arr_38 [i_2] = (!18395);
    }
    var_29 += ((-((min((!var_9), (!1))))));
    var_30 = var_0;
    #pragma endscop
}
