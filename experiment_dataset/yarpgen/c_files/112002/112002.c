/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (max(((8796093022207 ? var_6 : (max(18446735277616529408, 7502860635523448808)))), ((min((arr_0 [i_1 + 2] [i_1]), (arr_2 [i_1 + 1] [i_0] [i_0]))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_14 = (max(((((arr_2 [i_0] [i_0] [i_2]) | (arr_6 [i_0] [i_1 - 1] [i_2])))), (((arr_4 [i_2]) ? 8862797740421460326 : 1990198432313979406))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_4 - 1] [i_3] [i_2] [i_3] [i_0] = ((((var_3 <= (max(4611686018427387903, 1)))) ? ((~(143 * 10011158297019830311))) : (~32756)));
                                arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] = ((!((min(var_12, 18446744073709551615)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_15 -= 8862797740421460326;
                                arr_21 [i_6] [i_1] [i_1] [i_0] = (!656525176740493712);
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_0] = var_8;
                    var_16 *= 8796093022208;
                }
                arr_26 [i_0] [i_1 + 1] = ((~(max(((max(var_10, 224))), (max(var_11, 2561393405))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                var_17 *= ((((((arr_2 [i_8] [i_8] [i_9]) ? 8796093022208 : (arr_10 [i_8] [i_8] [9] [i_8] [i_8])))) ? (((arr_10 [i_9] [i_8] [i_9] [i_8] [i_9]) - (arr_10 [i_9] [i_9] [i_9] [i_8] [i_8]))) : (max((arr_2 [i_8] [i_8] [i_9]), (arr_10 [i_8] [i_8] [i_9] [i_9] [i_9])))));
                var_18 = (max(var_18, (((max((((arr_18 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? (arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_9] [i_8]) : 18446744073709551615)), (min((arr_0 [i_8] [i_9]), var_4)))) / (9223372036854775807 / var_2)))));
            }
        }
    }
    #pragma endscop
}
