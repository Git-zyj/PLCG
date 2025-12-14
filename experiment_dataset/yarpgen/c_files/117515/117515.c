/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_11 ? var_12 : ((var_14 ? (!-1077605269400518893) : ((var_13 ? var_6 : var_12))))));
    var_19 = (((min(var_4, var_6))) ? ((max(var_6, var_15))) : (((((min(8353115884091100117, 185)) <= 32597337)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 = ((((min(((-(arr_3 [i_0]))), ((min(var_5, var_0)))))) ? var_13 : ((((((32597339 / (arr_5 [i_0] [i_1 + 3] [i_0]))) == ((max((arr_4 [11] [i_0] [i_0] [2]), -125)))))))));
                    var_21 = (min((~-26), ((((max(-37, (arr_5 [i_0] [i_0] [i_0])))) ? (arr_2 [i_0 + 1]) : (((arr_3 [i_0]) ? var_15 : (arr_1 [i_0])))))));
                    var_22 *= (min(-1077605269400518923, ((7 & ((-32597349 ? 2114708378 : 8752164142026879393))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_23 -= ((-(max((arr_6 [i_1 + 3] [i_4 + 3]), (((0 > (arr_7 [8] [8] [i_3] [i_4]))))))));
                                arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [2] [i_4 - 2] = ((!(((arr_0 [i_0]) == (((arr_6 [i_0] [i_1]) ? (arr_6 [i_0 + 1] [i_3]) : (arr_6 [i_4] [i_3])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((!(var_1 >= var_12)));
    #pragma endscop
}
