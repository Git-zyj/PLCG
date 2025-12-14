/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (min((min(((max(var_11, var_5))), (max(var_5, var_3)))), (min((min(var_3, var_7)), ((max(4092362717, 202604579)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 *= (min((min(((min(var_6, var_0))), (min(var_3, (arr_1 [i_1]))))), ((min((min((arr_2 [i_1] [i_1]), (-9223372036854775807 - 1))), ((min(var_2, var_7))))))));
                arr_5 [i_1] |= (max((max(((min(4092362711, 134217727))), (min(var_8, var_2)))), (min(((min(var_2, var_0))), (min(18446744073709551615, 27))))));
                var_15 = (max((max((max(1125899906842620, var_12)), ((min(var_0, -1))))), ((max((max(-3485, var_0)), (min((arr_2 [i_0] [i_0]), var_1)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [19] = (min((min((max(134217716, 1)), ((min(229, -124))))), ((min((max(var_10, (arr_8 [i_0] [i_0] [4] [i_2] [i_2]))), ((min(6, (arr_9 [i_0] [i_0] [i_0] [i_0])))))))));
                            var_16 -= max(((min(((min(3486, 230))), (min(var_0, var_7))))), (max(((min(3494, 134217727))), (max(2, 1152921504606846944)))));
                            var_17 = (max((min((min(17293822569102704672, (arr_0 [i_1]))), ((min((arr_10 [i_3] [0] [i_0]), 3483))))), (min((min((arr_9 [i_0] [i_0] [i_0] [14]), 6531070847159937064)), ((min(var_10, (arr_3 [i_0]))))))));
                            var_18 = (max(var_18, (min((max((max(-13048, 11915673226549614562)), 17)), (min((min(var_3, (arr_9 [10] [i_1] [10] [10]))), ((min(233, -1298576853)))))))));
                        }
                    }
                }
                var_19 = (min(((max((min(-1066401629, (arr_8 [i_0] [i_0] [i_1] [i_1] [9]))), ((min((arr_2 [3] [i_0]), 1)))))), (max((max((arr_7 [i_1] [i_0]), 31)), ((max(var_2, var_12)))))));
            }
        }
    }
    var_20 = (min((max((max(var_8, var_0)), (min(var_9, var_0)))), (min((min(var_6, var_8)), ((min(2147483647, 21813)))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_5] [i_4] = (min((min((min((arr_14 [i_4]), var_7)), ((min((arr_19 [i_4] [i_4] [i_6] [i_6 - 1]), 29))))), (max((min((arr_14 [i_4]), var_11)), ((min(469761489, var_1)))))));
                    var_21 = (min(var_21, ((max((max((min(103, (arr_0 [i_6]))), (min((arr_14 [10]), -3001519112402918653)))), (min(((max((arr_1 [20]), 2853437837))), (min((arr_0 [i_6]), (arr_9 [i_4] [i_4] [i_6] [i_4]))))))))));
                    var_22 = (max((min(((min(var_0, var_10))), (max(-2147483636, 4193254371130329486)))), (max(((max(87, 1))), (min((arr_14 [i_4]), (arr_3 [i_4])))))));
                    var_23 = (min(var_23, ((max((min((min(-1, (arr_4 [i_4] [6] [i_6 + 1]))), ((max((arr_19 [i_4] [i_4] [i_4] [4]), var_5))))), ((max((min(812742860, (arr_6 [i_4] [i_4] [i_4]))), (max((arr_7 [i_4] [i_4]), (arr_6 [i_4] [11] [i_4])))))))))));
                    var_24 = (min((min(((min((arr_3 [i_4]), var_12))), (max(var_9, (arr_4 [i_4] [i_4] [i_4]))))), ((max((min(-6912399917281585623, var_5)), (max(var_7, (arr_6 [i_4] [i_4] [i_4]))))))));
                }
            }
        }
    }
    #pragma endscop
}
