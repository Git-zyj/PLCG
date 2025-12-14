/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 63;
                var_12 = (((1 ? 4294967280 : -1071914958)));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [7] [7] [7] [5] [7] [1] [7] = ((((min(19, 1))) ? 25 : (((((3112083566 ? -63 : 1))) ? ((max(1, 38615))) : (min(1587499138, 1))))));
                                var_13 *= ((((4294967273 ? 1 : -1))));
                                var_14 += 8;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_15 = 45038;
                                arr_19 [7] [i_6] [7] [8] = (~-69);
                            }
                        }
                    }
                    arr_20 [8] [i_1] [2] [8] = 2460999303;
                    var_16 = 4294967278;
                    var_17 = (!65530);
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            arr_28 [5] [5] = -32766;
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 9;i_10 += 1)
                {
                    {
                        arr_33 [6] [5] [0] [i_10 - 2] = ((-1684794901 ? 15313 : 606091553487081516));
                        arr_34 [7] = (!(!3241432950));
                        var_18 = 1;
                    }
                }
            }
            var_19 -= 65535;
            var_20 = (((6 ? 1990 : 4294967292)));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            arr_37 [1] &= (((((33206 ? -13 : 1040384))) ? (!1587499121) : 7));
            var_21 = 23;
            var_22 = (((((39289 ? 11819967778923444709 : 0))) ? 2 : 11519));
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    {
                        arr_48 [2] [i_12] [i_12] [i_13] = (max(((0 ? 94 : -5503)), (((min(-28578, 56977))))));
                        var_23 = ((34954 ? (min(1587499125, ((21 ? 3820852418130000463 : 1)))) : 1));
                        var_24 = (max((!56), 2162637688));
                    }
                }
            }
            var_25 = ((1 ? 134216704 : ((4 ? 24 : 239))));
            var_26 = (min(-275057596, 2336458199057239054));
        }
        var_27 = (((65535 ? 1337 : -256)));
    }
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        var_28 = 281470681743360;
        arr_52 [i_15] = 32;
    }
    var_29 -= (min(1, 1660701020));
    #pragma endscop
}
