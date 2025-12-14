/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(((var_6 ? 5182719404377131116 : (!-1677164654))))));
    var_11 = var_5;
    var_12 *= (!var_1);

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            var_13 = ((var_3 ? -var_0 : ((((arr_4 [i_0]) ? (arr_4 [i_1 + 1]) : (arr_3 [i_1] [i_1] [i_0]))))));
            var_14 -= -1677164645;
            arr_5 [i_1] [i_1 + 2] = ((((max((arr_2 [i_0]), 54106))) & (((54106 ? -1677164645 : 1)))));
            var_15 += (((((var_9 ^ (arr_3 [i_1] [2] [i_0]))))) ? (((1 ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 - 2])))) : var_3);
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
            {
                arr_11 [i_3] [i_2] [i_0] = ((-(arr_4 [i_0])));
                arr_12 [3] [i_2] [i_2] [i_3 + 1] = var_8;
                arr_13 [i_0] [i_0] &= var_6;
            }
            for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
            {
                arr_16 [i_0] [i_2] [i_4 + 1] = ((((min(4516271336761849107, 45)))));
                arr_17 [i_0] [i_0] [i_0] = (((arr_0 [i_2]) ? (max((((-1677164657 ? 4499 : 44671))), ((0 ? var_7 : 2809992555)))) : (arr_7 [i_4 + 1] [i_4] [1])));
                arr_18 [4] [i_2] = (arr_9 [i_4 + 1]);
                var_16 = (min((max((arr_15 [i_0] [7] [i_4] [i_4 + 1]), var_1)), var_3));
            }
            for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
                {
                    var_17 &= (((var_8 & var_9) ? ((var_6 ? (arr_6 [i_0] [i_0] [i_5]) : var_7)) : -var_8));
                    arr_25 [i_6] [i_5] [i_0] = var_4;
                    arr_26 [i_2] [i_5] [i_5] [i_0] = min((var_8 | 54843), (min((~var_7), 4531)));
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
                {
                    arr_30 [8] [i_2] [i_5] [i_5] [i_7] = ((var_0 && (((arr_24 [i_7] [i_2]) && var_9))));
                    var_18 = ((-4527 ? 1 : 16995535920885365071));
                    arr_31 [i_0] [i_5] = var_1;
                    var_19 = (min(var_19, (arr_29 [i_5] [i_2] [i_0] [i_2])));
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    arr_34 [i_8] [i_8] [i_8] [i_5] = (((arr_28 [7] [i_0] [i_5] [i_8]) < ((-298408524 ? 3026496051915031903 : 298408537))));
                    var_20 = (((((!var_3) ? 1 : var_0)) | ((((arr_27 [i_0] [i_2]) ? ((1 ? 1677308861 : var_7)) : (20858 || 0))))));
                }
                var_21 = ((((var_4 & (!15420248021794519713))) | ((+((1 ? (arr_2 [0]) : (arr_9 [i_2])))))));
                arr_35 [i_5] [i_5] [i_5] [0] = (min((((arr_32 [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1]) ? ((1 ? 57728 : 9629967651546540860)) : 1)), (1 >= 4196621235)));
            }
            var_22 = (((arr_9 [i_0]) ? (((!(arr_4 [i_2])))) : (((!(((arr_7 [i_0] [i_0] [i_0]) && var_2)))))));
            var_23 += var_8;
            arr_36 [i_0] [i_0] [2] = ((((var_4 ? var_6 : 20864)) == ((((((arr_29 [0] [i_2] [i_2] [i_2]) % var_4))) ? (arr_9 [i_0]) : -var_0))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    {
                        var_24 = (min(var_24, ((((((var_3 ? var_0 : var_0))) ? (((min((arr_3 [i_0] [i_0] [i_9 + 1]), (arr_3 [i_0] [i_0] [i_9 + 1]))))) : (min(-5663522406275980434, 17877557530922454079)))))));
                        var_25 &= -5663522406275980434;
                        var_26 += ((-var_9 ? 1 : (((!((max(var_2, 18))))))));
                        var_27 = ((((!(arr_23 [i_0] [i_9 + 1] [i_9] [i_10 + 2] [i_2]))) ? (arr_23 [i_0] [i_9 + 1] [0] [i_10 + 1] [1]) : ((min((arr_23 [i_9] [i_9 + 1] [6] [i_10 + 1] [4]), (arr_23 [0] [i_9 + 1] [1] [i_10 + 2] [i_0]))))));
                        arr_41 [i_9] = 9629967651546540860;
                    }
                }
            }
        }

        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            var_28 = (((((-(!20877)))) ? (((~((min(var_2, 25356)))))) : (max(var_9, var_5))));
            arr_45 [i_0] [i_11] = 8958365228988188694;
        }
        var_29 = ((15702430733607264523 ? (((min((arr_7 [2] [i_0] [8]), (arr_27 [i_0] [i_0]))))) : (arr_8 [i_0] [i_0])));
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
    {
        arr_50 [i_12] [i_12] = 1;
        var_30 -= (((arr_20 [i_12] [9] [i_12] [i_12]) ^ (((arr_2 [i_12]) ? var_5 : ((var_2 % (arr_7 [i_12] [i_12] [1])))))));
    }
    #pragma endscop
}
