/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(18014398509465600, 221));
    var_15 = (max((max(215, (221 / 1))), ((max((0 || 226), 29)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] = (min(254, 96));
                var_16 = 18;

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_17 = max(228, -2147483630);
                    var_18 = 1;
                }
                var_19 = (min(((((1 ? 30 : 174)) * ((max(212, -25269))))), (max(-932503961, (2147483630 != 932503969)))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_20 = (min(0, 35));
                                arr_16 [i_0] [i_1] [i_4] [i_4] [i_5] = (max((~96), ((((2237090255550514089 != 56) < (1 * 2237090255550514089))))));
                                arr_17 [i_0] [i_1] [i_3] [i_4] [i_4] [i_5] = (((((~(max(1121457375245650465, -2147483627))))) ? ((max((1 <= 230), 1))) : ((((max(-2237090255550514089, 18446744073709551601)) >= ((1432745063361020067 ? 1121457375245650465 : 17325286698463901173)))))));
                                arr_18 [i_1] = ((((~(min(-1432745063361020067, 14)))) % (max(((1 ? 8842497606095309077 : 17325286698463901151)), (max(1121457375245650460, 1121457375245650480))))));
                                var_21 = (-2147483630 && 249);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
