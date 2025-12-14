/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 += ((1751611670 ? (max((arr_4 [i_0] [i_1]), 127)) : 127));
                arr_5 [i_0] [i_0] = -1751611652;
            }
        }
    }
    var_12 &= ((((min(var_5, (min(-9223372036854775805, (-9223372036854775807 - 1)))))) || var_1));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_13 = (min((-9223372036854775807 - 1), (min(((-9223372036854775801 ? (-32767 - 1) : -107)), -32759))));
                var_14 = (min(var_14, ((((((0 || 1751611671) * (min(12950009844014663864, 1631885698)))) * (((max((arr_8 [i_2] [i_3] [i_2]), 5795987508984091599)))))))));
                var_15 = (((1000764858 ? ((var_3 ? 9223372036854775807 : 1)) : (min(-9223372036854775785, 0)))));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_16 = min((((-47 ? 32759 : (min(68, 2017451331))))), ((13261157247011075628 ? -61 : ((0 ? 9223372036854775793 : 1467224733)))));
                                var_17 ^= min((((min(2134910148, 0)) | 58205)), ((max(-1751611679, var_3))));
                            }
                        }
                    }
                }
                var_18 = max((max(var_1, (arr_0 [i_3]))), 1802028744);
            }
        }
    }
    var_19 = (min((max(0, (max(var_1, 59)))), var_10));

    for (int i_7 = 3; i_7 < 15;i_7 += 1) /* same iter space */
    {
        var_20 += (min(1873341781, -100));
        var_21 = (max(var_21, (((((-8419458788203279213 ? 1526856236 : 1279900877))) ? ((-1591102487359083738 ? 81 : 2843816390)) : (4144821015 + -1751611671)))));
        var_22 = (max(var_22, ((min(((max((arr_19 [i_7 - 3]), 4294967280))), 11546716689508294367)))));
    }
    for (int i_8 = 3; i_8 < 15;i_8 += 1) /* same iter space */
    {
        var_23 = (min(var_23, 2843816390));
        var_24 *= (max(((((127 % (arr_21 [i_8 - 3]))) % 1598443023)), -7834231161508073016));
    }
    #pragma endscop
}
