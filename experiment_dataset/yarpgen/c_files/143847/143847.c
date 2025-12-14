/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((min((max(var_2, var_1)), ((max(218, var_14))))), ((min((min(15, 685)), ((min(197, var_1))))))));
    var_16 = (min((min(((max(18, (-127 - 1)))), 12729439114133255862)), ((min((min(var_11, var_8)), (max(29, var_11)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (max((min(((min(4294967295, 238))), (max(9079538694960625696, var_13)))), ((max((max(227, 3400498594)), ((min(0, var_4))))))));
        arr_4 [i_0] = (min(((max(((max((-127 - 1), -680))), (max(var_9, 65508))))), (min((max((arr_2 [i_0]), (arr_2 [i_0]))), (min(235, var_11))))));
        arr_5 [8] = (max((min(((max(135, (-9223372036854775807 - 1)))), (max(18437418358242575710, 8)))), ((max((min(var_3, var_11)), (min((arr_2 [8]), var_5)))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_9 [0] = (max((max((max(var_7, 3865810610)), (max(3, 1704742346)))), (min(1, 3794))));
        arr_10 [i_1] [i_1] = (max((max((min((arr_0 [5]), (arr_0 [i_1]))), ((max(352130549, var_4))))), ((min(((max(var_12, 131))), (max((arr_2 [i_1]), var_0)))))));
        arr_11 [i_1] = (min(114, 38));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_19 [i_4] [i_1] [i_1] [i_1] = (max((max((max((arr_14 [i_1] [i_2]), (arr_7 [i_1]))), ((min(9223372036854775807, var_13))))), ((min(61440, -143068059)))));
                        arr_20 [11] [i_1] [i_1] [i_1] [i_1] [i_1] = (min((max(((min(208, var_7))), (max((arr_2 [i_2]), var_1)))), (min((min((arr_1 [7] [i_3]), var_2)), ((max(-123, 152)))))));
                    }
                }
            }
        }
        arr_21 [i_1] = (max(((min((max(var_10, var_8)), ((max((arr_15 [i_1] [i_1] [i_1]), 2428073679)))))), (max(((max(var_8, var_1))), (max(-1301703668712443541, 7423819418811805484))))));
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    arr_31 [i_5 + 2] [i_5 + 2] = (max(((min((max(123, 8589934560)), ((min((arr_25 [i_6] [i_7]), 3537567725)))))), (max((max(var_2, 268435455)), (min(18078690332949228737, (arr_30 [i_5] [1])))))));
                    arr_32 [i_6] = (max(((max((max(var_4, (arr_22 [i_6] [i_5]))), ((min((arr_25 [i_5 + 1] [i_5 + 1]), (arr_25 [i_5] [i_6]))))))), (max(2497516014985838785, 3701955101424675427))));
                }
            }
        }
    }
    var_17 = max((max(((min(2428073658, var_5))), (min(var_11, var_1)))), ((max((max(var_13, 1704742346)), (max(33554304, 1866893617))))));
    #pragma endscop
}
