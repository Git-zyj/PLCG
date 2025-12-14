/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (max(((max(((max(var_8, (arr_4 [i_1] [i_1])))), (max((arr_2 [i_2]), 1372866116))))), (min(((min((arr_7 [i_1]), var_16))), (max(15872, (arr_5 [i_1])))))));
                    var_18 = (max(((max(((max(var_8, 8))), (min((arr_0 [i_1]), var_6))))), (min((max((arr_2 [i_0]), var_11)), ((max((arr_4 [i_0] [i_1]), 32768)))))));
                    arr_8 [i_2] [i_1] [i_1] = (max((max(((max(1, var_13))), (max(var_16, (arr_3 [i_1]))))), ((max((max(var_10, 1)), ((min((arr_2 [i_0]), var_8))))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_12 [5] = (min(((max((max(var_2, var_6)), (max((arr_11 [i_3] [i_3]), 915642225))))), (max(((min(1, (arr_9 [i_3])))), (max(var_3, var_4))))));
        var_19 ^= (max((max((max(var_11, var_5)), ((min(var_2, -1628471962))))), ((max((min(520192, -915642212)), 1628471970)))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_20 = (min((max(((min((arr_9 [i_4]), (arr_13 [i_4])))), (max(4294447112, var_7)))), ((min(((max(255, 1))), (max(-15868, (arr_10 [i_4] [i_4]))))))));
        arr_15 [i_4] |= (max(((max((min(1779265434922845820, var_5)), (min(-8367387657783389374, -1803280997))))), (min((min(18446744073709551595, (arr_11 [i_4] [i_4]))), ((max((arr_9 [i_4]), (arr_9 [i_4]))))))));
        arr_16 [i_4] = (max((min(((min(48, (arr_11 [i_4] [i_4])))), (min((arr_14 [i_4] [i_4]), 9468712550538442721)))), ((max((min((arr_13 [i_4]), (arr_14 [4] [i_4]))), (min((arr_10 [i_4] [19]), 1)))))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_21 = (max(var_21, 1));
            arr_20 [i_5] [7] = 1;
            arr_21 [i_5] [4] = 3968;
        }
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                {
                    arr_30 [i_6] [i_6] [i_8] = (max((max(((max(var_7, 1803280994))), (max(15160, var_2)))), ((min((max((arr_29 [3] [16]), (-2147483647 - 1))), (min(var_15, (arr_29 [i_6] [i_6]))))))));
                    var_22 = (max(var_22, ((min(((max((max(915642232, 2147658018)), ((min((arr_9 [i_8]), 1)))))), (max(((min(520192, var_8))), (max((arr_18 [i_6]), 59580)))))))));
                }
            }
        }
        arr_31 [i_6] = (max((min(((min(var_10, 468778776))), (min(-15861, 0)))), ((max((max(var_9, 2409)), (min(1, 856085462)))))));
    }
    var_23 = (min(((max((min(var_15, var_5)), ((max(22763, 32028)))))), (max((max(var_0, var_0)), ((max(var_3, -583330858)))))));
    var_24 = (min((min(((min(var_13, 7066))), (max(var_0, var_2)))), (max(((max(var_10, 135))), (max(8796090925056, 8796090925056))))));
    #pragma endscop
}
