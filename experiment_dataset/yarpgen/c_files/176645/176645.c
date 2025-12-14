/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 10;i_4 += 1)
                            {
                                var_10 = ((((((arr_10 [i_0] [i_1] [i_2 - 1] [i_3] [i_4] [i_3] [i_2 - 1]) & (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((max((arr_10 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_4] [i_4 + 1]), (arr_10 [i_0] [i_4] [i_2 - 3] [i_0] [i_4 - 1] [i_0] [i_0])))) : var_1));
                                arr_14 [i_3] [i_1] [i_2] [i_3] [i_4] = 2147483647;
                                arr_15 [i_4] [i_4 - 1] [i_4] [i_4] [i_3] [i_4] [i_4] = (max((max(0, 2147483647)), ((8983 ? var_8 : var_5))));
                            }
                            var_11 = (max(var_11, ((((max(((4099164217 ? 18056123585330390531 : 1)), (arr_5 [i_2 - 3] [i_2] [i_2 - 2] [i_2 + 1]))) << (((((-2147483647 - 1) - -2147483609)) + 51)))))));
                            var_12 = (max(var_12, (~var_4)));
                            arr_16 [i_0] [i_3] [i_1] [i_2 + 1] [i_3] = ((var_5 ? (arr_11 [i_0] [i_1] [i_0] [i_3] [i_0] [i_2 - 4] [i_0]) : -126));
                            var_13 = ((max(((65 ? var_4 : 18446744073709551615), (var_9 >= var_9)))));
                        }
                    }
                }
                var_14 = ((((((((var_4 ? (arr_12 [i_0] [i_0] [i_1] [i_0]) : var_6))) ? (209 > 390620488379161094) : (!var_4)))) ? ((((((arr_7 [i_1] [i_1]) ? 1 : 1))) ? (9764589335536066111 / 10286419040429105739) : (arr_9 [i_1] [i_1] [i_0] [i_0] [i_0]))) : (((var_3 ? 1948074770438766144 : 10993518894440928322)))));
            }
        }
    }
    var_15 = (min(var_15, ((max(var_4, (min(65535, ((var_6 ? 1024 : 16)))))))));
    #pragma endscop
}
