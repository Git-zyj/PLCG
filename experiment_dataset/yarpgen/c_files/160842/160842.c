/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] = ((~(arr_14 [i_0 + 2] [i_0 + 2] [i_1] [i_2 + 1] [i_2] [i_0 + 2] [i_0 + 2])));
                                arr_16 [i_4] [i_1] = ((min(167822931, (arr_1 [i_3]))) != ((min(((~(-127 - 1))), 1))));
                            }
                        }
                    }
                }
                arr_17 [i_0] = ((((((var_5 ? -6514 : -6520)) >= (arr_11 [i_0] [i_1 + 3] [i_1] [i_1 + 3]))) ? (((((var_16 ? 6514 : -6522))) ? (arr_8 [i_0 - 2] [7] [20] [i_1]) : (arr_1 [i_1]))) : ((+((max((arr_9 [i_0] [i_0 - 3] [i_0] [i_1]), -6508)))))));
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_26 [i_7] [i_7] [i_5] [i_7] [i_0 - 2] = (arr_2 [i_5 + 2] [i_6] [i_6]);
                                arr_27 [i_7] [0] [16] [1] [0] [i_0 - 1] = (((((max(3, (-32767 - 1))) < ((((var_11 != (arr_12 [i_0]))))))) ? (((arr_23 [14] [i_7] [i_1] [14] [i_7]) ? (((arr_13 [i_0] [17] [i_6] [i_7]) ? 0 : -544659248)) : var_10)) : (arr_19 [i_7] [i_6] [i_5 - 2])));
                                arr_28 [0] [1] [i_5 - 3] [i_7] = (arr_18 [19] [i_6] [i_0]);
                                arr_29 [i_0] [i_1] [i_5] [i_6] [i_7] [12] = ((((max(((0 ? 57021 : var_4)), ((((arr_2 [i_6] [i_6 + 2] [i_6 + 2]) != 1)))))) ? (((((arr_19 [i_5] [i_1 + 2] [i_0]) >= 2090339733)) ? ((((arr_20 [4]) != var_5))) : (!var_7))) : -1));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        arr_32 [i_8] = ((((!(arr_9 [i_8] [i_8] [i_8] [i_8]))) ? ((((((-8953 ? 224 : 1))) ? ((min(-1, var_10))) : -8965))) : (((((24441 ? 246 : -20546))) ? (((-2147483633 ? (arr_1 [i_8]) : var_11))) : 4294967293))));
        arr_33 [i_8] = var_8;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_38 [i_9] &= ((((min(-1498789945, ((-97 ? -17987 : 1))))) ? (((1 != 29952) ? (((arr_13 [i_9] [i_9] [i_9] [i_9]) ? -1052239067 : 125)) : (min(var_12, (arr_7 [i_9] [i_9] [i_9] [i_9]))))) : ((-((min((arr_5 [i_9]), var_6)))))));
        arr_39 [i_9] [i_9] = (~var_7);
        arr_40 [11] = ((((max(((1 ? -26260 : var_14)), (((arr_34 [i_9] [i_9]) ? (arr_6 [1]) : -5650))))) ? (1 < 1) : (((((var_14 ? var_2 : (arr_4 [i_9])))) ? (9736878457257862781 + var_0) : ((-1 ? 31 : var_1))))));
    }
    #pragma endscop
}
