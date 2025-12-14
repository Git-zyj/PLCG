/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min((min(3454274845344737819, 63442278)), var_12))) ? (var_3 == -7367606148912011891) : var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, ((52 ? 511300536 : (~16777215)))));
        var_15 += (((arr_1 [18]) ? -1 : 9223372036854775807));
        var_16 += ((arr_1 [0]) || (arr_0 [12]));
        var_17 = (((((arr_0 [8]) + 9223372036854775807)) >> (((arr_0 [1]) - 5406688241183559643))));
        arr_2 [i_0] = -511300536;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = (((1 ? (arr_6 [i_1] [i_2 - 1]) : (arr_0 [i_1]))));
                    arr_10 [i_1] [i_2] [i_2] [i_1] = (((((arr_6 [i_2 + 1] [i_2 + 2]) != (arr_1 [i_1]))) || ((min((min(511300536, (arr_6 [i_2] [i_2]))), (arr_5 [i_3] [i_1]))))));
                }
            }
        }
        var_18 = (min(var_18, (((((((arr_6 [i_1] [i_1]) / 8238806956550634133))) <= (max(1, (arr_5 [i_1] [i_1]))))))));
        arr_11 [i_1] [i_1] = 1713619175;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((((min(204, (arr_12 [i_4])))) > (((arr_13 [i_4]) ? (arr_15 [i_4] [i_4]) : (arr_15 [i_4] [i_4]))))))));
        var_20 -= (+(((arr_3 [i_4]) ? ((min(183, 255))) : (((1713619169 == (arr_8 [i_4])))))));
        var_21 = (+(((arr_7 [i_4] [i_4]) + (arr_15 [i_4] [i_4]))));
        arr_16 [i_4] = (max(208057752380034680, ((max(386666708, 218)))));
    }
    var_22 &= (~var_8);
    #pragma endscop
}
