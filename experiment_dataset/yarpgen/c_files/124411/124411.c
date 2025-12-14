/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((((var_4 ? var_0 : (arr_2 [0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = -var_9;
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = (max((!40801), (((((12559805101096256895 ? (arr_10 [i_4] [2] [i_2] [i_2] [1] [i_0]) : var_12))) ? 54204 : ((((arr_9 [i_0] [i_0] [i_0] [i_0] [9] [i_0] [i_0]) < 1025914319)))))));
                            }
                        }
                    }
                    var_18 -= var_2;
                }
            }
        }
    }
    var_19 &= var_12;
    var_20 = (((max((var_10 / var_1), (var_11 < 15384385016970514027)))) ? var_11 : var_3);
    var_21 = var_12;
    #pragma endscop
}
