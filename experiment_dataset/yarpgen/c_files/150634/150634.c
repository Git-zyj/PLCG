/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_8 [i_0] = (min(((!(((28407 / (arr_4 [i_0])))))), ((28407 < (arr_1 [i_0] [i_0])))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_12 = (max(var_12, (((-28407 ^ (max(((min(-28407, 28407))), (max(28407, var_0)))))))));
                            var_13 = (max((var_4 >= 4018329406), (var_3 | 4018329405)));
                            var_14 = var_0;
                        }
                    }
                }
            }

            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                var_15 = ((min((arr_15 [i_5 - 1] [i_5] [i_5 + 2] [i_5] [i_5 - 1]), (arr_15 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5] [i_5 - 1]))));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_16 ^= (min((arr_9 [i_5]), ((((((arr_20 [i_1]) ^ var_8)) >= (arr_26 [i_6] [i_6] [i_6] [i_6 - 3] [i_6]))))));
                            var_17 ^= (max((min(-28407, 5368797713665737247)), (((~(min(276637889, -28398)))))));
                            var_18 = (((arr_7 [i_5] [i_5]) * (((arr_7 [i_0 + 1] [i_0]) / (arr_26 [i_0] [0] [i_5] [i_6] [i_7])))));
                        }
                    }
                }
                var_19 = (min(var_19, (1 - 5368797713665737257)));
                arr_27 [i_0] [i_1] [i_0] = ((+(((~var_9) ^ (min((arr_26 [i_0] [i_0 + 2] [i_1] [i_1] [i_5 + 3]), 0))))));
            }
            arr_28 [i_0] = (min(((min((((arr_16 [i_1] [i_1] [7] [i_0] [i_1] [i_1]) >> var_10)), (((-18250 != (arr_23 [i_0] [i_0] [i_0] [i_0] [i_1]))))))), (~var_6)));
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
        {
            var_20 = (max((((-(((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (var_8 + 130820286)))))), (((arr_5 [i_0 + 1] [i_0 + 1] [0]) & 276637884))));
            var_21 &= 5368797713665737247;

            /* vectorizable */
            for (int i_9 = 4; i_9 < 10;i_9 += 1) /* same iter space */
            {
                var_22 = ((arr_15 [13] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]) ^ (arr_15 [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0]));
                arr_35 [i_0 - 2] [i_8] [i_0] [i_8] = var_6;
            }
            for (int i_10 = 4; i_10 < 10;i_10 += 1) /* same iter space */
            {
                arr_40 [i_10] [i_0] [i_0] [i_0 - 2] = (min((min((~28407), (min(var_6, 5368797713665737247)))), ((((arr_14 [i_10 - 1]) << (((arr_14 [i_10 - 4]) - 2381091763)))))));
                var_23 = (((min((max((-2147483647 - 1), 5368797713665737247)), (((395877871 >> (2563995282 - 2563995254)))))) == ((((var_4 != (arr_12 [7] [i_8] [i_8] [i_0 + 1])))))));
            }
        }
        arr_41 [i_0] = (i_0 % 2 == 0) ? ((((min((min(4018329408, (arr_9 [i_0]))), ((min(276637869, (arr_15 [4] [4] [i_0 - 1] [i_0 + 2] [i_0 + 2])))))) >> (((min((arr_34 [i_0] [i_0 + 2] [i_0]), (min(var_3, (arr_2 [i_0]))))) + 4554679149191112113))))) : ((((min((min(4018329408, (arr_9 [i_0]))), ((min(276637869, (arr_15 [4] [4] [i_0 - 1] [i_0 + 2] [i_0 + 2])))))) >> (((((min((arr_34 [i_0] [i_0 + 2] [i_0]), (min(var_3, (arr_2 [i_0]))))) + 4554679149191112113)) + 1763807337826751334)))));
        arr_42 [i_0] [i_0] = (((min((min(28407, var_7)), var_7))) >= (max((min((arr_9 [10]), (arr_1 [i_0 + 1] [i_0]))), ((max((-2147483647 - 1), 4018329413))))));
        var_24 = (-2038496701 == 28378);
    }
    var_25 = (((min(var_11, var_10))));
    #pragma endscop
}
