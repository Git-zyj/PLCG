/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_10;
    var_19 &= 32767;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (((-29395 && 255) && (4478 && -106)));
                var_21 = (((8 ^ 1) | (245 % 2)));
                arr_5 [i_0] [i_1] [i_1] = 127;
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_22 |= 1;
        var_23 ^= 245;
        var_24 = (((-14053 & 255) | (1 | 1)));
        var_25 ^= (252 * 10852);
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_26 = 10586775858042466458;
                            var_27 = (((((243 || 723255344) && 4454661333296115240)) || (1 && -1)));
                            var_28 = 247;
                            var_29 = (1027951924 * 1);
                        }
                    }
                }
            }
            arr_19 [i_3] [i_3] [i_4] = (((((1 << (4294967293 - 4294967282)))) * (4999283423816177579 & 1)));
            arr_20 [i_4] = ((1 << (1034065346 - 1034065331)));
        }
        for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
        {
            arr_25 [i_3] = 1;

            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                var_30 = 1454030051;
                var_31 *= ((9 & (((32505856 ^ 288230376151711616) & 10840))));
            }
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                arr_31 [i_3] [i_10] = 1;
                arr_32 [i_10] = (248 >= 11);
                var_32 = (((-106 >= 0) != (1812590508195720364 ^ 1812590508195720364)));
            }
            var_33 = (((236 * 174) << (((61559 ^ 1) - 61543))));
            var_34 ^= -8308670890930063882;
        }
        arr_33 [i_3] = (0 >= 158);
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        arr_37 [i_11] = 0;
        var_35 = 8;
    }
    #pragma endscop
}
