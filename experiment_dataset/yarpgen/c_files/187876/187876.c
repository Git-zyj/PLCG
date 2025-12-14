/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((max(var_1, var_1)) ? (min(var_3, -808961600903045438)) : var_15))) ? (((((min(var_2, var_9))) ? var_11 : (808961600903045441 && -12183)))) : (max(((0 ? var_19 : var_0)), ((max(var_4, 2)))))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_21 = (((((min((((var_15 > (arr_1 [i_0 - 3])))), -12191)))) * (max(-21, var_1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 = (((((1610612736 ? (arr_1 [i_0 - 1]) : -4965587134865580611))) ? (((14327 ? 252 : 32225))) : (max(((var_10 ? (arr_5 [i_1] [i_1]) : 180)), ((max(var_4, 13936)))))));
                    var_23 = ((((((arr_1 [i_0 - 1]) ? var_10 : (arr_1 [i_2 - 1])))) ? (((arr_1 [i_1]) | (arr_1 [5]))) : (((2790180589 ? 255 : 176)))));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        arr_9 [i_3] [i_3] = (74 | 26);
        var_24 = (min((((((var_1 ? -808961600903045438 : var_0))) ? ((var_3 ? (arr_7 [i_3 + 1]) : (arr_8 [i_3 + 1]))) : (arr_8 [i_3 + 1]))), (((((max(var_15, -12183))) != ((56670 ? (arr_8 [i_3]) : (arr_8 [i_3 + 1]))))))));
    }
    var_25 *= ((((min(var_9, var_2))) ? (min((max(-1, 960717346115947197)), var_11)) : (min((max(var_18, -113)), var_0))));
    #pragma endscop
}
