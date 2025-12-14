/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [22] [i_1] = (((min(56, 15872)) != (255 <= 4294951406)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_20 = (((max((~1), -17528)) ^ var_7));
                            var_21 = 16799;
                        }
                    }
                }
            }
        }
    }
    var_22 = var_16;
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_23 = (max((((-16800 ? 8756 : 255))), var_1));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_24 += ((116 ? 115 : -16799));
                                var_25 = (!(((8777 ? -676962095 : -1))));
                            }
                        }
                    }
                    var_26 = ((var_0 != ((var_7 ? 91 : (65535 && 23499)))));
                }
            }
        }
    }
    var_27 = ((95 ? var_18 : 1345410803));
    #pragma endscop
}
