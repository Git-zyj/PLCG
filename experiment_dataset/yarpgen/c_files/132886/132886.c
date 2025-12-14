/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = ((var_13 - (arr_3 [i_0] [i_0] [i_0])));
                    var_19 -= ((-var_9 ? ((((min(-1972335423, (-32767 - 1)))) ? 3451741628 : 75)) : -19466));
                    var_20 = -76;
                    var_21 = ((arr_6 [i_1]) ? 11 : (((77 ^ (arr_8 [i_1 + 2] [i_1] [i_2] [i_2])))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_22 = (((((((((arr_14 [i_6]) ? 1287741819 : 1))) ? ((-1287741824 ? 59 : 1287741831)) : ((var_15 ? 534889720 : -1287741817))))) ? (((((-(arr_17 [i_3] [i_3] [9] [i_6] [i_6])))) ? (((92 != (-32767 - 1)))) : 1)) : ((-((-1287741849 ? var_8 : var_17))))));
                        var_23 = ((~(((arr_18 [1] [i_4 + 2] [i_4 - 1] [7]) ? (((arr_11 [i_3]) / var_14)) : (((arr_15 [i_3]) ? 32738 : 1946162578))))));
                        arr_20 [i_3] [i_3] [i_5] [i_3] = (((min(24546, 1287741833))) ? (arr_13 [i_3]) : 78);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 22;i_9 += 1)
                {
                    {
                        var_24 = ((((((arr_28 [i_8] [i_8] [i_9 - 1] [i_8]) ? 102 : (arr_28 [i_3] [i_3] [i_9 - 1] [i_3])))) ? (arr_28 [i_7 + 1] [i_7 + 1] [i_9] [i_9]) : ((max(var_13, var_8)))));
                        var_25 ^= ((!((((var_11 ? 1 : 4294967294)) == ((((arr_25 [i_3] [i_3]) ? 2048184200 : var_13)))))));
                        var_26 = ((~((((arr_24 [8] [i_3] [i_3]) && var_1)))));
                        arr_29 [4] [i_7] [i_7] [i_3] = ((((arr_17 [i_3] [i_3] [i_3] [i_3] [i_9]) | (arr_16 [i_7] [i_7 - 2] [i_3] [6]))) / (arr_25 [i_3] [4]));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 23;i_10 += 1)
    {

        for (int i_11 = 2; i_11 < 24;i_11 += 1)
        {
            var_27 ^= ((var_7 % (arr_34 [i_11 - 2] [i_10 + 1])));
            arr_35 [i_10] = (3503786260 | -33);
            arr_36 [i_10] [i_11] [i_10] = ((93596315 ? (((!(arr_33 [i_10 + 1] [i_10] [i_10 + 1])))) : (arr_34 [5] [i_10])));
        }
        for (int i_12 = 1; i_12 < 23;i_12 += 1)
        {
            var_28 = ((arr_38 [i_10 + 2] [i_10]) + 116);
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    {
                        var_29 |= (((((-56 % (arr_39 [i_10] [i_10] [14] [i_14])))) ? var_3 : (arr_37 [i_10])));
                        var_30 |= ((((!(arr_43 [i_10] [10] [i_10] [i_10]))) ? (!205) : 1024));
                    }
                }
            }
        }
        var_31 = (max(var_31, (~var_15)));
    }
    /* vectorizable */
    for (int i_15 = 2; i_15 < 12;i_15 += 1)
    {
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 13;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 12;i_18 += 1)
                {
                    {
                        var_32 = (arr_26 [i_15] [i_15 + 1] [i_15] [i_16]);
                        var_33 = 0;
                    }
                }
            }
        }
        arr_56 [i_15] = (((arr_6 [i_15]) ? (arr_6 [i_15]) : (arr_23 [i_15 + 2] [i_15] [i_15] [14])));
    }
    #pragma endscop
}
