/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 *= (min((((arr_6 [i_0] [i_1]) ? 27 : var_2)), ((((arr_6 [i_0] [i_1]) != (arr_6 [i_0] [i_0]))))));
                    var_20 = ((((((arr_3 [i_0] [i_2] [i_0]) ^ (max(-1816696126, 29648))))) + ((24 ? (var_16 & var_5) : (((arr_5 [i_0] [i_2] [i_2]) & 5311455313001368864))))));
                    var_21 += (((max((arr_4 [i_0] [i_0]), (-29655 + -1))) * (((-(arr_7 [i_0] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_22 = (745273710 && 4);
                                arr_18 [6] [i_2] [i_1] = ((((((arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1]) - 2481))) ? (((148845049 ^ (arr_8 [i_0])))) : 27));
                                arr_19 [i_1] [i_0] [3] [3] [i_4] [i_2] [2] = ((+((4294967278 ? (((arr_9 [i_1]) ? 6455 : var_9)) : (-14 / var_10)))));
                                var_23 = var_5;
                            }
                        }
                    }
                }
            }
        }
        arr_20 [8] [i_0] = 1;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                {
                    var_24 = (((16376 ^ (~-256))) - (((arr_23 [i_5] [i_7 + 2]) & (2147483647 >= 15865541))));
                    var_25 = (min(var_25, (((((~(((arr_24 [i_5]) >> (((arr_22 [i_5]) - 1513910504)))))) | (min((~1), (arr_21 [i_7 + 1]))))))));
                    var_26 = (max(var_26, ((((115964834 > 1) ^ (max(((65515 + (-9223372036854775807 - 1))), ((((arr_21 [0]) ^ (arr_24 [i_6])))))))))));
                }
            }
        }
        var_27 = 21;
        var_28 = ((max(93923805, (~var_17))));
    }
    var_29 = var_8;
    #pragma endscop
}
