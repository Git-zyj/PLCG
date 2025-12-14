/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;
    var_13 = (1516300423 & var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 13;i_4 += 1)
                            {
                                var_14 = (3 ? 8558025846751783748 : -8558025846751783748);
                                var_15 = (max(var_15, (((1 << (((((arr_16 [i_4 - 3] [i_4 - 1] [i_1] [i_2 + 3] [i_1] [i_1]) ? (arr_16 [i_4 + 1] [4] [i_2] [i_2 + 3] [i_2 - 1] [12]) : (arr_15 [i_4 - 2] [1] [10] [i_4 - 3] [i_2 + 2] [1] [8]))) - 8825675837956662597)))))));
                                var_16 = ((!((min(127, 524287)))));
                                arr_17 [i_3] [i_3] [i_2] [i_1] [i_3] = (arr_0 [i_4]);
                                var_17 = (max(var_17, var_2));
                            }
                            for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                arr_22 [7] [i_3] [i_2] [i_3] [i_5] [i_1] [5] = ((-(((arr_18 [i_0] [9] [4] [i_2 + 3] [i_3 + 1] [i_3]) / -524285))));
                                arr_23 [i_0] [13] [i_1 - 1] [i_3] [i_3] [i_5 - 1] = (((((arr_6 [6] [i_2 + 3] [i_3 + 1]) ? 3177598427 : (max((arr_21 [i_2] [i_1 - 1] [i_2] [i_3] [i_3] [0]), var_6))))) ? (((((((arr_2 [i_5 - 1]) && (arr_10 [i_3] [1] [3] [i_5 - 1] [i_0] [i_2 + 3]))) && 1121501860331520)))) : (min(2849296571506843099, 1)));
                            }
                            for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                var_18 = (arr_13 [i_0] [i_3] [i_3] [i_3] [i_6]);
                                arr_28 [i_3] [i_6] = (min((((arr_9 [1] [i_3] [i_3 + 1] [i_2 + 3] [i_3] [i_1 - 1]) ? (arr_9 [i_6] [i_3] [i_3 + 1] [i_2 + 3] [i_3] [i_1 - 1]) : -341210283)), ((((arr_5 [i_1 - 1]) ? ((~(arr_5 [3]))) : (((-524287 + 2147483647) >> 15)))))));
                                arr_29 [i_0] [i_1] [i_3] [i_3 + 1] [i_1] = 1624522825;
                                arr_30 [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_6] = ((341210305 ? 1095726619 : -87));
                            }
                            var_19 = ((~(arr_3 [i_2 + 1])));
                            arr_31 [i_3] = ((((min((arr_15 [i_1 - 1] [i_3] [i_2 + 3] [1] [14] [10] [i_2 + 1]), (arr_10 [i_3] [i_3] [i_0] [i_2 - 1] [5] [14])))) ? (!31) : (max((arr_15 [i_1 - 1] [i_3] [i_2] [8] [8] [i_2] [i_2 + 1]), 2123930346))));

                            for (int i_7 = 0; i_7 < 15;i_7 += 1)
                            {
                                var_20 *= ((-27126 ? 488540250 : 1624522819));
                                var_21 = (min(1624522825, 1095726619));
                            }
                        }
                    }
                }
                var_22 = 25603;
                var_23 += 0;
            }
        }
    }
    #pragma endscop
}
