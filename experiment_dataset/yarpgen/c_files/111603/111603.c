/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((max((~var_13), (~var_13))), (min((min(1232974511, var_11)), (min(1232974511, 23051))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((!((!((max(var_13, (arr_0 [i_2])))))))))));
                    var_19 = (max(var_19, ((max((max(((max(42498, var_9))), (max(1056981956, var_15)))), ((max(((min(var_7, var_6))), (max(19, (arr_9 [i_0] [i_1 + 3] [i_2] [i_2])))))))))));
                    arr_10 [i_0] [i_0] [i_0] = (max((min(((max(var_2, 42498))), (min((arr_6 [i_0] [i_1] [i_1] [i_2]), var_3)))), (max((min(var_3, (arr_9 [i_0] [i_1 + 3] [i_0] [i_2]))), 23774))));
                    var_20 &= (max((max((min(1232974511, (arr_5 [i_2] [i_1] [i_2]))), 23048)), ((-((max(var_7, (arr_8 [i_2]))))))));
                    var_21 = (max(240, (min(2063913942, ((max(-23775, -28)))))));
                }
            }
        }
        arr_11 [i_0] = (min((min((max(var_0, var_11)), ((min(var_10, 96))))), ((min(42485, 11)))));

        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            arr_14 [i_0] = ((-(max((min(var_10, 1232974523)), (~1232974498)))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 13;i_5 += 1)
                {
                    {
                        var_22 = (max(((max((min(42486, (arr_2 [i_0]))), (max(18389, (arr_5 [i_0] [i_3] [i_4])))))), (min((max((arr_1 [i_0]), (arr_0 [i_0]))), (min(var_12, 18446744073709550592))))));
                        var_23 = (min(var_23, ((~((max((max(var_7, 55723)), ((max(var_5, var_2))))))))));
                        arr_21 [i_0] [i_0] [i_4] [i_4] [5] = (min((min(((max(128, 87))), (min(-111, 1130439357)))), -103));
                    }
                }
            }
            arr_22 [i_0] [i_0] = (min((max((arr_19 [i_0] [i_0] [i_0] [i_3]), 117)), ((~((max(var_2, (arr_2 [i_0]))))))));
        }
        for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
        {
            arr_26 [i_0] [6] = (min((min((max((arr_1 [i_0]), 110)), ((min(-56, (arr_13 [i_0] [i_6] [i_0])))))), ((max(((min((arr_0 [i_0]), (arr_2 [i_0])))), (max((arr_17 [i_0] [i_0] [i_0] [i_0]), 42464)))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_24 = (min((min((min(2147483647, (arr_19 [i_0] [i_0] [i_7] [i_8]))), (~30))), ((max((min(var_4, var_10)), (((!(arr_12 [i_0])))))))));
                        var_25 = (min(var_25, ((~((max(-2147483624, 2147483647)))))));
                        var_26 = (!((max((~9), (min(var_13, -2147483647))))));
                        arr_31 [i_0] [i_6 + 1] [i_7] [i_8] [i_7] [i_7] = (min((max((max((arr_12 [i_0]), var_10)), ((min(447457380, var_8))))), ((max((min(140, 1)), (((!(arr_5 [i_0] [i_6] [i_0])))))))));
                    }
                }
            }
        }
        for (int i_9 = 3; i_9 < 14;i_9 += 1) /* same iter space */
        {
            var_27 = (min((max((max((arr_20 [i_0] [i_9]), -32)), (!var_10))), (((max(-1977021354, var_13))))));
            arr_35 [i_0] [i_0] [i_9] = (min(18446744073709551615, 22));
        }
    }
    #pragma endscop
}
