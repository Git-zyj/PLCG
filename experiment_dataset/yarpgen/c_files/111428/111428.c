/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_14 += (21007 / 127);
        var_15 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_13 [i_3] [4] [i_1] = (max(1882584692, ((((((arr_10 [i_1] [i_2]) ? 4308718822379071530 : 21007)) > (arr_3 [i_2]))))));
                    var_16 = (min(var_16, (arr_10 [i_1] [3])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_17 &= ((((186 ? 21007 : 4294967295)) * ((((((!(arr_14 [i_1] [i_4] [i_5]))) && 44528))))));
                    arr_21 [i_4] [i_4] = ((((min(1205038721, (arr_3 [i_1])))) && ((((arr_16 [i_4] [i_4] [i_4]) ? (arr_15 [10]) : ((((arr_12 [i_1] [i_4] [i_5]) ? (arr_7 [i_1] [i_1]) : 16730))))))));
                }
            }
        }
        var_18 = (min(var_18, ((((((arr_8 [i_1]) ? (((arr_6 [i_1]) ? (arr_8 [i_1]) : var_2)) : (((min(40, var_12)))))) > (arr_20 [i_1] [i_1] [i_1] [i_1]))))));
        var_19 = (arr_8 [i_1]);
        var_20 = (arr_16 [i_1] [i_1] [i_1]);
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_21 = (max(var_21, ((min((max((!216172782113783808), (((arr_8 [i_6]) * (arr_16 [i_6] [i_6] [i_6]))))), (((+(((arr_17 [i_6] [i_6] [i_6]) ? (arr_19 [1] [i_6] [i_6]) : (arr_2 [i_6])))))))))));
        arr_25 [i_6] = ((min((min(25426, 65535), ((max(32767, (arr_24 [i_6] [i_6]))))))));

        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                var_22 = (arr_14 [1] [i_7] [i_8]);
                var_23 *= ((!(arr_16 [i_6] [4] [8])));
            }
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                var_24 = (min(var_24, var_8));
                var_25 = min((max((min(11540639042880221081, (arr_6 [i_6]))), (arr_18 [i_9] [i_7]))), (arr_18 [i_9] [i_9]));
            }

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                var_26 = (min(var_26, ((max(((~(arr_30 [i_7 - 1] [i_7 - 1] [i_7 - 1]))), 169959728)))));
                var_27 = 4294967295;
            }
        }
    }
    var_28 |= ((((((~9223372036854775807) && (!var_7))))) * (min(var_13, var_1)));
    #pragma endscop
}
