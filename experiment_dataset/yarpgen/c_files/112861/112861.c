/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_10 = ((((((4237037277 ? (arr_3 [21] [i_1] [22]) : -3751682720053696940)) & (arr_7 [i_2] [i_1] [17] [2]))) / (~var_6)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_2] [i_0] = 3;
                                var_11 = ((((((min(var_0, (arr_8 [i_0] [i_2] [3] [i_4])))))) * (max(-3616653938917185776, (((!(arr_5 [i_4] [i_3] [7] [i_1]))))))));
                                var_12 = 5871;
                                arr_14 [i_4] [i_3] [18] [17] [i_1] [i_0] = (((241 ? (arr_11 [19] [22]) : 200)));
                                arr_15 [i_0] [i_1] [13] [20] [0] = (min(12630, 4237037256));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_13 = (!-10573);
                                var_14 = (min((max(-9223372036854775799, 2226661659)), ((-(arr_18 [i_5 - 3] [i_5 + 1] [i_6] [i_5 - 3] [i_5] [i_5 + 3])))));
                                arr_21 [i_6] [i_1] [10] [i_5] [12] = (arr_16 [17] [i_0] [i_5] [i_5 - 2]);
                                var_15 = (min((arr_7 [i_6] [19] [i_1] [i_0]), (min((((var_6 ? var_2 : (arr_8 [i_0] [i_1] [18] [i_6])))), (max((arr_12 [17] [18] [i_2] [i_5] [1]), (arr_0 [i_5])))))));
                                arr_22 [i_6] = (((min((arr_20 [i_6] [i_5 + 1] [i_5 - 3] [i_5 - 3] [i_5 - 1] [i_5 + 2]), (arr_20 [i_6] [i_5 + 2] [i_5 + 3] [i_5 - 1] [i_5 - 2] [i_5 + 2]))) ? (min((min(-3616653938917185773, var_2)), 238)) : (arr_16 [i_1] [i_1] [11] [i_6])));
                            }
                        }
                    }
                }
                arr_23 [i_1] [i_0] = (min((max((var_6 || var_8), (((arr_2 [3]) * (arr_17 [i_0] [i_0] [i_1] [i_1]))))), (((-4181289775716030789 / (min(3138092804948832607, (arr_10 [1] [7] [i_0] [i_0] [3] [12] [21]))))))));
            }
        }
    }
    var_16 = var_1;
    var_17 = ((((var_5 << ((var_1 ? var_8 : 1)))) == var_2));
    var_18 = (~(((~var_4) | (~var_2))));
    #pragma endscop
}
