/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -2669592821325692511;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((63 > 255) | (((((min(9223372036854775807, (arr_1 [i_0])))) || 7))));
        arr_3 [i_0] = 148;
        var_21 *= 46548;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((65524 || ((!((((arr_0 [i_0] [i_0]) ? (arr_7 [i_0] [i_1] [i_2]) : -2028941578842846596)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((482263674337763775 % (((-((((arr_1 [i_1]) && (arr_9 [i_3] [i_0] [i_2] [i_3]))))))))))));
                                arr_15 [i_0] [i_1] [i_2] = (((max((((~(arr_12 [i_0] [i_0])))), (((arr_8 [i_0] [i_1] [7]) & 8505346931847332956)))) > ((max((arr_0 [i_0] [i_4]), (((arr_12 [i_4] [i_4]) * (arr_13 [i_0] [i_0]))))))));
                                var_23 |= (482263674337763775 > 108);
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_0] [i_1] = ((18 / (max((arr_8 [i_0] [i_0] [i_0]), -8685089960169935716))));
                }
            }
        }
        var_24 ^= -1;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_25 = (((max(77581244, ((8822402754529858362 ? 18 : (arr_21 [i_6]))))) > ((1302510236 | (arr_21 [i_6])))));
                        var_26 = ((-((((max(var_5, 18446744073709551615))) ? (510 / 1) : (arr_18 [i_6 - 1] [i_7 - 3])))));
                    }
                }
            }
        }
        var_27 ^= (arr_25 [i_5] [i_5] [i_5] [3] [i_5]);
    }
    #pragma endscop
}
