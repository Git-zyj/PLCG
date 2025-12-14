/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_19 = 30021901;
                        var_20 = (max(var_20, 1));
                        var_21 = (!-93);
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((max(182, 30021906)));
                        arr_13 [i_2] [2] [1] [i_3] = 148;
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [12] = (max((arr_3 [i_1 + 1] [i_1 + 1]), 30021908));
                        var_22 = (min(var_22, ((((max(30021909, 3444061768))) ? (3444061764 && 0) : (min(((-2719249332713844211 ? 4264945410 : 850905511)), (!-4803886705733763020)))))));

                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            arr_20 [i_4] [i_4] [i_2] [i_4] [i_5 + 1] = (min((arr_7 [i_1 + 2]), (min((arr_18 [i_1] [i_1 + 4] [i_5 + 2] [i_1] [i_5 - 1] [i_5 - 1]), -5040296161238985742))));
                            arr_21 [0] [3] = (arr_10 [i_5 + 4]);
                        }
                        var_23 = (arr_2 [i_0] [i_0]);
                        var_24 = (3444061766 + 850905535);
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_1] [i_2] = ((min(2147483647, 60)));
                        var_25 -= ((((arr_9 [i_0] [i_0]) | (arr_15 [i_6] [i_1 - 1] [i_1 + 1] [i_2] [i_6]))));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_26 *= ((((min((arr_9 [i_0] [i_0]), (arr_24 [i_2] [i_2] [i_2])))) ? (!5040296161238985732) : (((22577 >= 4264945410) + (4294967295 < 3444061773)))));
                        arr_28 [i_0] [i_0] [i_1] [i_7] = ((18446744073709551615 < (arr_11 [i_0] [i_0] [i_1 - 2] [i_1] [i_7])));
                        var_27 = (+-5040296161238985756);
                    }
                    arr_29 [i_0] [i_0] [i_0] = (min(-5503152382302604075, (arr_5 [i_1 + 3] [i_1])));
                    var_28 -= (min(((((arr_17 [4] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 4] [i_1 - 2]) ? 63 : 65523))), (max((arr_9 [i_0] [i_1 - 1]), (arr_9 [i_1 - 1] [6])))));
                }
            }
        }
    }
    var_29 = ((min((max(866710509649413229, 5004318390954698454)), -76)));
    var_30 = (max(var_13, 1));
    #pragma endscop
}
