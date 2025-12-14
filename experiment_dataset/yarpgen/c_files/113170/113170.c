/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 58578;
    var_20 = var_4;
    var_21 += var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = ((44633 ? 0 : 1475989057));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_23 = (i_2 % 2 == zero) ? (((((max(var_18, var_16))) ? ((37736 << (((((arr_6 [i_3 + 1] [i_2]) + 1468605541)) - 20)))) : ((-(arr_1 [i_1] [i_0 + 1])))))) : (((((max(var_18, var_16))) ? ((37736 << (((((((((arr_6 [i_3 + 1] [i_2]) + 1468605541)) - 20)) + 674891690)) - 20)))) : ((-(arr_1 [i_1] [i_0 + 1]))))));
                                arr_13 [2] [i_2] [i_2] = var_10;
                                var_24 = (max(var_24, var_9));
                                arr_14 [i_4] |= (!1);
                                var_25 = 1475989057;
                            }
                        }
                    }
                    var_26 |= 1;
                    var_27 -= var_16;
                }
            }
        }
    }
    #pragma endscop
}
