/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_0] [i_1 - 2] [i_0] [i_1 - 1] = 2450615113836059203;
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((-(min(11172784113460255623, 2145386496))));
                    var_17 = (((((var_6 / 15996128959873492418) / var_3)) == (((((-(arr_5 [i_0]))))))));
                    arr_9 [i_0] [i_1] [i_0] [i_1] = 7273959960249296003;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            var_18 = 65535;
                            arr_14 [i_0] [i_1] [6] = (max(((((((arr_1 [i_0] [i_1]) ? 65535 : var_14))) ? ((966 ? var_3 : var_5)) : var_1)), (((var_14 - (arr_12 [i_0] [i_1 - 2] [i_1 - 2] [i_4 + 2] [i_2] [12]))))));
                            var_19 = ((((max((arr_12 [i_4 - 2] [i_1 + 3] [i_1 + 3] [i_4 - 2] [i_4] [i_0]), 2481364172))) == (min((arr_3 [i_4 - 2] [i_1]), 5949365530809496700))));
                            arr_15 [i_0] [i_1 + 3] [i_4 + 1] [i_3] [i_4] [i_0] = min(((2271236874 ? (max(var_16, var_2)) : (~var_15))), (min((arr_2 [i_0]), (arr_2 [i_0]))));
                        }
                        var_20 = (min(var_20, (((((max((((65535 ? 1 : 21878))), (arr_10 [8] [8] [5] [i_3] [i_3] [i_3])))) ? (((arr_13 [i_0] [i_0] [i_2] [i_3] [i_3]) ? var_5 : var_13)) : (max(18005761724970746384, (arr_13 [i_1 - 1] [i_3] [i_3] [i_3] [i_1]))))))));
                        var_21 = ((((var_15 ? (arr_11 [i_0] [i_0] [i_2] [i_2] [i_1]) : (arr_12 [i_2] [i_1] [i_2] [i_2] [i_1 - 1] [i_2]))) == var_3));
                        arr_16 [i_3] [5] [i_2] [i_2] [15] = (((((arr_3 [i_0] [i_2]) & var_6))) ? ((((268435455 ? (arr_2 [i_2]) : 11133708709604325067)))) : ((-(min(var_9, var_10)))));
                        var_22 = var_2;
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_23 = ((((((arr_17 [i_1 + 3] [i_1 + 3]) && 10042022390404914270)))) == (~5949365530809496693));
                        var_24 *= (min(var_14, ((min((var_15 == var_0), (((arr_12 [1] [1] [11] [i_0] [i_5] [i_0]) != (arr_19 [i_0] [i_0] [i_1] [i_5] [i_1] [i_0]))))))));
                        var_25 = ((((max(var_9, 33653))) ? var_6 : (1 * 1)));
                        arr_20 [i_0] [1] [i_5] [i_5] [i_1 - 1] = -1;
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_26 ^= 1813603123;
                        var_27 = ((var_12 >> (var_4 - 11477929416561022391)));
                    }
                }
                var_28 = (max((((arr_1 [i_0] [i_0]) ? ((((var_13 < (arr_13 [i_0] [14] [i_0] [i_0] [14]))))) : (max(65535, var_15)))), (1 / 3651648392)));
                var_29 = (((1 == (((var_16 != (arr_12 [i_0] [i_1 - 1] [i_0] [i_0] [i_0] [i_0])))))));
            }
        }
    }
    var_30 = var_14;
    var_31 = (max((((max(17829, var_16)))), var_4));
    var_32 = ((((((~var_13) ? var_12 : var_2))) && (((var_2 ? var_2 : var_0)))));
    var_33 += (-((4294332715 ? ((1 ? var_15 : var_10)) : -var_9)));
    #pragma endscop
}
