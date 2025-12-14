/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_18 % (min(var_16, var_10)))) == (var_19 < var_4)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = var_17;
        var_22 = ((((var_12 | var_0) <= var_18)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_23 += ((((max(var_0, (var_7 <= var_9)))) == (((var_2 < var_8) / (var_0 || var_13)))));
                    var_24 = (((((max(var_4, var_14)) * (var_13 / var_4))) >> (var_11 + 1394941716)));
                    var_25 = var_0;
                }
            }
        }
        var_26 = (((((((max(var_8, var_14)) + 2147483647)) << (var_18 - 1639))) / var_18));
        var_27 ^= var_8;
        var_28 |= (((((var_19 % var_9) > ((min(var_7, var_1))))) && ((((var_6 + var_6) - var_10)))));
        var_29 = ((min((min(var_13, var_13)), var_0)));
    }
    var_30 &= (((min((max(var_16, var_3)), (max(var_2, var_1)))) % (((var_12 ^ (min(var_8, var_12)))))));
    var_31 ^= (var_10 < var_5);
    #pragma endscop
}
