/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((((((((((arr_0 [13]) ? 13 : 0)) >= 13)))) * (((((181158273 ? (arr_0 [i_2]) : (arr_2 [i_0])))) ? (((((arr_5 [i_0] [i_1] [i_2 - 1]) && (arr_4 [i_0] [10] [i_0]))))) : ((4294967284 ? 68501187 : 17793686859812294514)))))))));
                    var_12 = ((-5431 / ((4294967276 ? (arr_2 [i_0]) : (((arr_6 [i_0] [i_1] [i_1]) ? 16569141627151832792 : (arr_2 [i_0])))))));
                    var_13 += ((!(((-(((arr_0 [i_0]) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_7 [i_0] [i_1] [3]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = (((arr_7 [i_2] [0] [i_2 - 1]) ? 3057318187 : -5422));
                                var_15 = ((-1 ? ((18446744073709551606 ? 4249308022 : 0)) : ((((!(!266897638)))))));
                                var_16 = ((((((!(arr_15 [i_4 + 2] [i_3 - 1] [i_2 - 2] [i_0]))))) > (((!76) ? (!4113809022) : (((arr_11 [i_0] [i_1] [i_2] [i_3] [i_3]) ? (arr_9 [i_0] [i_2 - 2] [i_2] [i_3]) : 18446744073709551598))))));
                                var_17 = (((~762066589) ? (max(((((arr_4 [i_0] [20] [i_0]) ? -40 : (arr_6 [i_1] [i_3] [i_4])))), ((4249308022 ? (arr_2 [i_0]) : (arr_4 [i_0] [i_1] [i_4]))))) : -2));
                            }
                        }
                    }
                    var_18 += (arr_3 [i_0] [16]);
                }
            }
        }
    }
    var_19 = 11564;
    #pragma endscop
}
