/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_11 = var_9;
                var_12 = ((var_9 ? var_0 : 7));
                var_13 = 57821;
            }
            for (int i_3 = 4; i_3 < 9;i_3 += 1)
            {
                var_14 ^= var_3;
                var_15 *= (min(var_5, ((57818 ? 136 : (min(2, -1872231015))))));
            }
            var_16 ^= (min((max((((16330191699994167548 ? 126 : var_0))), 18446744073709551615)), 2999095625013280899));
            var_17 = ((2116552373715384087 ? (((var_7 ? -1588603603 : 17))) : (min(var_0, 2147483647))));
        }
        arr_9 [i_0] = var_8;
        var_18 *= ((3788272650 ? var_2 : (((((max(2116552373715384074, var_0))) ? 244 : 2147483647)))));
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 1; i_5 < 7;i_5 += 1) /* same iter space */
        {
            var_19 = var_1;
            arr_14 [i_4] [i_4] [i_5] = ((var_7 ? var_8 : var_10));
            var_20 = 11635708328467840731;
            arr_15 [i_4] = 19;
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_21 [i_4] [i_5] [i_4] [i_4] [i_7] = 4294967275;
                        var_21 = var_6;
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 7;i_8 += 1) /* same iter space */
        {
            arr_25 [i_4] [i_4] = var_9;
            var_22 = (max(var_22, 1365413081));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_23 = 4294967292;
                    var_24 = (min(var_24, ((min(var_9, (min(7760279287144090143, 141)))))));
                    var_25 = 4294967275;
                }
            }
        }
        var_26 &= 18446744073709551615;
    }
    var_27 = (min(var_27, ((((((var_3 ? (max(var_10, 26)) : ((min(var_0, var_2)))))) ? var_8 : 46707)))));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            {
                arr_35 [i_11] [i_12] = (((var_2 ? -691554675 : var_7)));
                var_28 = (min(var_28, ((var_2 ? ((((min(var_5, var_1))))) : var_4))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 3; i_14 < 11;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                {
                    arr_46 [i_13] [i_15] [i_15] = 18446744073709551611;
                    var_29 = ((((var_1 ? var_3 : 19))));
                }
            }
        }
    }
    #pragma endscop
}
