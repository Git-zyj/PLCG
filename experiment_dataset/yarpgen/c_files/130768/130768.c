/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_2] [i_2] [i_3] [i_4 + 1] = (max((max((max((arr_1 [i_1]), var_1)), (max(var_1, 1)))), ((max(((min((arr_9 [i_4] [i_3] [i_1] [i_1]), (arr_8 [i_0] [i_3] [i_2])))), (min(-1, 943846553)))))));
                            var_16 = (max((max((max(943846561, 29200)), ((max(216, -10408))))), (max((max(1, 3351120724)), ((max((arr_10 [i_2] [i_4 + 1]), var_10)))))));
                            var_17 += (max(((min((max(336700352, (arr_9 [i_0] [i_0] [i_0] [i_0]))), ((max(var_4, 9)))))), (min(((min(-29203, (arr_13 [i_0] [i_0] [i_1] [5] [i_3] [i_4])))), (max(var_13, (arr_2 [1] [1])))))));
                        }
                        for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                        {
                            var_18 = (min((max(-188314716, (max(83, 6272071523646459464)))), 943846564));
                            arr_18 [i_2] [5] [i_2] [i_3 + 2] [i_5] = (max((max((max((arr_0 [i_0]), -2147483625)), ((min((arr_8 [i_0] [i_0] [i_2]), var_6))))), (min(0, -460837783))));
                            arr_19 [i_0] [i_1] [i_1] [i_2] [i_5 - 1] = (max(((min(((min(var_11, var_10))), (min(4149783548, 149))))), (min((min(8, -1393635255421126373)), ((max(124, 118)))))));
                            var_19 = (min(((min((max((arr_16 [i_2] [i_1] [i_2] [i_1] [i_2]), 670)), (max(-460837792, 122))))), (max((min((arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [i_5]), var_1)), ((min((arr_0 [i_0]), (arr_1 [i_1]))))))));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_20 = (max((max((min(16, 145183775)), ((min(1312403930, (arr_7 [0])))))), ((min((min(var_6, 29205)), ((min(var_6, var_6))))))));
                            arr_22 [i_6] [i_1] [i_2] [i_3 - 1] [i_6] = (min((min((max(-341493326, 60297)), ((min(53, (arr_0 [i_1])))))), ((min((max(9432, var_10)), ((min(160, 1))))))));
                            var_21 = (max((min((min(var_1, -29206)), ((min(208, var_11))))), ((min((min(1, 236355265)), ((min(1, var_0))))))));
                        }
                        var_22 += (min((min((min((arr_14 [1] [i_2] [1] [i_1] [6]), var_14)), ((min(var_4, -74))))), ((min(((min(-18616, var_6))), (max(1, 1312403929)))))));
                        var_23 = (min(-36, 2760919252));
                    }
                    arr_23 [i_2] = (max((max((max(18635, 1534048029)), ((min(var_9, var_0))))), (min((min(1970097194, 181)), ((max((arr_9 [i_0] [0] [i_2] [i_2]), (arr_4 [i_0]))))))));
                    arr_24 [i_0] [i_2] [i_0] = (max(((min(52, 65533))), (max((min((arr_7 [i_0]), -87)), ((max(var_12, 1024)))))));
                }
                arr_25 [i_0] [i_1] = max((max((max((arr_12 [i_0] [1] [i_0] [i_1] [i_1]), var_13)), ((min((arr_12 [1] [i_1] [i_0] [i_0] [i_0]), 1))))), (max((min((arr_0 [i_0]), 283518987)), ((max(1, 1))))));
                var_24 = (max((min((min(3975726999337419972, var_0)), ((max((arr_4 [i_0]), 5))))), ((min(((min(-29180, -29177))), (min(var_8, 1746843594)))))));
                arr_26 [i_0] [i_1] [i_1] = (max(((min(((min(1, -81))), (min(1, 5238))))), (min((max(4011448315, var_2)), ((max(var_12, 68)))))));
            }
        }
    }
    var_25 -= (min((min((max(var_7, var_5)), ((max(10, 1))))), ((min(((min(1, 1))), (max(var_4, -702871393)))))));
    #pragma endscop
}
