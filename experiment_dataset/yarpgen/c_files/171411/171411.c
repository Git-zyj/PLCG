/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_11;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_18 |= (((arr_3 [i_0] [i_1 + 1] [i_0 + 1]) ? -2639591121214445137 : (((arr_2 [i_0 + 2]) | 62))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0 + 1] [i_0] = ((!((((arr_2 [i_0 + 2]) ? (arr_0 [6] [5]) : ((min(1, var_4))))))));
                    arr_9 [8] [i_1 - 1] [i_2] = ((((((max(28, -51)) / (arr_1 [i_1 - 1] [i_0 - 3])))) || (((((((arr_7 [i_0] [i_1 + 1] [i_0]) + (arr_5 [i_0 - 1] [1])))) ? var_6 : 1521418134938008972)))));
                    arr_10 [i_0 - 2] [i_0 - 2] [i_2] [i_2] = ((21671 && 2434122912202273134) ? (((((~(arr_4 [i_0 - 2] [i_1 + 1])))) % ((var_6 ? (arr_3 [i_0 + 1] [i_1 + 2] [i_1 + 2]) : 5602669911988863479)))) : ((((var_1 >= (!-21650))))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_19 -= ((~((max((((arr_0 [i_0] [i_0]) && (arr_2 [10]))), ((!(arr_11 [i_0 - 1] [i_0 - 2] [i_0 - 3]))))))));
                    arr_13 [i_0] = (((arr_2 [i_0]) ? (arr_7 [i_0] [11] [i_1]) : (((((var_9 >> (((arr_11 [i_1] [i_1 - 1] [10]) - 246)))) | (((arr_12 [i_3]) ? (arr_0 [i_0] [i_1]) : (arr_2 [8]))))))));
                    arr_14 [i_0] [i_0] [i_0] = 1;
                    var_20 = (max(var_20, (arr_5 [i_0 - 1] [i_0 - 3])));
                }
                var_21 = (min(var_21, (((((((((var_11 ? var_15 : 11525))) ? (~-7056) : (min(-1056430996, (arr_2 [10])))))) ? (((((arr_6 [i_0 - 1]) ? (arr_0 [i_1 + 1] [i_0]) : (arr_3 [6] [i_1] [i_1]))) & -21697)) : var_16)))));
            }
        }
    }
    #pragma endscop
}
