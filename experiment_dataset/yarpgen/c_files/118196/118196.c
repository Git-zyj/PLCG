/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(((max((min(var_5, var_9)), ((min(var_9, var_9)))))), (max((min(-1, 26198587694715102)), ((min(var_7, var_1))))));
    var_15 = (max((max(((min(-1, var_8))), (min(var_0, var_2)))), (max(((min(0, -1))), (min(var_11, var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (min((max((max((arr_2 [i_1] [i_1]), (arr_2 [i_0] [i_1]))), ((max(512, (arr_1 [i_0])))))), (min((min((arr_1 [i_0]), (arr_2 [i_0] [5]))), (min((arr_3 [i_0] [i_1] [1]), 19569))))));
                var_17 = (min(var_17, ((min(((max((max(65535, (arr_0 [i_0] [i_0]))), (max(6, var_0))))), (min((max(var_6, (arr_2 [i_0] [i_1]))), ((max((arr_3 [i_1] [0] [i_0]), 26198587694715123))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = (max((min(((max((arr_4 [i_1]), var_5))), (max((arr_6 [i_1] [i_1]), (arr_9 [i_4] [i_3 - 2] [i_1] [i_1] [i_0]))))), (min((max(0, var_6)), ((max((arr_1 [i_4]), (arr_3 [i_4] [i_1] [i_4]))))))));
                                var_19 = (max(((max((min(var_5, var_12)), (min(1661327624, var_8))))), (max(26198587694715102, 255))));
                                var_20 = (min(var_20, (max(((max((max(var_10, 4243594723)), ((min(-45, -1)))))), (max((min(-15838, 26198587694715101)), ((min(var_9, var_9)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
