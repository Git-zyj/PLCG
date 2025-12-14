/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_2] [i_3] = 32767;
                        var_11 = -9577;
                        var_12 = (((((((1250874082 ? -1 : 1))) + 2147483647)) << (((-650887750 < 511) - 1))));
                        arr_11 [i_3] [i_2] [i_0] [i_1] [i_0] = (((((arr_4 [i_0 - 1]) ? (arr_4 [i_0 + 1]) : var_9)) <= ((~(arr_4 [i_0 + 1])))));
                        var_13 = (min(var_13, (((((max((((arr_5 [i_3]) | 4611686018427387903)), (!255)))) ? (min((arr_3 [i_1] [i_2]), (var_4 ^ -97))) : var_9)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_4] = (-(arr_14 [i_0] [i_1] [i_2] [i_4]));
                        var_14 = (arr_14 [i_0] [i_1] [i_0] [i_0]);
                        var_15 = 16383;
                        arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (1073741823 && 0);
                    }
                    var_16 = ((((((485358252 * (arr_9 [i_0] [i_2])))) && 65535)));
                    var_17 = ((~(arr_1 [i_2])));
                    arr_17 [i_0] [i_1] [i_1] [i_2] = 3951282024677946553;
                }
            }
        }
    }
    var_18 = ((var_6 ? var_6 : ((((var_9 - var_1) - (var_2 + var_9))))));
    var_19 = (+(((var_6 != var_6) ? var_5 : ((var_6 ? 4052 : 10837)))));
    #pragma endscop
}
