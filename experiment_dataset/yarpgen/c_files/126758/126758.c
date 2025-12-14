/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_4 [i_0 - 1] = (min(var_7, ((((!83) == (arr_0 [i_0] [i_0 - 2]))))));
        var_12 = (((arr_3 [i_0 + 3]) ? (arr_3 [i_0 - 1]) : ((min((arr_3 [i_0 - 3]), 6)))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                arr_11 [i_0 + 1] [i_2 - 1] = min(((-((5708783984145943459 ? var_8 : (arr_5 [i_0] [i_1]))))), ((((((arr_9 [i_1] [i_2 - 1]) < (arr_9 [i_2 - 1] [i_0]))) && (arr_10 [i_2 + 2] [i_0 + 2] [2] [i_0 + 2])))));
                var_13 = (((82 ? ((4146128448 * (arr_10 [i_1] [i_1] [i_2 - 1] [i_1]))) : (60 / -1356256382))));
                var_14 ^= (max(((((26388279066624 ? 249 : var_5)))), (min(((-(arr_9 [i_0 - 2] [i_1]))), (arr_1 [3])))));
                var_15 = (max(var_15, (((!(arr_9 [4] [4]))))));
            }
            var_16 = (max(var_16, -1959335970));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_17 = (max((min(-119, 210)), 60));
            var_18 = ((((((arr_13 [i_3]) + var_10))) ? ((-7885864109031872214 - ((min(30486, 17))))) : (arr_7 [i_0] [i_0] [1])));
            arr_14 [9] = (arr_7 [i_0] [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    {
                        arr_23 [i_0 - 2] [i_4 - 1] [2] [i_4 - 1] [i_0 + 1] |= ((1 ? (arr_9 [i_0 - 2] [1]) : 90));
                        var_19 = (max(var_19, ((((arr_21 [1] [i_4 + 2] [2] [i_6 + 1]) ? -89 : 40)))));
                        var_20 = (((arr_15 [i_0 - 3] [i_4 + 2] [i_6 + 1]) ? (arr_15 [i_0 + 2] [i_4 + 1] [i_6 + 1]) : 14358310691212506922));
                    }
                }
            }
            arr_24 [i_4] = ((-(arr_21 [0] [i_0 + 3] [0] [i_4 - 3])));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 6;i_8 += 1)
                {
                    {

                        for (int i_9 = 2; i_9 < 8;i_9 += 1)
                        {
                            var_21 = ((-(arr_22 [i_0] [i_0 - 2] [i_0 + 2] [i_9])));
                            var_22 = ((3320776679544070827 << (1008 - 978)));
                            var_23 = (-2147483647 - 1);
                        }
                        var_24 = (!484948819);
                        var_25 = (((684873669 || var_11) ? (arr_13 [i_7]) : var_9));
                        var_26 = ((65525 ? (arr_1 [i_7]) : (arr_1 [i_7])));
                    }
                }
            }
            var_27 |= 192;
        }
    }
    var_28 = ((11 ? 3175993543 : 15125967394165480787));
    var_29 = var_4;
    #pragma endscop
}
