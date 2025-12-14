/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((10827586358940822088 || var_3) <= 17167));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] |= (max(18446744073709551615, 0));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_14 |= (max((((233 ? 63 : 33063))), 10827586358940822083));
                            var_15 = (~10827586358940822088);
                            arr_10 [i_0] [i_1] [i_2] [5] |= (max((min((min(-78, 7619157714768729527)), ((max(87, 8476993602337918470))))), (((36301 ? ((224 ? -5042 : -38)) : (0 / -27))))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                arr_13 [i_4] [i_1] [i_2] [i_3] [5] = (21 <= 1);
                                arr_14 [i_4] = ((1 ? -66 : 6204640486198755344));
                            }
                            for (int i_5 = 2; i_5 < 17;i_5 += 1)
                            {
                                arr_17 [i_0] [i_1] [i_3] |= (((max(-90, 3805897847224183494)) != (~1)));
                                var_16 = ((((min((4845712964713680140 & -2061576397), 1))) ? (~6768425526520120086) : (min(145, 9910754350954542960))));
                            }
                        }
                    }
                }
                arr_18 [i_0] = (((((max(5998203486532994632, 94)))) <= (!-109)));
            }
        }
    }
    #pragma endscop
}
