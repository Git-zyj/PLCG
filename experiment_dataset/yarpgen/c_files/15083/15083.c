/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((1232624007 << (var_0 + 2010576723)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_17 = var_8;
        arr_4 [5] = (~var_10);
        var_18 += (!1);
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        var_19 += ((((arr_7 [i_1 - 2]) * (arr_7 [i_1 - 3]))) + ((((arr_6 [i_1] [i_1 - 1]) * 307523877))));
        arr_8 [i_1] = (((arr_6 [i_1] [i_1]) % ((((1 ? 16097386491581243771 : 0)) + (var_4 * -7)))));
        var_20 += ((2349357582128307858 ? 1 : 733684716));
    }
    var_21 = ((-((var_13 / (var_11 != var_5)))));

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = (max(2147483647, -238));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                {
                    var_22 += (min(2147483647, -119));
                    var_23 = (max(var_23, ((((max(7, -1847722930)) + (((arr_17 [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1]) + (arr_17 [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
