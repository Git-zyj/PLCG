/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(-var_16, (((max(12276630852385308365, var_6)) * 9205357638345293824))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((9 ? 9205357638345293823 : 9241386435364257794));
                    var_18 = (1 != 56319);
                    arr_9 [i_0] [8] [i_2] = (max(((var_8 / ((min(var_3, (arr_5 [i_0] [i_1] [i_0])))))), (arr_4 [i_0 - 2] [i_1 - 1])));
                    arr_10 [i_2] [i_1] [i_1] = (((arr_0 [i_0 - 1] [i_0 - 3]) ? (((arr_2 [i_0 + 1]) ? -9205357638345293800 : 11183)) : (((9241386435364257828 ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_0] [i_0]) | 4356021640187554356)))))));
                }
            }
        }
        var_19 = arr_3 [i_0];
        var_20 = ((-((~(((arr_7 [i_0] [i_0] [i_0 + 1]) << (((arr_3 [i_0]) - 30035))))))));
        var_21 = (min((((((min(30714, 9205357638345293804))) ? ((122 >> (826210864593068072 - 826210864593068072))) : (!7410991834125558515)))), (min((((arr_3 [i_0]) ? var_4 : var_13)), ((max(var_6, (arr_1 [i_0] [i_0]))))))));
    }
    var_22 = var_12;
    var_23 = (min(var_23, var_9));
    #pragma endscop
}
