/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (min(var_15, ((max(1009796317, 0)))));
        arr_2 [i_0] |= var_8;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (~1227707046);

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_16 = 33818;

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_17 = (max(var_17, ((((-1009796311 + 1227707046) <= (((-1009796305 >= (arr_5 [i_1] [i_1])))))))));
                arr_15 [i_1] [i_2] [i_2] [i_3] = (((arr_10 [i_1] [i_1 - 1] [i_2]) == (arr_10 [i_1 - 1] [i_1 - 1] [i_2])));
                var_18 = (min(var_18, ((((~6393793054697992588) ? (-1009796317 ^ -18) : (~var_1))))));
            }
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_19 = (max(var_19, (((-2703756113 ? 42438 : 0)))));
            arr_19 [i_4] [i_4] = (-(arr_4 [i_1 + 1]));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_22 [10] = 2806106205;
            var_20 = (max(var_20, 23098));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_28 [i_7 + 1] [i_6] [i_6] [i_1] = (arr_12 [i_6]);
                        var_21 = 524287;
                        arr_29 [i_6] [i_6] [i_7] = -524287;
                    }
                }
            }
        }
        arr_30 [7] [i_1 - 1] = ((29382 ? -1009796297 : 23106));
    }
    for (int i_8 = 2; i_8 < 18;i_8 += 1) /* same iter space */
    {
        var_22 *= ((~((+((268402688 ? (arr_25 [i_8]) : 24))))));
        var_23 *= (max(-1009010450, ((((arr_14 [i_8] [i_8] [i_8] [i_8]) && (!0))))));
        arr_34 [i_8 + 1] [i_8] = (1363742822 % -1111486486);
        var_24 = (min(var_24, ((var_4 >> (((524287 | -23) + 18))))));
        var_25 *= (min(-18, (min((arr_4 [i_8 - 1]), 0))));
    }
    for (int i_9 = 2; i_9 < 18;i_9 += 1) /* same iter space */
    {
        arr_39 [i_9] |= -2;
        arr_40 [i_9] = 16330;
        arr_41 [i_9] = (((-32767 - 1) ? 7675 : (arr_4 [i_9])));
    }

    for (int i_10 = 2; i_10 < 16;i_10 += 1)
    {
        arr_44 [i_10] = arr_32 [i_10 - 1];
        var_26 *= ((((((var_1 ? 211106232532992 : 0)) >= 23098)) ? (!221) : ((~(min((arr_8 [i_10 + 1] [i_10 + 1] [0]), 1048575))))));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_27 *= (((-(arr_45 [19]))));
        arr_48 [i_11] = -2147483644;

        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            var_28 = ((((((1 ? 31 : 20379)) < 35)) ? (arr_46 [i_11]) : -74));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 17;i_15 += 1)
                    {
                        {
                            var_29 = (min(var_29, (((42438 ? 14976786047766866747 : -1009796317)))));
                            var_30 ^= (!(((3285956847 ? var_5 : 0))));
                        }
                    }
                }
            }
            var_31 = (min(var_31, (((~(arr_45 [i_12]))))));
        }
    }
    var_32 = (max(var_32, (((((max((9710 >= var_8), var_12))) ^ var_13)))));
    var_33 = (max(var_33, (((1 ? (max(var_4, 1)) : (((-1 ? 0 : ((min(23097, -1009796315)))))))))));
    #pragma endscop
}
