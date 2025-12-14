/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = 21773;
        arr_3 [i_0] [i_0] = ((((max(((21750 - (arr_1 [i_0] [i_0]))), (arr_1 [2] [2])))) ? (arr_0 [i_0]) : ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [6]))))));
        var_18 = (((max((arr_0 [i_0]), (arr_0 [i_0])))) ? ((((!(arr_0 [i_0]))))) : ((-(arr_0 [i_0]))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_19 &= (max(((!(arr_4 [14]))), ((!(arr_4 [10])))));
        arr_6 [8] |= (min((arr_5 [i_1] [i_1]), ((((27339 & (arr_5 [i_1] [i_1]))) & ((-(arr_5 [i_1] [11])))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_20 = arr_9 [i_2] [i_2];
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    {
                        var_21 = (min(var_21, (arr_12 [i_2] [i_2] [i_2] [i_2])));
                        var_22 = arr_7 [i_2] [i_3];
                        arr_17 [i_2] [12] [i_3] [i_4] [i_5] [i_5 + 1] = -1394792514176643306;
                    }
                }
            }
        }
        var_23 = ((~(min((arr_7 [i_2] [i_2]), (arr_7 [i_2] [i_2])))));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    var_24 = max((((((-29527 ? (arr_5 [i_6] [i_7]) : var_12))) ? 1394792514176643306 : (arr_5 [i_7] [i_8]))), ((((arr_18 [i_6] [i_7]) < ((~(arr_7 [i_6] [i_7])))))));
                    var_25 = (max(var_25, (((var_7 ? (((~(arr_22 [i_6] [i_7] [i_8])))) : (max((arr_10 [i_6] [i_8]), (min((arr_23 [i_6] [i_7] [i_6]), var_3)))))))));
                    var_26 = (max(var_26, (min((arr_21 [i_6] [i_7]), (arr_23 [i_6] [i_7] [i_8])))));
                }
            }
        }
        arr_25 [i_6] [i_6] = min(((((((arr_5 [i_6] [i_6]) ? 15 : 32766))) ? (arr_10 [i_6] [i_6]) : -5035036736327754382)), ((max(-28835, (arr_14 [i_6])))));
        arr_26 [11] = (arr_22 [i_6] [i_6] [i_6]);
        var_27 ^= (arr_23 [i_6] [i_6] [i_6]);
    }
    var_28 = (max(((var_16 ? var_11 : var_3), (((var_6 ? var_16 : 29713))))));
    #pragma endscop
}
