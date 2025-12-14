/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(1, 8966028691836412763));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, var_5));
                        var_14 = ((492116242 && (arr_5 [i_3] [i_2 + 1] [i_1] [i_0])));
                        var_15 = (((((-(arr_5 [i_3] [i_2] [i_1] [i_0])))) ? (((arr_7 [i_2]) ? 1981378678952303803 : (arr_1 [i_3]))) : (((41619 ? (arr_7 [i_2]) : (arr_7 [i_2]))))));
                        var_16 -= -8966028691836412763;
                    }
                }
            }
            var_17 = (arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 1]);
            var_18 = (!var_4);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_13 [i_4] [i_4] = min((((arr_9 [i_0 - 1] [i_0 + 1]) ? (arr_7 [i_4]) : var_1)), (arr_1 [8]));
            var_19 = ((((~(max(var_6, var_1)))) >= (arr_11 [i_0])));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_16 [i_0 - 2] [i_5] = (arr_11 [i_5]);
            var_20 = (min(var_20, (15826414196440112017 % 1)));
            var_21 ^= (((arr_15 [i_0 + 1] [i_0 - 2]) / (arr_15 [i_0 - 2] [i_0 - 1])));
        }
        var_22 = ((18014398509481984 ? (((18014398509481957 / -82952932931978482) ? 1 : 18446744073709551615)) : 1));
    }
    var_23 = (max(var_23, ((min(-7552380648510202285, (((~((18446744073709551615 ? -12949674 : 766037236))))))))));
    var_24 = (((((~(var_7 != var_7)))) ? (min(((3458764513820540928 ? -12949663 : 3759678588679233107)), ((var_4 ? var_6 : 1152921487426977792)))) : ((~((var_5 ? 0 : var_0))))));
    #pragma endscop
}
