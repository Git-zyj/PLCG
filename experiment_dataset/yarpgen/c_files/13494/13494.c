/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] = (-21560 <= -19397);

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_2] = (min(((min((arr_0 [i_0] [i_1]), ((max((arr_2 [i_0]), var_6)))))), ((-(arr_9 [i_0] [i_1] [i_2])))));
                    var_12 = (min(0, 0));
                    var_13 *= (arr_7 [i_2] [i_1] [i_0]);
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    var_14 *= (((arr_4 [i_0] [i_1]) * -32751));

                    for (int i_4 = 4; i_4 < 23;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_3 - 1] [i_4] [i_5] [i_4] [i_4] = ((4273959889 ? 32749 : -78));
                            arr_18 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] [i_5] = ((((-32750 && (arr_13 [i_4] [i_1] [i_3] [i_5])))));
                            var_15 = (((arr_11 [i_0] [i_1] [i_5]) ? (((var_10 > (arr_1 [i_1])))) : (arr_14 [i_0] [i_0] [i_0] [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_16 = ((-(arr_11 [i_0] [i_1] [i_3 - 2])));
                            var_17 = (1 * var_10);
                        }
                        for (int i_7 = 3; i_7 < 21;i_7 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_4] [i_7] = var_7;
                            var_18 = (arr_14 [i_0] [i_4] [i_4 - 4] [i_4]);
                        }
                        var_19 = (+-1);
                    }
                    arr_24 [i_0] [i_1] = (((((~(arr_15 [i_0] [i_0] [i_1] [i_3])))) ? (~var_9) : (arr_14 [i_0] [i_1] [i_3] [i_3 - 1])));
                }
                for (int i_8 = 2; i_8 < 23;i_8 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, (arr_25 [i_0] [i_0])));
                    var_21 = (((((arr_8 [i_8 - 1] [i_8] [i_8]) <= var_2)) ? -64 : (min((arr_7 [i_8 - 1] [i_8] [i_8]), var_8))));
                }
                var_22 = 32751;
            }
        }
    }
    var_23 = ((var_1 ? (((1 / (~var_9)))) : ((1791 ? 2879199536 : -4241660054272444411))));
    var_24 = 1;
    var_25 = var_11;
    #pragma endscop
}
