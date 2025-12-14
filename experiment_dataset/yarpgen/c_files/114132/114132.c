/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, var_3));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = ((max(5552318001246759659, -5552318001246759679)));
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] = (max(((-5552318001246759657 ^ (~5552318001246759630))), ((min((!var_6), (arr_4 [i_0] [5] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 |= var_9;
    var_18 |= (78 + 16756);
    #pragma endscop
}
