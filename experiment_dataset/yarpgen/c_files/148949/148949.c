/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] &= (max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])));
        var_19 = ((((-19311 ? -5000195735640941515 : 39345)) ^ (max(var_1, (((arr_1 [1] [i_0]) ? -3243420827811460079 : var_5))))));
        var_20 = (max(var_20, (-231254527 / var_15)));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_21 = 13110062988289431394;
                    var_22 = (max(13110062988289431394, (6200372582663806372 <= 85)));
                    var_23 = ((231254527 > (((arr_3 [i_1]) ? (arr_6 [i_2]) : 12246371491045745244))));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    var_24 = (arr_5 [i_4]);
                    arr_12 [i_1] [i_4] [i_4] [i_4] = ((var_2 ? (5336681085420120229 || var_13) : ((((var_18 != var_4) > -1)))));
                    arr_13 [i_4] [i_4] [i_2] [i_4] = (min((min(134217727, (arr_4 [i_2]))), ((min(958241943, (~-231254538))))));
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_25 = (((((var_3 || var_0) > (arr_9 [i_1] [i_2] [2] [i_2]))) ? (((arr_11 [i_1] [i_2] [i_5] [i_5]) ? 8866243080366663788 : (arr_11 [i_1] [i_2] [i_5] [i_5]))) : (((((arr_4 [i_5]) < (arr_9 [i_1] [i_2] [i_2] [i_5])))))));
                    arr_16 [i_2] = var_15;
                    arr_17 [9] = ((-231254527 || (arr_1 [i_2] [i_2])));
                }
                arr_18 [i_1] = ((((((arr_10 [i_2]) ? var_12 : ((((arr_11 [1] [i_1] [5] [i_2]) + (arr_7 [i_1] [i_1] [i_2]))))))) ? 5997431494343591728 : (((1 >= var_0) & ((12449312579365959887 ? 31 : (arr_14 [i_1])))))));
            }
        }
    }
    #pragma endscop
}
