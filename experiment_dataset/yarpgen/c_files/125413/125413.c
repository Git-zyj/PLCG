/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (max(-4294963200, ((min((~149), (~1))))));

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_17 = -1;
            var_18 = ((((8634440061938268176 ? -565354869111916172 : 1))));
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            arr_9 [i_0] [i_2] = (-127 - 1);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [i_5] [i_3] [10] [7] [i_5] = (((-3007 && 107) && ((!(((201 ? 8634440061938268154 : 1)))))));
                            arr_17 [i_0] [i_0] [i_3] [i_4] [i_0] &= (((--30090) / ((-1 ? 3539102597 : 242))));
                            arr_18 [i_5] [13] [i_2] [i_3] [i_4 + 1] [i_5] [4] = ((!((-565354869111916182 && ((min(1, 2630713271)))))));
                            arr_19 [i_0] [i_0] [i_3] [i_3] [i_4 + 1] [i_5] = (((-6444219188348658503 + 9223372036854775807) >> 3));
                            var_19 = (max(var_19, ((((((-(1 - -2104284178)))) ? ((((max(69, 2063405235254112207))) ? (1 > 1664254025) : -1664254038)) : (((30014 ? 107 : 50))))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_28 [i_0] [i_0] [i_7] [i_7] = (!8133464341252716174);
                            var_20 = (min(var_20, (((((((30003 ? 255 : 0)) ? ((13 ? 5 : -26070)) : 50)))))));
                            var_21 ^= 35533;
                            var_22 += (~14);
                        }
                    }
                }
            }
            var_23 = (max(var_23, 106));
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    {
                        var_24 &= (((!96) ? (~242) : 32767));
                        var_25 = (min(var_25, 124));
                    }
                }
            }
        }
    }
    var_26 = 1;
    #pragma endscop
}
