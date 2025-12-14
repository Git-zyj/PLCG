/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 -= var_18;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = var_11;
                    var_22 = 55480;
                    arr_7 [i_0] [i_1] [i_2 + 1] |= (((((1924387269236574671 < 17844) ? (var_11 ^ var_5) : (arr_2 [i_2 + 1]))) % ((((var_15 != (arr_6 [i_2] [i_2] [i_2 - 1] [i_1])))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {

                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            arr_21 [i_6] [i_3] [i_3] [i_3] [i_3] [i_3] = ((!((max(((((arr_6 [i_6] [i_5] [i_4] [i_3]) > 7989921536381065637))), (min(var_4, var_15)))))));
                            arr_22 [i_6] [i_4] [i_4] [i_6] [i_6] = var_2;
                            arr_23 [i_7] [i_6] [i_6] [i_3] = ((!((((!var_1) ? (arr_12 [i_3]) : ((var_12 ? -17844 : var_0)))))));
                            arr_24 [i_3] [i_6] [i_3] [i_6] [i_7] = (!((max((max(var_6, var_16)), (var_7 > 24)))));
                            arr_25 [i_3] [i_4] [14] [i_6] [i_7] [i_7] [i_5] &= var_6;
                        }
                        var_23 = (max(var_23, (min((((((((arr_15 [i_3] [i_3] [i_3] [i_3]) > (arr_20 [i_5]))))) / 7989921536381065637)), (((10592 > (var_9 != 7715839439208867906))))))));
                        arr_26 [i_6] [i_4] [2] [i_4] = (!var_18);
                        var_24 -= var_16;
                    }
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        arr_30 [i_3] [i_3] [i_3] [i_8 - 1] [0] [i_3] = ((var_11 ? ((var_11 ? 0 : ((var_8 >> (var_6 + 2391867321575029398))))) : (((-10586 + 2147483647) >> ((((max(var_14, var_12))) - 42711))))));
                        arr_31 [15] [i_5] |= ((!(((-1 ^ var_8) < ((var_8 ? 10592 : 127))))));
                        var_25 -= min((((((var_2 ? 0 : var_15))) ? var_9 : ((var_18 ^ (arr_6 [4] [i_4] [4] [i_4]))))), (((var_1 ? 54 : (var_17 * 33600)))));
                        arr_32 [7] [i_4] [i_4] [i_4] = 110;
                    }
                    var_26 = (max(var_26, (!var_4)));
                }
            }
        }
    }
    #pragma endscop
}
