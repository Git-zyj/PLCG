/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_7 ^ (((12 ^ 1) | -77))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (max((-84 * 1186448244), ((((arr_1 [i_0 + 1]) ? -1542375343 : (arr_3 [i_0 + 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 23;i_4 += 1)
                            {
                                var_15 = (-(min((min(var_12, (arr_7 [i_0] [i_1] [i_2] [i_3]))), (arr_4 [i_0] [i_2] [i_0] [i_4]))));
                                var_16 = ((((min(-330406026727149630, -1542375356)))) ? (~127) : (((((-1542375352 ? -1542375372 : 2751972071))) ? (((arr_12 [i_0]) - (arr_0 [i_0 - 2] [i_0 - 2]))) : (arr_2 [i_4 - 2] [i_3 - 1]))));
                                arr_13 [i_4 - 2] [i_3] [17] [i_1] [2] [i_0 - 2] = (arr_11 [i_3 + 1] [i_4 - 1] [i_0 - 2] [i_2 + 1] [i_3 + 1]);
                            }

                            for (int i_5 = 0; i_5 < 25;i_5 += 1)
                            {
                                var_17 = (max(var_17, (((((max((arr_11 [23] [i_3] [0] [i_1] [i_0]), ((((arr_10 [i_1] [i_5]) ? var_10 : 2751972065)))))) ? ((~((min(var_11, var_7))))) : var_8)))));
                                arr_17 [i_5] [i_0] [i_3] [i_2 - 1] [10] [i_0] = (min((min((~1542375359), (min(2751972070, 41962)))), -1991125456));
                                var_18 = (min(((var_2 ? (arr_11 [i_3] [7] [i_3] [i_3] [i_3 - 1]) : (arr_11 [i_0] [i_0] [i_1] [i_3] [i_3 + 1]))), ((((((var_3 ? var_8 : var_11))) ? -1542995215 : (((max(-93, -1)))))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_19 = ((((var_8 ? (max((arr_5 [i_0] [i_0] [i_8]), (arr_16 [i_0] [i_1] [i_6 - 1] [i_7] [i_8] [i_8]))) : 1)) >> (((min(((min((arr_1 [i_0]), var_12))), (arr_2 [i_0] [i_0]))) + 22496))));
                                arr_25 [17] [i_6] [17] [i_7] [i_8] = (min(4294967288, -1991125459));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_2;
    var_21 = var_9;
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            {
                var_22 = (min(3091156707, ((min(var_11, (max(1991125461, -1542375372)))))));

                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    arr_33 [i_9] [4] [i_11 - 1] [i_11] = (max((((arr_29 [i_9]) - (arr_29 [i_9]))), ((min(1354259088, (((arr_3 [i_9]) ? -1542375372 : var_2)))))));
                    arr_34 [i_9] [i_10] [i_10] [i_9] = ((((arr_27 [i_9] [i_9]) || (arr_12 [i_9 + 1]))));
                    var_23 = ((!(arr_4 [i_9 - 1] [i_9 - 1] [i_10] [i_11])));
                }
                for (int i_12 = 2; i_12 < 15;i_12 += 1)
                {
                    arr_38 [i_9] [i_9] = (((((!-8879674265603716133) < ((907229388 >> (-1542375372 + 1542375396))))) ? var_12 : (~0)));
                    arr_39 [i_9] [i_9] [9] [i_12] = ((((max(-28006, 1542375343))) && -1354259088));
                }
            }
        }
    }
    #pragma endscop
}
