/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 *= min((max(24762, 1832608493)), (40773 * 2462358802));
                arr_5 [1] [i_0] = (min((3747420495 / -1038147607818195339), (max(((min(var_9, (arr_2 [i_1])))), (arr_1 [i_0])))));
                arr_6 [i_0] = var_11;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_2] = (min(((((415980806164864048 ? 1 : 24762)))), var_0));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_23 [i_2] [i_5] [i_4] = (min(((var_16 < (arr_12 [i_2] [i_2 - 1] [i_2 + 4]))), (((arr_7 [i_2 + 1]) > (arr_13 [i_2] [i_2])))));
                                var_20 = 1832608480;
                                var_21 |= (arr_15 [i_3] [i_3] [i_3] [i_2 - 1]);
                            }
                        }
                    }
                }
                var_22 ^= (max((arr_1 [i_2 - 1]), (((!((62 != (arr_13 [i_2] [i_2]))))))));
            }
        }
    }
    var_23 = ((var_17 || (!var_4)));
    var_24 = var_14;
    #pragma endscop
}
