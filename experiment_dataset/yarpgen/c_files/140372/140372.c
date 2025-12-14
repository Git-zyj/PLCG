/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(-8853564321788383736, var_6));
    var_15 = var_3;
    var_16 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_0] = ((9492 ? 12 : var_8));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 = (min(((max((arr_0 [i_0 - 1]), var_2))), (min((((7924495569131953199 ? -114 : (arr_2 [i_1])))), var_9))));
                                var_18 = ((-(var_7 != -1399354786)));
                            }
                        }
                    }
                    var_19 = -3;
                }
            }
        }
    }
    var_20 = (min(((-8234497427291728977 ? var_5 : -1765324668)), var_13));
    #pragma endscop
}
