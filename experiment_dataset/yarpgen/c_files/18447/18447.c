/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_1] = (var_9 - var_6);
            var_11 = (!1);
            arr_7 [i_0] [i_1] [i_0] = var_4;
            var_12 = (max(((min((1 * 7692), (1 < 20156)))), ((((-325594291 ? 15088079508971709275 : var_8)) << (((arr_2 [i_0]) - 202))))));
            arr_8 [i_0] [i_0] [i_0] &= ((var_9 ? (((((arr_4 [1] [i_0]) == var_5)) ? (((1580963329 > (arr_2 [7])))) : (((1 < (arr_4 [i_1] [i_0])))))) : (((!(!var_0))))));
        }
        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            arr_11 [i_0] [i_2] [i_2] = ((max(((var_6 << (var_7 - 56270))), (((-325594291 + 2147483647) << (var_1 - 47))))));

            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                var_13 = (((max(var_5, (max((arr_0 [i_3]), var_2)))) + -var_3));

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_14 = (max(var_14, (((-(arr_4 [0] [i_4]))))));
                    arr_17 [i_2] [i_2 + 2] [i_2] [i_2] [i_2 + 1] [i_2 + 3] = (arr_14 [i_2] [i_2]);
                    arr_18 [i_2] [4] [i_3] [i_4] = 8413223938593836053;
                }
                arr_19 [i_0] [i_0] [i_0] [i_2] = (max(100, ((((max(var_6, 3942830889997376899))) | (((arr_1 [i_2]) ? 1 : var_2))))));
            }
            var_15 = ((!(((1 - (min(var_0, (arr_9 [7]))))))));
            arr_20 [i_2] = (min(((max((((arr_1 [i_0]) ? 1 : -101)), 50460))), 3358664564737842340));
            var_16 -= ((15088079508971709270 > (((1 ? (max(1, 3857528764569246318)) : var_4)))));
        }
        arr_21 [i_0] = var_10;
        arr_22 [i_0] = ((-(((3857528764569246318 && (!1))))));
        arr_23 [i_0] [i_0] = (max((max(((var_0 ? var_0 : var_3)), (((3857528764569246318 > (arr_12 [i_0])))))), var_6));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_17 += (min(((((min((arr_24 [i_5] [i_5]), (arr_24 [i_5] [i_5]))) || ((max(124, 64765)))))), var_5));
        arr_26 [i_5] = ((((((arr_24 [i_5] [i_5]) ? (((max(var_4, var_10)))) : (max(325594291, (arr_25 [i_5] [i_5])))))) ? ((~(arr_25 [i_5] [i_5]))) : (max((((13474903482864103599 ? (arr_24 [i_5] [i_5]) : 1))), var_5))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_18 ^= ((((((arr_33 [i_8] [i_6] [i_8] [i_5]) / var_4))) ? (((16063306780613604812 / 3387881414) ? ((max(var_0, 3))) : ((3755422833985845856 ? (arr_28 [i_5] [i_6 - 1]) : var_8)))) : (-var_1 / var_4)));
                        var_19 = (((((4732508985296275436 + 0) - (var_7 % 212))) < ((max(-2081909670, 678003949)))));
                        arr_37 [i_8] [i_6] [i_7] [i_8] [i_5] = (((((var_1 > (arr_24 [i_7] [i_7])))) != (((!(!1))))));
                    }
                }
            }
        }
    }
    var_20 = (max(-325594291, 2081909646));
    var_21 = var_0;
    #pragma endscop
}
