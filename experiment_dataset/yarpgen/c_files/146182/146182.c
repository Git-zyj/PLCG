/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -32768;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [12] [i_3] [12] [i_0] [i_0] = (~65535);
                                arr_14 [i_4] [i_0] [i_4] [i_3] [i_0] = 59683;
                            }
                        }
                    }
                    arr_15 [12] [1] [i_0] [i_1] = ((~(~0)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_6] [i_2 - 1] [i_5] [i_6] [i_6 - 4] = 1;
                                arr_22 [10] [14] [i_2] [i_2] [i_6] [i_5] [i_5] = 2046289132;
                                arr_23 [i_6] [i_5] [i_2] [i_5] [6] = ((~(~1)));
                                arr_24 [i_0] [i_1] [i_5] [i_0] [i_6] [4] = 0;
                                arr_25 [i_0] [i_1] [i_1] [i_1] [i_1] [0] [0] = 1;
                            }
                        }
                    }
                }
            }
        }
        arr_26 [4] [4] = -291198810;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 15;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_33 [i_0] [i_8] [i_0] = 0;
                        arr_34 [i_0] [i_9] [i_8] [i_9] [8] [i_7] = 200;
                        arr_35 [i_0] = 14783;
                        arr_36 [i_9] [i_0] = (!(!1));
                    }
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        arr_39 [i_0] [i_0] [i_0] = -1;
                        arr_40 [i_0] [i_0] [i_8] = ((~(~702947963)));
                        arr_41 [12] [12] [i_0] [i_10 + 1] = -30085;
                        arr_42 [1] [i_7] [i_8 - 2] [i_7] [i_7] [i_7] = 745946618;

                        for (int i_11 = 3; i_11 < 15;i_11 += 1)
                        {
                            arr_46 [i_0] [i_0] = 1728;
                            arr_47 [i_0] [i_0] [i_0] = 65535;
                            arr_48 [i_0] [i_7] [1] [i_8 - 1] [i_11] = (+-14052397);
                            arr_49 [i_11 - 3] [i_10] [i_0] [i_7] [i_0] [i_0] [i_0] = (+-1674599960);
                        }
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            arr_53 [i_0] [i_7] [i_8 - 3] [i_0] [i_0] [11] = -690421221;
                            arr_54 [i_0] [i_0] [i_0] [i_10] = 1869644351;
                            arr_55 [i_0] [i_7] [i_8] [i_7] [12] = 59445;
                        }
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        arr_58 [i_0] [i_0] [i_7] [i_8 - 3] [i_13] = 62789;
                        arr_59 [i_0] [i_8 + 1] [i_7] [i_0] = 65515;
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            {
                                arr_64 [9] [i_0] [i_15] [i_15] = (+-6092);
                                arr_65 [i_0] [i_7] [i_8 - 2] [i_0] [0] = 64994;
                                arr_66 [8] [i_7] [i_8 - 1] [i_8 - 1] = -690421223;
                                arr_67 [i_7] [i_14 - 1] [2] [2] [i_7] &= 26;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 0;i_17 += 1)
                        {
                            {
                                arr_72 [i_17] [i_0] [i_8] [i_0] [i_0] = 63813;
                                arr_73 [i_0] [i_0] [i_0] [i_0] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 24;i_18 += 1)
    {
        arr_76 [i_18] = 505691584;
        arr_77 [15] = 0;
        arr_78 [i_18] [i_18] = -1751770021;
    }
    #pragma endscop
}
