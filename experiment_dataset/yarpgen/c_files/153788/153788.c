/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 ^= (max(44120, (min((0 <= 21416), 14830976243106693249))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 ^= (504137548 == -32751);
                                var_20 ^= 21415;
                                arr_11 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] = 87;
                                arr_12 [i_0] [i_1] [i_1 + 1] [4] [4] [i_1] = ((-32751 >> (((min(504137562, 3790829733)) - 504137557))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_21 = -542545299;
                                var_22 = ((((((min(14336, 12)) != 504137548))) - 549130693496299332));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            {
                arr_22 [i_7] [i_7] = (0 == -8415310891858415911);
                var_23 ^= (min((((31 < (65529 - 1)))), 44120));
                var_24 = (min(var_24, ((min((min((min(504137566, 0)), 1)), -32764)))));
            }
        }
    }
    var_25 = (((15386484745831260447 >= 14336) < (((1261808299545882940 != ((max(6, 50074))))))));
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 24;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                var_26 = ((max(3, 35510)));
                                var_27 ^= 7;
                                var_28 *= 14;
                            }
                        }
                    }
                    var_29 = (min((((9 && 2045) > 133)), (((max(14, 21480)) != -1))));
                }
            }
        }
    }
    var_30 = (min((max(-11, 549130693496299344)), 549130693496299338));
    #pragma endscop
}
