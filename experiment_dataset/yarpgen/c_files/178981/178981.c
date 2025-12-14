/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = var_15;
        arr_3 [i_0] = (var_7 - var_17);
        var_20 -= (((1 / -2034) ? (min(1, (!var_18))) : var_5));
        var_21 = (max(var_21, ((min(1193868803, (((arr_2 [i_0] [i_0]) ? (max((arr_0 [i_0]), var_16)) : (!var_9))))))));
        var_22 ^= ((((!(arr_1 [0]))) || (((var_17 ? 41 : (arr_2 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_23 = var_13;
        var_24 = ((var_3 ? 1193868803 : var_8));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_25 = ((min(var_2, var_3)));

        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_26 = (min(var_26, ((((((min(-2044, (arr_13 [i_2 + 2] [i_3]))))) / ((((min(var_15, var_4))) ? ((var_13 ? var_9 : var_1)) : (((var_10 ? 1193868803 : 1))))))))));
            arr_14 [i_2] [i_3] [i_2] = (((((var_18 ? ((max(2, (arr_10 [i_2])))) : ((3723216720 ? 2044 : (arr_11 [i_3] [i_3] [i_3])))))) ? (max((min(36997, var_17)), 65535)) : (((min(var_18, (arr_12 [i_2])))))));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_27 &= 39563;
            var_28 = ((var_13 ? 1193868827 : 2044));
            var_29 = (((arr_15 [i_2 + 1] [1] [1]) - 4089931014));
            var_30 = ((((((min(var_18, (arr_13 [i_2 + 1] [9]))) < (var_15 | var_8)))) + ((((((arr_8 [i_4]) ? var_11 : var_8)) > (arr_15 [i_4] [i_4] [i_4]))))));
            var_31 = ((var_11 != (var_18 < 571750579)));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_19 [i_5] [i_5] [i_2] = (max((!1), (!1)));
            var_32 ^= 205036308;
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_33 = ((((((var_6 ? var_6 : var_15))) ? -2040 : (0 & var_0))) * (((~var_0) + var_3)));
                            var_34 = ((((((-881439736 ? (arr_9 [i_8]) : 4398046511103))) / 70368744177663)));
                            var_35 = 22;
                        }
                    }
                }
            }
            arr_29 [i_2] = var_14;
        }
    }
    var_36 = (((((((var_7 ? 205036282 : var_13))) ? (var_11 - 18014398509481983) : (min(var_14, 1))))) ? ((min(0, 5251357180397097646))) : var_15);
    var_37 = (max((((!(var_4 >= var_14)))), (min(-1193868827, (6 != var_1)))));
    #pragma endscop
}
