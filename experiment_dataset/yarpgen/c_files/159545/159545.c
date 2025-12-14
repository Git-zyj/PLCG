/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(5553688240644293307, -1772054572));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_11 = (~12893055833065258308);
        var_12 = (min(var_12, 251));
        arr_4 [i_0 - 2] = (!2682);
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_13 = ((max(448710844, (-32767 - 1))));
        arr_8 [i_1] = (!1428428259);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    {

                        for (int i_5 = 3; i_5 < 18;i_5 += 1)
                        {
                            var_14 = (max(10708204, (max(-33, 5553688240644293307))));
                            arr_18 [i_1] [i_2] [i_2] [2] [i_3] [i_4] [i_5] |= (max(-6810, -6822));
                            var_15 = (max(6789, -1780));
                        }

                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            var_16 = max(((max(232, 1))), 2664);
                            var_17 = -6822;
                        }
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            arr_24 [i_1] [i_4] = -2683;
                            var_18 = (max(var_18, (-32767 - 1)));
                        }
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_19 = ((max(-2682, 5)));
                            var_20 = (max(var_20, ((max((((-(-32767 - 1)))), -6660596558531424915)))));
                            var_21 = (max((!510), ((~(max(-637280554, 5))))));
                        }

                        for (int i_9 = 3; i_9 < 18;i_9 += 1)
                        {
                            var_22 = ((max((max(251, 5553688240644293307), ((max(533, 0)))))));
                            var_23 = ((-((max(127, 251)))));
                            arr_30 [10] [10] [i_9] [i_9] [i_9] [i_9] = (max((!5553688240644293331), (max(75, 108))));
                            var_24 |= (max(12893055833065258315, ((max(251, -1375072037)))));
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_25 -= (min((max((~-64), 190)), 75));
                            var_26 = max(12893055833065258317, (max(2252500884657228922, (-127 - 1))));
                            arr_33 [i_4] [i_4] [i_4] [i_4] [18] = (max(-259292432, -5553688240644293307));
                            var_27 = (max(-6917, 4294966785));
                        }
                        for (int i_11 = 4; i_11 < 20;i_11 += 1) /* same iter space */
                        {
                            arr_36 [i_1] [i_2] [i_1] [13] [i_11] = ((~((max(6896, 255)))));
                            var_28 = ((max(16509936830380952448, -6917)));
                            var_29 = 12893055833065258329;
                        }
                        for (int i_12 = 4; i_12 < 20;i_12 += 1) /* same iter space */
                        {
                            arr_39 [i_2] [i_2] [i_2] = ((min((~1), (max(1940225526, 6880)))));
                            var_30 = (min(var_30, 251));
                            arr_40 [4] = ((!((max(251, 2145386496)))));
                        }
                    }
                }
            }
        }
        arr_41 [i_1 + 1] = ((-((max(-59, -6917)))));

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_31 |= (max(2260631922, (max(1853546155, -1))));
            var_32 |= ((-(min(5, 2149580800))));
        }
    }
    var_33 = var_9;
    #pragma endscop
}
