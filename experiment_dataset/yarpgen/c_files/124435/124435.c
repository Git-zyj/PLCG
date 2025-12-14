/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((min((max(((min((arr_4 [i_0] [4] [i_0]), (arr_2 [14])))), (min(3695304195, 29)))), ((min(16383, 13))))))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_16 = (max((min(((min(var_6, (arr_3 [i_2])))), (max((arr_5 [i_0] [i_0] [i_0] [i_0]), 49341)))), ((min(((max(0, 0))), (max((arr_6 [i_0] [i_1] [i_1] [i_1]), (arr_3 [i_0]))))))));
                    var_17 = (min((max((max(var_11, 4294967291)), ((max(1, 19734))))), (max((min(1351185768, var_2)), ((min(0, -1)))))));
                    var_18 ^= (max((min((min(1, 16776192)), (max((arr_3 [i_2]), var_8)))), ((min(((max(38, 8))), (max(var_3, 1)))))));
                    var_19 = (min(120578855, (min((max(1486782122, 4294967295)), (max(5, 1))))));
                    arr_7 [i_0] [i_0] [i_2] = max((min((max((arr_0 [i_0] [9]), var_13)), (max(4294967275, var_4)))), (min(8388604, 1)));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_20 += (min(((max(30, (max(16195, 1))))), (max(0, 67107840))));
                    var_21 = (min(var_21, (min((min((max((arr_3 [i_0]), (arr_9 [i_0] [i_1]))), (max(1885822185, (arr_3 [i_0]))))), (max((min((arr_2 [10]), 4286578691)), ((max(2147483647, -967169253)))))))));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    var_22 = (min((max(((max(var_6, 1668152431))), (max(var_12, 2646395019)))), (max(4294967268, 1))));
                    arr_14 [i_0] = (min(25, (min(15, 1284935805))));
                    arr_15 [i_0] [i_1] [i_0] = min(4286578691, 32440);
                }
            }
        }
    }
    var_23 = (max((max((min(-268435456, var_12)), (max(-11380, 4294967294)))), (max((min(var_5, var_0)), (min(var_4, var_7))))));
    #pragma endscop
}
