/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (arr_0 [5])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (!var_6);
                    var_19 = (max(var_19, ((((arr_3 [i_1] [i_2]) ? (arr_5 [i_0]) : ((-(arr_5 [i_0]))))))));
                }
            }
        }
        arr_8 [17] [i_0] = ((+((((((arr_5 [i_0]) + (arr_0 [i_0])))) ? (arr_4 [i_0] [i_0] [i_0]) : (min(0, (arr_1 [i_0])))))));
        var_20 = 66584576;
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = (((arr_1 [23]) ? (arr_11 [i_3]) : (!62)));
        arr_14 [i_3] [i_3] = (arr_11 [22]);
        arr_15 [i_3] = (min((((!(arr_11 [i_3])))), (arr_11 [i_3])));
        arr_16 [i_3] = var_13;
    }
    var_21 = min(var_15, var_11);
    #pragma endscop
}
