/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((140737488355327 ? 16703 : 0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = ((0 - (((86 ? 1 : 1)))));
                    var_22 = (~((63 ? 4294967295 : -26208)));
                    arr_6 [1] [i_0] = ((!(~1)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_23 -= ((~((~((86 ? -1768709432 : 47336))))));
                                arr_12 [i_0] [i_0] [i_2] = ((((max((~-8161), ((max(0, 43390)))))) ? -1570256206 : -30));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_15 [i_5] [i_5] = 255;
        var_24 &= (!224);
        var_25 -= (28 - 80);
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_26 = (min(var_26, -547261723));

        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            arr_21 [i_7] [i_7] = (((max(1, 0))));
            var_27 ^= ((((((7 ? 17386 : -1778302084)))) ? ((-(max(0, 1778302067)))) : 1));
            arr_22 [i_7] [i_7] [i_7] = ((((max(1, -1269158322))) ? ((((16343134066835793563 < 1) ? -758815090 : (!-27)))) : (((max(252052522, 4095)) ^ -1))));
            var_28 = (((1 ? 1114154352 : -48)));
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
        {
            var_29 ^= 2;
            var_30 = (min((max((max(-1, -1)), 30504)), (((2630430464 ? 14160 : 3978285769)))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    {
                        var_31 = (max(var_31, ((max(1, ((1 ? ((max(216, 1))) : 1)))))));
                        arr_31 [i_10] [1] = (max((min(1, 1664536812)), 1));
                        arr_32 [i_6] [i_8] [i_10 + 1] = ((((15705694803964423587 ^ -12) | 1)));
                        arr_33 [5] [i_8] [i_8] [i_8] = ((min(1, 8000019513419986060)));
                    }
                }
            }
        }
        var_32 = (min(var_32, ((!(!1047552)))));
    }
    #pragma endscop
}
