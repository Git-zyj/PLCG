/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((-(-127 - 1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = 115;
                    var_18 = (min(var_18, ((((((var_4 / (arr_2 [i_2 - 1])))) ? ((13068 ? var_15 : var_6)) : ((((var_14 ? 154 : (arr_0 [i_2]))) - 130)))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 3; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_14 [i_3] |= (~var_10);
            arr_15 [i_3] [i_3] [2] = (((((119 ? 155 : (arr_0 [6])))) ? var_15 : 115));
            var_19 ^= (arr_2 [i_4 + 2]);
            var_20 = (45 > 111);
        }
        for (int i_5 = 3; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_19 [i_5] [i_5] = (((arr_12 [i_5]) ? var_16 : (arr_6 [i_5 - 1])));
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_21 = ((~(~-2661064435862572681)));
                        var_22 = (((arr_17 [i_6 + 1] [i_5]) ? ((8384427652524263256 << (((arr_11 [i_3]) - 7356672542750665743)))) : (-7711056825764914414 == 1576140514)));
                    }
                }
            }
            arr_25 [i_3] [i_5] [i_5] = (arr_1 [i_3]);
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_29 [i_3] [i_3] [7] = (((((arr_23 [8] [i_3] [8] [1]) % -7811152619569022160)) <= (arr_5 [i_3] [i_3] [i_3])));
            var_23 = (((((arr_28 [i_3]) && 26))) * (~var_4));
            var_24 = (max(var_24, (arr_13 [i_8] [i_8] [i_8])));
        }
        var_25 ^= (((arr_17 [i_3] [4]) ? (~10705117224315300937) : var_1));
        var_26 = (min(var_26, var_2));
    }

    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_27 += (min((((arr_31 [i_9]) ? 99 : ((min((-32767 - 1), -89))))), ((((1 ? 99 : 38713))))));
        var_28 -= (((((((arr_31 [i_9]) >= (arr_31 [1]))))) != (((arr_30 [i_9]) ? var_4 : (-32767 - 1)))));
    }
    #pragma endscop
}
