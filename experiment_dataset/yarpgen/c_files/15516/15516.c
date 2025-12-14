/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((~(max(var_13, -1058473488)))))));
    var_15 += ((((max(var_1, (~4294967295)))) ? (((18446744073709551605 ? 0 : var_12))) : var_11));
    var_16 ^= ((var_0 ? var_0 : 30720));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] = (((((var_7 ? ((var_5 ? var_10 : 18446744073709551605)) : (var_3 / -7619501569213528369)))) ? (min((18446744073709551615 - 633805235342372951), (var_7 < var_8))) : (((max(var_9, -633805235342372952))))));
            var_17 = (min(((var_8 ? var_12 : var_1)), ((max(var_12, var_7)))));
            arr_8 [i_1] = var_9;
            var_18 &= (min((((4779372425080549221 | 122) ^ ((var_12 ? 18446744073709551605 : 17322461846559185071)))), (((!((max(var_3, var_13))))))));
            var_19 = var_4;
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                var_20 ^= (126 / 18446744073709551601);
                var_21 = 32762;
            }
            /* vectorizable */
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                arr_15 [i_0] [i_0] [i_0] = ((17918856401465808559 ? -7421522767545067862 : -633805235342372952));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_21 [9] [15] [i_4] [i_5] |= (((var_4 && 6184) ? -5760531568359525570 : var_5));
                            var_22 -= ((288230375077969920 ^ (var_1 / var_10)));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = (((527887672243743070 % 527887672243743072) ? var_1 : var_0));
                            var_23 = ((var_10 ? ((633805235342372959 ? -633805235342372976 : var_1)) : var_8));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_24 = ((((((var_0 ? var_8 : var_0)))) && ((((max(var_1, var_12))) <= (max(169, 868397785))))));
                var_25 = (!var_8);
            }
            arr_25 [i_0] [i_2] = ((var_11 ? ((400890908822833237 ? (((2 ? var_10 : 400890908822833237))) : var_2)) : (((-var_13 ? 828864655 : 1)))));
            var_26 = ((((min(7236894907574871435, var_3))) ? ((var_3 ? 9521341499280811412 : var_4)) : 9521341499280811432));
        }
        var_27 += (((((((max(121, var_1))) ? 1 : 39))) || (((var_6 ? (32761 > var_6) : (!var_6))))));
        arr_26 [i_0] [i_0] = (~var_10);
        var_28 = ((-(~3072)));
    }
    var_29 = 633805235342372960;
    #pragma endscop
}
