/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = 1;
                        var_16 = ((arr_3 [i_2 - 1] [i_0 - 1]) << (arr_5 [i_0 + 1] [i_1]));
                    }
                }
            }
        }
        var_17 -= (-9108201009776532440 && 39262);
        var_18 = (max(var_18, (arr_9 [8] [i_0] [5] [i_0] [i_0 + 1] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_19 = (max(25, ((((arr_3 [i_5] [i_4]) && 55346)))));
                var_20 = (max(((((max((arr_17 [i_4] [i_5] [i_4]), var_2)) == (-6520536345335159235 & -4493844663565340300)))), (min((arr_14 [i_4]), (arr_12 [i_4] [i_5])))));

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_21 = (max(var_21, ((((((((arr_7 [15] [i_5] [15]) + (arr_7 [i_4] [7] [i_6]))) + 2147483647)) << (((((((max(var_14, var_15))) || var_12))) - 1)))))));
                    var_22 = (((min(-1416804181, 1)) <= ((845346176549891484 ? 37945 : (~-592508426)))));
                    var_23 -= (max((min(592508426, 62370)), 3166));
                }
                arr_20 [i_4] = 15068;
                var_24 = var_13;
            }
        }
    }
    #pragma endscop
}
