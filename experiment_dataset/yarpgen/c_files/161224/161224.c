/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((9223372036854775807 ? var_18 : var_12))) ? var_12 : var_8));
    var_21 &= (max(((1314017163 ? 4294967295 : 676414652158966400)), (((((-2933812644326562773 <= (-9223372036854775807 - 1))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_22 = ((max(((9223372036854775807 << (4213723890 - 4213723890))), (arr_3 [i_0]))) << (1431716555128095662 - 1431716555128095662));
            arr_4 [i_0] [i_1] = (((((+(max((arr_1 [i_0] [i_1]), 9223372036854775777))))) ? (((((var_1 ? var_17 : var_4))) ^ (arr_0 [i_0] [i_0]))) : ((max((arr_3 [i_1]), (arr_3 [i_0]))))));
        }
        var_23 = (max(var_23, ((((((~var_9) + 9223372036854775807)) >> (((arr_0 [i_0] [3]) - 16237783463243057941)))))));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_24 = (max(var_24, var_2));
        var_25 = (max(var_25, 15));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_26 = (max(var_26, var_13));
            var_27 = (((1546892727 || (arr_1 [i_3] [i_3]))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_28 = -1500881573;
            arr_15 [i_3] = ((arr_11 [i_3 - 2]) < (arr_11 [i_3 + 1]));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_29 = (min(var_29, ((((arr_2 [i_3 + 1] [i_3 - 1] [i_3 - 1]) ? (arr_21 [i_3 - 2] [i_3 - 2] [i_6] [i_7] [i_8] [i_8] [6]) : (arr_10 [i_3 - 1]))))));
                            var_30 = (max(var_30, (arr_10 [i_3 - 2])));
                            var_31 += var_3;
                        }
                    }
                }
            }
        }
        arr_23 [i_3] = (arr_9 [i_3 + 1]);
        var_32 = (max(var_32, ((((arr_7 [i_3 + 1]) ? (arr_9 [i_3]) : var_18)))));
        var_33 = ((~(arr_1 [i_3 - 2] [i_3 + 1])));
    }
    var_34 = (min(var_34, (((14787614022345187635 ? var_4 : -var_0)))));
    #pragma endscop
}
