/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = (max((min(var_7, ((((arr_2 [i_0]) ? (arr_5 [i_0] [i_1] [i_2 + 1]) : var_2))))), (((arr_7 [i_2 - 1]) ? var_13 : (arr_2 [i_2 - 4])))));
                    var_18 = (min(((1 <= (arr_4 [i_2] [i_2 + 1] [i_2 - 3]))), 0));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 = -1719710675;
                        arr_11 [i_3] [i_3] [i_3] [i_3] = min((((~((max(1, 31)))))), (((var_4 % (arr_3 [4])))));
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = ((((max(var_11, var_5))) ? (((!(arr_5 [i_2 + 1] [i_2 - 2] [22])))) : (!var_15)));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_15 [i_4] [5] [i_0] = (min(((((!23958) ? var_9 : (!var_14)))), ((((min(1, 564782849))) ? var_16 : (arr_8 [i_2 - 3] [i_2 - 4] [i_2] [i_2 - 2])))));
                        var_20 = (!var_6);
                        arr_16 [8] [i_1] [i_1] [19] = (((min((arr_10 [i_1]), (arr_10 [i_1])))) ? (((arr_10 [i_4]) + (arr_10 [i_2]))) : ((((arr_10 [i_0]) == 1))));
                    }
                }
            }
        }
    }
    var_21 = (var_11 <= (33554431 || 25900));
    #pragma endscop
}
