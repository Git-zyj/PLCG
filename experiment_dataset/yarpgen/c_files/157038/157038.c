/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_10 = (min(var_10, var_1));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = ((+((var_2 >> (((arr_2 [i_0] [i_0] [i_0]) - 321705883))))));
            arr_5 [i_0] [i_0] [i_1] = (arr_1 [i_0] [0]);

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_10 [4] [i_1] [i_1] [i_1] = ((var_6 <= (var_3 <= 126086688562913704)));
                arr_11 [i_0] [i_1] = var_3;
            }
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                var_11 = var_7;

                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_20 [i_0] [i_4] [i_0] [i_3 + 1] [i_4 + 1] [i_5] = ((126086688562913704 ? 17559 : 31));
                        var_12 = 126086688562913694;
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_13 = ((((var_9 << (var_0 - 7719656036803189689))) % var_8));
                        var_14 = ((4294967295 % (var_5 | 631010434)));
                    }
                    arr_24 [i_4] [i_4] = var_8;
                }
                arr_25 [i_0] [i_0] = (var_9 && var_7);
            }
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_15 += ((4533307578374325859 ? -276932961 : (arr_18 [i_0] [i_0] [i_1] [i_1] [i_7])));
                arr_30 [i_0] [i_0] [i_0] = ((var_1 ? (arr_1 [i_7] [i_0]) : (arr_1 [i_1] [i_7])));
                var_16 = (max(var_16, (((29987 ? 128 : 126086688562913672)))));
            }
        }
    }
    for (int i_8 = 1; i_8 < 24;i_8 += 1)
    {
        arr_35 [i_8] = var_6;
        var_17 = 662587553;
        var_18 ^= var_4;
        var_19 -= (arr_31 [i_8 + 1] [i_8 + 1]);
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_20 *= var_3;
        arr_39 [i_9] = (arr_37 [i_9]);
        arr_40 [i_9] = 4795;
    }
    var_21 = var_5;
    var_22 |= 29424;
    var_23 = (max(((var_7 ? (((4810 ? 127 : 128))) : -var_1)), var_2));
    var_24 = var_9;
    #pragma endscop
}
