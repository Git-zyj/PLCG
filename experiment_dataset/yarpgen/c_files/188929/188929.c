/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, ((min(-1976132267295388210, ((820024276 ? (arr_7 [10] [i_1] [4] [i_1 - 1]) : (-2147483647 - 1))))))));
                    var_19 = ((~((((((arr_6 [i_0] [i_1] [2]) ? (arr_7 [i_0] [i_1] [i_0] [i_0]) : -5419640325721125970))) ? (arr_7 [i_0] [11] [i_0] [9]) : 2147483647))));
                }
            }
        }
    }
    var_20 = (~-5450);

    for (int i_3 = 2; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_21 *= ((((max(2147483647, 1))) ? ((37 + (-5001907882504602523 / 1279))) : (max((max(5462, -3513310041826025554)), ((2728725078219123353 ? 7164924862633648848 : 3913564141))))));
        var_22 = (max(var_22, ((max((~2478162913), 5462)))));
        var_23 = (max((((!2147483647) ? (~22677) : var_12)), (((~((193 ? 22014 : var_6)))))));
        var_24 ^= (min(((max(((((arr_10 [i_3] [i_3]) == (arr_9 [0])))), (max((arr_9 [1]), 4294967286))))), ((var_11 ? (max(var_16, 3513310041826025554)) : var_9))));
    }
    for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_25 ^= (max(32767, ((((-(arr_9 [i_4]))) << (((arr_10 [i_4] [i_4]) - (arr_10 [i_4] [i_4])))))));
        var_26 &= ((-2318064770879581129 ? ((-25513 ? (((-(arr_9 [0])))) : (max(-3513310041826025554, (arr_10 [i_4] [i_4 + 2]))))) : 4294967288));
        var_27 = ((((max((!var_13), (~var_15)))) ? ((3913564141 ? (~163) : (min((arr_10 [i_4] [i_4]), (arr_10 [i_4 + 2] [i_4]))))) : 1));
        var_28 -= (min((((4294967284 ? (!-5244955009138442740) : (((!(arr_10 [i_4] [i_4]))))))), ((~(max(var_11, (arr_11 [i_4] [13])))))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_5] = ((79195980 ? ((~(arr_15 [i_5] [3] [i_7]))) : (((!(arr_17 [i_5]))))));
                    arr_24 [i_5] [i_6] [i_5] [i_7] = (max((max((arr_9 [i_5]), (arr_11 [i_5] [i_6]))), (arr_9 [i_5])));
                }
            }
        }
        arr_25 [i_5] = (((arr_6 [i_5] [i_5] [i_5]) ? 54885 : (arr_3 [i_5] [i_5] [13])));
    }
    var_29 = (min(var_29, ((max(var_15, var_6)))));
    #pragma endscop
}
