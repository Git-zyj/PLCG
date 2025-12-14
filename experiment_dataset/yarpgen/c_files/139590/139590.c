/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 &= -4636407482351440989;
                                arr_16 [i_3] = ((((max(1416454625, -5627199737063022327))) ? var_10 : (max(60349, 4294967270))));
                                arr_17 [i_3] [i_1] [7] [i_1] [i_1] = (max(var_2, ((-5627199737063022337 ? var_3 : (max(-5627199737063022327, 1832114315933752415))))));
                            }
                        }
                    }
                }
                arr_18 [i_1] [i_0] = (max(((-5627199737063022327 ? 5627199737063022327 : 4294967280)), var_9));
                arr_19 [i_0] [5] [i_1] = ((52 ? (((204 ? var_6 : var_5))) : var_13));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_17 += var_11;
                            var_18 = 45;
                        }
                    }
                }
            }
        }
    }
    var_19 = var_11;
    var_20 = ((28656 ? var_8 : var_11));
    var_21 = var_5;
    #pragma endscop
}
