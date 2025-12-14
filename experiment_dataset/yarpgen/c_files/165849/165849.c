/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((min((max((max(var_2, var_3)), ((max(var_1, 0))))), ((min(((min(var_5, var_7))), (max(var_4, var_5))))))))));
    var_12 = (min(var_12, ((max((max((max(0, var_2)), ((min(0, var_5))))), (max((min(1511562581, var_3)), ((max(29926, -29942))))))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (max((min((min(var_2, var_8)), ((min(var_10, var_8))))), ((max((max(111, 8)), (min(13, (arr_1 [i_0]))))))));
        arr_3 [i_0] [i_0] = (max(2, 19773));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_13 += (min((max(7, -986160870)), (min(((max(var_8, (arr_4 [i_1])))), (min((arr_5 [i_1]), var_8))))));
        var_14 = (max((max(((max(var_8, -9))), (max(4182889801, 32985348833280)))), (min((max(-32985348833280, 1)), ((max(6, 111)))))));
        var_15 -= (max((min((max(-24581, var_1)), ((min(var_7, 1))))), ((max((max(var_8, 46839)), (max(var_5, (arr_4 [i_1]))))))));
        arr_6 [i_1] [i_1] = (min((min((max((arr_4 [i_1]), var_1)), (min(-1, var_9)))), (max((min(98, 986160892)), -986160893))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (min((min((max(76, 18)), ((min(7, (arr_0 [i_2])))))), ((max(((max(8, 986160892))), (max((arr_7 [i_2]), 1662)))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_16 = (max(var_16, 1954));
            var_17 = 0;
        }
        var_18 = (max((max((max(-124, var_2)), (min(65535, 6694603720911409704)))), (max((max(var_2, (arr_4 [i_2]))), ((min((arr_4 [i_2]), 0)))))));
    }
    #pragma endscop
}
