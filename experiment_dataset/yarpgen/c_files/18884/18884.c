/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((((max(-37, 991831581))) + (min(-23, 4263942286))))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = ((31025010 ? 59 : -59));
        arr_4 [10] |= (((arr_0 [6] [6]) ? 59 : (arr_0 [i_0 - 1] [i_0 + 2])));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                var_13 *= ((-(arr_10 [i_2 + 1] [i_2] [i_1] [i_1])));
                var_14 = (min(var_14, ((((((-1 ? 63 : (arr_8 [6])))) ? ((41 ? (arr_7 [i_1] [i_2 + 4] [i_3]) : -50)) : (arr_8 [12]))))));
            }
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_15 = ((((arr_16 [i_1 + 1] [i_2 - 1] [i_4 + 1] [i_5] [i_6 - 1] [i_6 - 1]) ? (arr_11 [i_1 - 1] [i_2 + 4] [i_4 - 2]) : (arr_16 [i_1 + 1] [i_2 + 1] [i_4 - 2] [i_5] [i_6 - 1] [i_6]))));
                            var_16 = ((((+(max((arr_19 [i_5] [i_5] [i_5] [i_5] [i_5]), 23)))) != (min((-120 == 32359), 27389))));
                            var_17 = (min(var_17, ((min(((-(((arr_18 [1] [i_5]) / (arr_7 [i_1 - 1] [i_1 - 1] [i_1]))))), ((min((min(16460, -102)), 3))))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_18 = (arr_18 [i_1] [i_2 - 3]);
                    arr_22 [i_1] [i_1 - 1] [i_2] [i_1] = ((-(arr_8 [i_2])));
                    arr_23 [i_2] [17] [i_4] [i_2] [i_2] = (((((242019058 ? 35735 : 10136))) ? -99 : (-824731274 + 6)));
                }
                var_19 = (min(((1 ? 10 : ((114 ? 1559214118 : 1)))), ((min((arr_10 [i_4 - 3] [i_2 + 1] [i_1] [i_1 + 1]), (arr_10 [i_4 - 1] [i_2 + 1] [i_2] [i_1 - 1]))))));
            }
            arr_24 [1] [i_2] [i_2] = ((-((3 ? -24 : -7))));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            var_20 = (arr_20 [i_8] [i_8 - 1] [i_8] [i_8] [i_8]);
            arr_27 [i_8] [i_8 - 1] [i_1 + 1] = ((-(arr_9 [i_1 - 1] [i_1] [i_1 - 1] [i_1])));
        }
        var_21 &= (min((!16383), (((((-6874462292305660563 ? 4294967295 : (arr_7 [i_1] [i_1] [i_1])))) ? (max(1286, 824731274)) : (arr_20 [4] [i_1 + 1] [i_1 - 1] [i_1] [4])))));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 22;i_9 += 1)
    {
        var_22 &= (((((1 ? (arr_28 [i_9] [i_9]) : (arr_29 [i_9] [i_9 + 3])))) ? (arr_29 [i_9 + 2] [i_9 - 2]) : -0));
        var_23 = ((!(arr_28 [i_9 - 1] [i_9 - 2])));
        var_24 *= ((-1 ? ((11407 ? 8437846719226400283 : 4294967281)) : (50 + -1882030231)));
        var_25 *= (arr_29 [i_9] [i_9 + 1]);
        arr_30 [i_9] [i_9] = ((59783 ? 14131 : -114));
    }
    for (int i_10 = 1; i_10 < 10;i_10 += 1)
    {
        var_26 = (min(var_26, ((min(((((11407 ? (arr_7 [i_10] [i_10] [i_10]) : 39860)) / (~0))), (max(((13 ? 15 : 1)), -272623725)))))));
        var_27 = (arr_17 [i_10] [i_10] [i_10] [i_10 + 1]);
    }
    #pragma endscop
}
