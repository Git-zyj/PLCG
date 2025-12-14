/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4 + 1] [i_2] = ((min(17305586172134331837, var_4)));
                                var_20 = ((min((arr_4 [i_1 - 1] [i_2] [i_4 - 1]), (arr_4 [i_1 + 3] [i_1 + 3] [i_4 + 1]))));
                            }
                        }
                    }
                    var_21 = (max((max((arr_4 [i_0] [i_1] [i_1 - 1]), (arr_4 [i_1] [i_1 - 1] [i_1 - 4]))), var_4));
                    var_22 = (((arr_4 [i_0] [i_1] [i_1 - 1]) ? ((-(arr_8 [i_0]))) : (max(((248 ? var_10 : (arr_1 [i_1 - 4]))), 1023))));
                    var_23 -= 1552685368;
                }
            }
        }
    }
    var_24 = (min(1141157901575219779, 1141157901575219779));
    var_25 = (min(var_10, (-639649902 + 50194)));
    var_26 = (max(var_19, (max(0, 17305586172134331837))));
    #pragma endscop
}
