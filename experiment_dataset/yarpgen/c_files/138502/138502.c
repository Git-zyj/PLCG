/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_11 = (((max(-60, 1)) > 7));
        arr_3 [i_0] = ((((min(60, 147))) * (1 + 1)));
        arr_4 [2] = 164;
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [12] = min(((min((~0), (var_7 >> 1)))), ((min(0, 8609395436071249193))));
        var_12 &= (((((9223372036854775807 ? 19 : -70))) ? (min((((237 ? var_8 : 120))), (min(18446744073709551615, (arr_0 [i_1] [i_1]))))) : (((min(0, 3813933689665692244))))));
        arr_8 [i_1] = ((65535 ? 7261775651042448267 : 166));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_13 &= max((max((((var_2 ? var_5 : var_0))), -7142745725038585152)), ((~((1913431053 ? 1 : 9223372036854775807)))));
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 7;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_18 [i_2] = (((29 != 127) == (((~65535) ? ((max(58820, 0))) : ((max(25, 1)))))));
                        var_14 = (((((((~(arr_13 [i_2] [i_4] [i_4])))) ? var_9 : 0)) & ((((1 >= 17) * 0)))));
                        var_15 -= (!((max((((-2147483647 - 1) / 65535)), 6722))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            var_16 |= (((arr_1 [i_6 + 1]) ? (arr_1 [i_6 - 1]) : (arr_1 [i_6 + 2])));
            arr_21 [0] [0] [6] |= ((55 ? 233 : 0));
            arr_22 [i_2] [6] [6] |= -9223372036854775806;
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 9;i_7 += 1)
        {
            arr_27 [i_2] = (!223);
            arr_28 [i_2] = 1853264722;
            var_17 *= (!6917529027641081856);
            arr_29 [4] [1] [4] &= ((~(arr_15 [i_2 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 - 3])));

            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                var_18 = 4515617361636518691;
                var_19 &= (arr_25 [5] [i_7] [2]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_20 += (!9223372036854775794);
                            var_21 = (((arr_10 [i_2]) < (arr_10 [i_2])));
                            var_22 &= ((23193 ? (arr_25 [i_9] [i_10] [i_7 - 2]) : 6917529027641081840));
                            arr_38 [i_2] [i_7] [i_2] [i_2] [i_2] [i_2] [0] = ((15 ? 6917529027641081856 : (arr_25 [i_2 - 1] [i_7 + 1] [i_8])));
                        }
                    }
                }
                var_23 = ((!(!0)));
            }
        }
        var_24 ^= 42336;
        var_25 += ((84 << (96 - 78)));
    }
    var_26 |= var_7;
    var_27 ^= var_2;
    #pragma endscop
}
