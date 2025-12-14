/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [19] = max((arr_1 [i_0] [i_0]), (min(65518, (arr_1 [i_0] [i_0]))));
        var_12 = ((!((min(30692, 97)))));
        var_13 = 113;

        /* vectorizable */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_14 = (max(var_14, (~158)));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_13 [i_3] [i_4] = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                            var_15 = ((((80 ? 1 : var_9)) != (var_10 / 8192)));
                            var_16 = (min(var_16, (arr_1 [i_0] [i_1])));
                        }
                    }
                }
            }
            var_17 |= ((67 - (175 << 1)));
        }
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_18 |= (max((arr_6 [i_5]), (arr_6 [i_5])));
        arr_16 [i_5] [i_5] = (max((-2147483647 - 1), -109));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_19 [12] = 12;
        arr_20 [i_6] = 743473544;
        var_19 *= (!60139);
        arr_21 [i_6] = ((-((60139 ? 60139 : -109))));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_20 ^= (arr_24 [i_7]);
        var_21 = (max(var_21, (((((((112 | 108) ? -109 : (!-2147483637)))) ? (((max(6265266167305547296, 2147483647)))) : (((max(106, 21349)))))))));
    }
    var_22 = ((var_9 ? var_6 : var_8));
    var_23 = (42809 != 255);
    #pragma endscop
}
