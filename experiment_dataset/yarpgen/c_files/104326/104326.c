/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = (((~((var_6 ? 252 : 3)))));
                                var_16 = ((!((min((arr_9 [7] [7] [7] [i_0]), (arr_9 [i_3] [i_2] [i_2] [i_2]))))));
                                var_17 = ((~(min(0, 16))));
                            }
                        }
                    }
                    var_18 = (min((~var_10), (min(((32768 ? 63218 : 176)), 16))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_19 = (max(var_19, ((max((!32782), var_8)))));
                    var_20 = (((arr_14 [i_0] [i_0] [i_5]) ? (((var_8 ? 32768 : -15))) : -536805376));
                    var_21 = (max(98, 16));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
                {
                    var_22 = var_8;
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 7;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [2] [i_6] [6] = -8;
                                var_23 = ((-32751 ? 1152912708513824768 : (arr_16 [i_6 - 1] [i_6 + 2] [i_6])));
                                var_24 = 32755;
                                arr_28 [i_6] [i_8] [3] [i_8] = -18446744073709551615;
                                arr_29 [0] [i_6] [0] [0] [0] [i_6] [i_0] = ((32771 ? 1879048192 : 1879048192));
                            }
                        }
                    }
                }
                for (int i_9 = 1; i_9 < 8;i_9 += 1) /* same iter space */
                {
                    var_25 = (min(var_25, (((((((arr_8 [i_0] [7] [i_0] [i_0]) + (~-31277)))) ? (((-((min(1, 1)))))) : (~13270932150174490673))))));
                    arr_32 [i_1] [i_1] = ((!(arr_16 [i_0] [i_0] [i_0])));
                    arr_33 [i_9] = 18446744073709551607;
                }
                var_26 = ((+(((arr_4 [i_0] [i_1]) ? (arr_24 [i_1] [i_1] [i_1] [i_1] [i_1]) : -83))));
            }
        }
    }
    var_27 = var_8;
    var_28 = ((3 ? 13270932150174490683 : ((((((4194303 ? 21533 : 1489946536)) == var_3))))));
    #pragma endscop
}
