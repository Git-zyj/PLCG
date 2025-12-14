/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_10 = (arr_4 [7] [13]);
                                var_11 = ((arr_3 [i_1 - 2] [i_1 + 1] [i_1 - 2]) & ((-(arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                            }
                        }
                    }
                    var_12 = (((~(arr_8 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 2] [i_1 + 1] [i_1 - 1]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_13 = (arr_11 [i_5] [i_5]);
                            var_14 = ((((max((~69), (!669393)))) ? ((1 ? -71 : 91)) : ((min(((var_1 <= (arr_1 [i_5] [i_6]))), (((arr_0 [i_5]) == (arr_3 [i_5] [4] [10]))))))));
                            var_15 = 0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_16 = (((min((arr_2 [0] [i_9 - 1] [i_9 - 1]), (arr_3 [3] [i_9 + 1] [i_9 - 1]))) ? ((91 ? 5169179777044153369 : 1)) : ((((arr_3 [i_9 - 1] [i_9 - 1] [i_9 + 1]) * (arr_2 [i_9 - 1] [i_9 + 1] [i_9 - 1]))))));
                            var_17 = (((((max((max(0, 1998)), var_7)))) <= 0));
                            var_18 = ((((min(0, 12940070800605172170))) ? (arr_22 [1] [8] [i_9 + 1] [8]) : (((arr_0 [9]) % ((((arr_11 [0] [5]) ? (arr_4 [i_5] [4]) : (arr_13 [i_5]))))))));
                            var_19 = (((max((arr_19 [i_9 + 1]), ((246 ? (arr_24 [0] [i_6] [i_9 - 1] [i_10]) : (arr_21 [7] [7] [7] [7]))))) * 0));
                            var_20 = (max(var_20, ((min(2888987397, 4294967295)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 16;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_21 = 1892340241154776856;
                                var_22 &= (102382358768217209 / 1);
                                var_23 = max(((((((min(0, var_2)))) < ((var_4 ? 536870784 : 143807364501015373))))), (((arr_36 [i_13 + 1] [i_13 + 2] [i_13 + 2]) % (arr_36 [i_13 + 1] [i_13 + 1] [i_13 + 1]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 0;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            {
                                var_24 = (arr_46 [i_11] [i_11] [i_11] [i_11] [14] [i_11]);
                                var_25 = (((min(8, 91))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 18;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 17;i_19 += 1)
                        {
                            {
                                var_26 = max(((((708493428 / 1) / (arr_39 [i_11] [i_11])))), (arr_32 [i_11] [i_13] [i_11]));
                                var_27 = (((!(((var_4 ? var_1 : 35))))));
                                var_28 = 4145014996;
                                var_29 += (arr_41 [16] [16] [17] [i_13]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 2; i_20 < 17;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            {
                var_30 &= (arr_39 [i_20] [14]);
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 18;i_22 += 1)
                {
                    for (int i_23 = 3; i_23 < 16;i_23 += 1)
                    {
                        {
                            var_31 = (max(((max(36, (arr_40 [i_23] [i_23 - 1] [i_23] [1] [i_23 - 2] [i_23 - 1])))), (arr_29 [i_20 - 2] [4])));
                            var_32 = (arr_52 [7] [7] [i_21] [i_21] [i_22] [10]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_24 = 0; i_24 < 20;i_24 += 1)
    {
        for (int i_25 = 0; i_25 < 20;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 20;i_26 += 1)
            {
                {
                    var_33 = ((~(max((arr_69 [i_24] [i_25] [18]), -2048287501))));
                    /* LoopNest 2 */
                    for (int i_27 = 3; i_27 < 18;i_27 += 1)
                    {
                        for (int i_28 = 3; i_28 < 19;i_28 += 1)
                        {
                            {
                                var_34 = 3647129582;
                                var_35 |= (max(-5169179777044153379, 0));
                                var_36 = (max((-7665669884505535156 + 54407), ((-(min(var_5, 78))))));
                                var_37 = (~9131038678790137703);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
