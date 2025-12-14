/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (var_9 << 1);
    var_12 = (max(var_12, var_9));
    var_13 = -26798;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 *= ((~(((~var_3) & var_9))));
        var_15 = (max(var_15, (((-((0 * (arr_2 [i_0]))))))));
        arr_3 [i_0] [1] = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1 - 1] [i_1] = (arr_5 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        var_16 = (max(var_16, (((((10955449689548503824 ? 7491294384161047792 : 3624262084)) % (max((max(2834525891, (arr_7 [i_1 - 1] [16] [i_1]))), (7491294384161047792 | -12408))))))));
                        var_17 ^= ((((((var_2 % var_5) + var_1))) ? var_0 : ((140566483 << (79 - 65)))));
                        var_18 = (((91485812 | 63) >> (((max((var_4 >> 0), 1)) - 24298))));
                    }
                }
            }
        }
        arr_14 [i_1] = (((((((var_10 ? (arr_7 [i_1 + 1] [i_1] [1]) : var_6)) != 1))) != (!var_5)));
        var_19 = (((((var_6 ? (arr_5 [i_1]) : ((max(-32760, -70)))))) ? ((-(arr_13 [5] [5] [i_1] [i_1 - 1]))) : (((!((((arr_8 [i_1] [i_1 + 1] [i_1]) ? var_8 : 4294967295))))))));
    }
    for (int i_5 = 2; i_5 < 7;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_20 = var_0;
                        var_21 = (min(var_21, ((max((((arr_12 [i_5 + 2] [i_5 + 2]) ^ -32767)), (arr_12 [i_5 + 2] [i_5 - 2]))))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
        {
            var_22 = (595486535 ? (arr_23 [i_9 + 1]) : (arr_23 [i_9 + 1]));
            arr_25 [i_5] = (~3068783219);
        }
        for (int i_10 = 0; i_10 < 0;i_10 += 1) /* same iter space */
        {
            arr_29 [i_5] = (((1 - 15267665950688077337) + (arr_22 [i_5] [i_5] [i_10] [i_10] [i_10] [i_10])));
            var_23 |= (((((((max((arr_21 [i_10] [i_10 + 1] [4] [i_10 + 1] [i_10]), var_5))) ? ((var_4 * (arr_19 [i_5 - 1] [i_5] [2]))) : (!var_10)))) == (arr_20 [i_5] [i_10 + 1] [i_10 + 1] [i_5 + 2])));
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                {
                    var_24 = (max(var_24, 1));
                    var_25 = (((max((((1 ? 1 : 11))), ((var_0 >> (((arr_16 [i_5 + 3]) + 119))))))) ? (arr_16 [i_5 - 2]) : (((var_0 >= var_5) ? var_2 : -25701)));
                }
            }
        }
    }
    #pragma endscop
}
