/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (max(122, 18446744073709551615));
                    var_17 = (min(var_17, ((max((min((max((arr_4 [i_2] [i_1 + 2]), (arr_2 [i_1] [i_0]))), ((min((arr_6 [1] [10] [i_0]), var_4))))), ((max(((max(var_1, (arr_1 [i_0])))), (max(1, 2477))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = (max(((min(((max(0, 1))), -122))), (min((min(217319891516024067, 61)), ((max((arr_8 [i_4] [i_3] [i_0] [i_1 + 1] [i_0]), -55)))))));
                                var_19 = (min(var_19, (max((min(((max(var_11, 54392))), (max((arr_2 [i_1] [i_2]), 11143)))), ((min(((max((arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]), (arr_11 [i_4] [i_3] [i_1] [i_1] [1])))), (min((arr_8 [i_4] [i_3] [i_1 + 4] [i_1 + 4] [i_0]), 20639)))))))));
                                var_20 += (max(((max(8160, 4294967295))), 9104667395151067440));
                                arr_13 [i_2] [i_3] [i_3] [i_2] [i_1] [i_0] = max((min((max(var_8, (arr_1 [i_4]))), ((max(-9104667395151067440, 1))))), ((min(((max((arr_8 [i_4] [20] [i_2] [i_0] [i_0]), (arr_10 [i_0])))), (min(1, 8128))))));
                                var_21 = (min(var_21, ((max(((max((max((arr_0 [i_1] [i_3]), var_0)), ((max(var_1, var_5)))))), (max((min(var_10, var_5)), ((min((arr_8 [i_0] [i_1] [i_2] [21] [i_4]), 1))))))))));
                            }
                        }
                    }
                    var_22 = (max(var_22, (min((max(((max(1, -89))), (min(var_10, (arr_0 [i_0] [9]))))), ((max((min((arr_9 [i_0] [i_0] [i_0] [i_0]), -9104667395151067411)), (min(var_3, 62)))))))));
                }
            }
        }
    }
    var_23 &= (max((max((max(-217319891516024067, var_1)), ((max(var_11, var_7))))), ((max(((max(var_2, 1))), (max(var_15, var_7)))))));
    #pragma endscop
}
