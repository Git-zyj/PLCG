/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_15 & -12366) + 2147483647)) << ((((min(var_15, 12))) ? (13967628380178696970 + 4479115693530854646) : var_2))));
    var_17 += var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_18 = (max(13967628380178696970, (((((max(var_5, 244))) >> (var_7 && var_14))))));
                var_19 = (max(243, ((12 ? 2 : ((4479115693530854645 ? 65520 : 222))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_20 *= 2632792573;
                                var_21 = max(((min(var_5, 254))), (min(648921402, 3658215457)));
                            }
                            for (int i_5 = 1; i_5 < 7;i_5 += 1)
                            {
                                var_22 = (!2632792578);
                                arr_15 [i_0] [i_0] [7] [i_0] [7] = (max(var_8, var_4));
                            }
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (((13967628380178696971 / var_9) ? -46 : (~19)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
