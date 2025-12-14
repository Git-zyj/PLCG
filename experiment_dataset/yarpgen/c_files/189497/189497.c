/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((89 ? ((((arr_3 [i_1] [i_2]) ? ((var_11 >> (268435455 - 268435446))) : (arr_1 [i_2])))) : ((((-90 != (arr_3 [i_0] [i_2]))) ? ((var_10 ? 16268884416078799702 : 0)) : (92 && 388)))));
                    arr_9 [i_0] = (min(((127 ? 87 : 0)), (arr_2 [0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = var_5;
                                var_12 = 34;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_13 += (((((-97 ? (((arr_22 [i_0] [i_1] [i_2] [i_5] [i_5]) % 56842)) : 36488))) ? ((var_2 ? ((-1647951743 ? var_1 : var_0)) : (((133 ? (arr_23 [i_0] [i_1] [i_1]) : var_4))))) : 69));
                                arr_24 [i_0] [i_1] [i_1] [i_1] [i_1] = ((((min((-32767 - 1), -16)))) ? ((var_0 ? ((-88 ? (arr_0 [i_2]) : 30378)) : (min(402513844, -87)))) : ((((1390850440 - -102) != ((min((arr_0 [i_5]), var_11)))))));
                                arr_25 [i_0] [i_1] [i_2] [i_5] [i_6] [i_0] = ((((max(21, var_5) ^ (-402513861 < var_0)))));
                                var_14 = (max(var_14, (((8678 ? 52804 : ((max((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]), var_2))))))));
                                var_15 = (max((var_2 != 8686), (max((~92), var_4))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                var_16 = (max((((var_6 ? (arr_4 [i_7] [i_7]) : 50121))), (arr_33 [i_8])));
                arr_34 [i_7] [i_8] = ((((max(1711796444, (min(var_6, 402513852))))) ? ((min((arr_28 [i_7] [i_7]), 1))) : (max(((-102 ? 45 : (arr_2 [i_7]))), (arr_21 [i_7] [i_8])))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {

                            for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                            {
                                var_17 = (max(var_17, (((((max(((min((arr_36 [10] [i_8] [i_9 + 1] [1]), (arr_20 [3] [i_8] [5] [i_8] [i_8] [i_8])))), var_7))) ? (((1 && 3052327964) ? var_5 : (36770 != var_5))) : 1)))));
                                arr_43 [i_7] [i_7] [9] [i_7] [i_7] = var_2;
                                var_18 = ((((max(-5499, -402513841))) ? (~-32706) : -106));
                                var_19 = ((((var_11 ? (arr_41 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 - 1]) : (arr_41 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_10]))) >= var_7));
                            }
                            for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                            {
                                var_20 += var_4;
                                arr_46 [1] [11] [i_12] [i_10] [i_12] = (((((((-7742 && (arr_18 [i_12])))))) ? (((((210 ? var_7 : (arr_18 [i_12])))))) : (min((arr_4 [i_10] [i_12]), 15620897958730318726))));
                            }
                            arr_47 [i_7] [i_8] [i_9] [i_9] [i_10] = ((((max(((82 ^ (arr_29 [i_10]))), -87))) && var_7));
                        }
                    }
                }
                var_21 = (min(var_21, var_6));
                arr_48 [3] [i_8] [i_7] = ((1 ? 1 : -52));
            }
        }
    }
    #pragma endscop
}
