/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (max(((~(max(3072, 4294967289)))), ((max(((max(32767, 226))), (~39386))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_15 ^= 32754;
                            var_16 = (max(var_16, ((max((max((~-9223372036854775806), 13)), -22940)))));
                            var_17 = (min(var_17, 9223372036854775807));
                            var_18 = (max(var_18, 26136));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_19 += 4339655711811223215;

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_20 *= 32754;
                            var_21 += 33554432;
                        }
                        var_22 = (min(var_22, ((max(0, ((max(0, 2147483638))))))));
                        var_23 = (min(var_23, 1));
                    }
                }
            }
            var_24 |= 18446744073709551612;
        }
        var_25 |= (max(2080374784, -32763));
        var_26 |= (min((((~(~-26308)))), 32512));
    }
    for (int i_8 = 2; i_8 < 8;i_8 += 1)
    {
        var_27 = (max(var_27, (((~((max((max(-2, -32755)), 32749))))))));

        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_28 = (min(var_28, (max(((max(1, (max(2147483647, 32767))))), (min((-9223372036854775807 - 1), ((min(2864712563, 1)))))))));
            var_29 *= 1;
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            var_30 ^= (max(128, 67));
            var_31 = (max(var_31, ((max(-133955584, ((~(min(128, -1)))))))));
        }
        for (int i_11 = 2; i_11 < 8;i_11 += 1)
        {
            var_32 *= -7;
            var_33 ^= (~(~1));
        }
    }
    var_34 *= ((max(44849, 7)));
    var_35 ^= (!(--20689));
    #pragma endscop
}
