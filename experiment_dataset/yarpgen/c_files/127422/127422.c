/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_12 = (max(var_12, ((((((arr_5 [i_0] [4] [11]) & var_10)) * (((((25999 > (arr_1 [i_1])))) / (arr_3 [i_0] [i_1]))))))));
                        var_13 = (max(var_13, 25999));
                        arr_8 [i_3] [i_1] [i_1] [i_0 - 1] = ((((((arr_4 [i_0] [i_2] [i_3 + 1]) ? (((arr_6 [i_1] [i_1] [6] [6]) - 11)) : ((max(46858, var_9)))))) ? (((arr_1 [i_3 + 3]) ? (arr_1 [i_3 + 2]) : (arr_1 [i_3 + 2]))) : (((((var_7 ? -2114663591 : 25992))) ? (arr_4 [i_0] [i_0] [i_3 - 1]) : (arr_6 [i_1] [i_1] [i_0 + 2] [i_0 - 1])))));
                    }
                    arr_9 [i_1] [i_1] [i_1] = (min((((!(((~(arr_2 [i_1] [i_1]))))))), 11072));
                }
            }
        }
    }
    var_14 = var_7;
    #pragma endscop
}
