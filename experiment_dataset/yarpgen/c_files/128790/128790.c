/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((87 & -6656843259195255350) ? var_13 : var_0)) << (((min(((var_3 ? var_11 : var_1)), ((min(-80, var_4))))) + 89))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = ((((min(1906696640, (((var_14 >= (arr_0 [i_0]))))))) ? (((max(0, -616289354)) ^ 1106228132)) : ((-((min(-88, var_13)))))));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_17 = var_7;
            var_18 = (min(var_18, (((0 ? 26 : 1)))));
            var_19 = (max((1293072605 < var_12), (min(var_13, (arr_2 [i_1 + 2])))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_20 = 371680122;
            arr_9 [i_2] = (arr_5 [i_0] [i_0] [i_0]);
            var_21 = (max(var_21, (((1359960407 ? 0 : -19734)))));
        }
        var_22 = min(((var_9 ? 87 : (arr_7 [i_0]))), ((((((3155084086 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (var_1 < -78) : 9889))));
        var_23 = 1597804097;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_12 [i_3] = 0;
        arr_13 [10] |= ((((min(56, 1673069816))) && (((-24084 ? (arr_6 [i_3]) : (arr_7 [i_3]))))));
        var_24 = (36 < 2541859955);
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_16 [i_4] = (((1753107321 && var_6) << ((min((arr_10 [i_4]), 0)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                {
                    var_25 = ((((((arr_15 [i_6 - 3]) ? (arr_15 [i_6 + 1]) : (arr_15 [i_6 - 2])))) ? (((-24084 >= (arr_15 [i_6 - 3])))) : ((max(10685, (arr_15 [i_6 - 2]))))));

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_24 [i_6] [i_5] = (-23293 < var_11);
                        var_26 = (max(var_26, ((min(4, (min(((15761309946593637833 ? var_8 : 178)), (arr_14 [i_4]))))))));
                        var_27 = ((1 ? (max((1 < 1), (-80 & 19739))) : (arr_18 [i_4])));
                        var_28 = var_10;
                        var_29 = (max(var_29, (((-104 <= -var_14) ? (((((1 ? 116 : 32247)) <= var_11))) : ((((((-127 - 1) - 72))) ? 61276 : 0))))));
                    }
                }
            }
        }
        arr_25 [i_4] = (((arr_3 [i_4] [i_4]) ? (min(var_12, (arr_14 [i_4]))) : ((1 + ((min((arr_23 [i_4] [i_4] [i_4]), 86)))))));
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 17;i_8 += 1)
    {
        var_30 = ((!(arr_6 [i_8 - 1])));
        arr_28 [i_8] = -2541859975;
    }
    #pragma endscop
}
