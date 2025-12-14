/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_3, (min(var_10, -7769220493669259483))));
    var_18 = var_0;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (max((((var_7 == 8589934591) ? (-1 || var_6) : 1073741823)), -26850));

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_20 = (max(var_3, ((((max(26849, 32033))) - -7769220493669259473))));
            arr_5 [18] [12] = ((2147483624 ? 13337 : 1073741823));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_21 = (((min((arr_1 [i_0]), (min(21179, 7372653950936564827)))) <= 1073741823));
            arr_9 [i_0] [i_0] [i_0] = ((((((max(var_7, (arr_8 [i_0] [i_2] [i_2])))) - (-4739 % -7769220493669259471))) <= 5191946272113823142));
            arr_10 [i_0] = 7769220493669259471;
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] = (max((((-13338 != (arr_12 [5] [i_3] [i_3])))), 4025));
            var_22 = (min((arr_6 [8] [8] [i_3]), ((((max(var_0, -2147483625)) > -683720342998230891)))));
            var_23 = (arr_4 [i_3]);
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            var_24 = (max(var_24, var_11));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        {
                            arr_28 [23] [i_5] = 21082;
                            var_25 = 2147483624;
                        }
                    }
                }
            }
            var_26 &= (((((arr_23 [i_0] [i_4] [4] [i_0]) >> (((arr_23 [i_0] [i_0] [6] [6]) - 15825)))) | ((min((arr_23 [i_0] [12] [1] [i_4]), (arr_23 [2] [i_4] [1] [1]))))));
            var_27 = var_14;
        }
        var_28 = (max(var_28, ((max((min(((var_2 ? 21082 : -7769220493669259478)), -2785)), (((max(var_8, 0)))))))));
        arr_29 [i_0] [i_0] = var_11;
    }
    #pragma endscop
}
