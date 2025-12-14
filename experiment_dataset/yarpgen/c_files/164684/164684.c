/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (46080 - (((min((arr_9 [i_3 - 1] [i_2 - 2] [i_2] [i_1] [i_1 + 4]), (arr_9 [i_3 - 1] [i_2 - 2] [i_2 - 1] [i_1 + 4] [i_1 + 4]))))));
                                var_20 = ((-48 > ((188 ? (arr_6 [i_0] [10]) : 3442))));
                            }
                        }
                    }
                    var_21 = ((((!(arr_9 [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2] [i_2 + 3])))) + ((min(var_18, (arr_9 [i_2 - 2] [i_2 - 2] [i_2] [i_2] [i_2])))));
                }
            }
        }
    }
    var_22 &= (min(var_8, 1));
    var_23 += (((((var_11 ? var_9 : 1)) >= ((127 ? 1006632960 : 24482)))));
    var_24 = (max(var_1, var_9));
    #pragma endscop
}
