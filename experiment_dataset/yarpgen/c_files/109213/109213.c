/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, 1822475801));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_14 = ((~((((arr_7 [i_0] [i_0]) < (arr_7 [i_0] [i_0]))))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4 + 2] = ((((187 ? 2167715738 : (arr_9 [i_0] [i_1]))) > (arr_7 [i_0] [i_1])));
                            }
                        }
                    }
                    var_15 = (1 * 0);
                }
            }
        }
    }
    var_16 *= (-0 <= var_3);
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    var_17 = ((min(1, (max(var_6, -1984737430)))));
                    var_18 = (~25816);
                }
            }
        }
    }
    var_19 = (min((1 ^ 609421526), (((var_9 ? 1 : 2077972335)))));
    #pragma endscop
}
