/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = ((min(65535, (arr_1 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = (min(((var_4 ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 + 1]))), ((min(65535, 65535)))));
                                arr_12 [i_1] [i_1 - 2] [i_2] [12] [i_3] [i_2] [i_3] = ((max(-119, (arr_5 [i_1 - 3]))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [11] [i_4] = (min(85, ((var_2 - (((min(-109, -96))))))));
                            }
                        }
                    }
                    var_18 = (arr_5 [i_0 - 2]);
                    var_19 = (((((((-(arr_7 [6] [6]))) % (arr_3 [i_1 + 3] [i_1] [11])))) ? (((((min(4, 65524))) / 12))) : (((((4 ? 65535 : 20))) ? -119 : (((arr_11 [i_0] [2] [i_2]) ? var_9 : (arr_5 [4])))))));
                }
            }
        }
    }
    var_20 = var_0;
    var_21 = (max(var_21, ((min((var_8 == var_8), var_11)))));
    var_22 = (min(var_22, 64239));
    #pragma endscop
}
