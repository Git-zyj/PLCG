/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_16 = (0 && -49);
            var_17 = 33;
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_18 = ((~(((-39 >= (0 < -2300314182954764816))))));
            var_19 -= -6550;
            arr_8 [i_0] [i_0] = ((~(((774029559 < (~0))))));
            arr_9 [i_0] = 1;
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                arr_15 [i_4] [i_3] [i_3] [i_0] = -6;
                var_20 ^= (!1935972471);
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_21 = (0 % 22);
                arr_20 [i_3] [i_0] = (max(1, ((~(8030968522765009159 & 23)))));
            }
            arr_21 [i_3] [i_0] [i_3] = (((((min(46612, 4))) * 0)) % (-1 ^ 0));
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_22 = (max(-8, (1002182273 < 1)));

            /* vectorizable */
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                var_23 = (!1);
                var_24 ^= (406987611 && -1);
                var_25 = -7132486569546880537;
                var_26 = ((~(7132486569546880537 >= 65535)));
            }
            for (int i_8 = 2; i_8 < 24;i_8 += 1)
            {
                arr_31 [i_8] [i_6] [i_6] [i_0] = (max((min(28, (~7132486569546880537))), 17021));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_27 ^= (max(((max(6903, 2074))), 3060));
                            var_28 = ((((1417906270 || 1697) != 8235)));
                        }
                    }
                }
                var_29 = (((-1018269689 < 2528092759) != 4294967295));
            }
        }
        arr_36 [i_0] [i_0] = (~248);
    }
    var_30 = (max((-1697 - 90), (min(-1, 10207))));
    var_31 = ((((min(1023, 1))) >> (-24580 + 24586)));
    #pragma endscop
}
