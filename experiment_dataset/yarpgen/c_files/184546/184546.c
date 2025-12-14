/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((min((((7 ? (-9223372036854775807 - 1) : (((9223372036854775807 || (arr_0 [i_0]))))))), ((((min(0, 28))) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
        var_17 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_12 [i_3] [10] [i_3] = ((((arr_10 [i_3]) ? -0 : (!0))) >= ((((!(arr_4 [i_1]))))));
                        var_18 = (max((((-(min((arr_5 [i_2] [i_4]), (arr_8 [i_2] [i_3] [11])))))), (((arr_1 [i_1]) ? (arr_1 [i_3]) : (arr_4 [i_4])))));
                    }
                }
            }
        }
        arr_13 [i_1] [i_1] = ((((min(var_9, (arr_11 [i_1] [i_1] [i_1] [i_1])))) ? (((arr_6 [i_1]) ? ((((arr_9 [i_1] [i_1] [1]) ? var_4 : (arr_8 [5] [3] [10])))) : (arr_9 [i_1] [11] [11]))) : (arr_8 [i_1] [i_1] [i_1])));
        var_19 -= (min((min((arr_3 [3] [3]), ((min(var_3, (arr_5 [i_1] [i_1])))))), ((min((arr_4 [i_1]), (arr_10 [i_1]))))));
    }
    var_20 -= ((10 < (-127 - 1)));
    #pragma endscop
}
