/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((4398046248960 ? 33 : -18821));
    var_18 = 18847;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 &= (arr_1 [i_1 - 1] [i_1 - 1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] = var_10;
                            var_20 = (~-18821);

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_4] = (16790 / -18847);
                                var_21 = (((~(~18844))));
                                arr_14 [i_1] [i_1 - 1] = (var_2 <= 995681878758058844);
                            }
                            arr_15 [i_0] [i_1] = (arr_8 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]);
                        }
                    }
                }
                var_22 = (18816 <= 1023);
                var_23 = ((~(4294967281 / 18816)));
            }
        }
    }
    var_24 = (((-(!var_5))));
    var_25 *= ((!(~136)));
    #pragma endscop
}
