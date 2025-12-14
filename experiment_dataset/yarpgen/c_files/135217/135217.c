/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_16 = ((var_1 + ((-(arr_0 [i_0 + 1])))));
        arr_2 [i_0] = ((-(arr_1 [i_0 + 1])));
    }

    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_17 = 2341470160;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_18 = ((+(((arr_9 [i_1 - 1] [i_1 + 4] [i_1 + 4]) - var_7))));

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_19 *= (max((3285404363431017737 | 65535), (((var_15 / (arr_8 [i_1] [i_2] [i_3] [i_2]))))));
                        var_20 = var_14;
                        var_21 += 32767;
                        var_22 = ((-((1 ? (arr_10 [i_1 + 1]) : (arr_7 [i_1 + 3])))));
                        var_23 = (max(var_23, (~var_3)));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_24 = (min(var_24, (((((((max((arr_16 [i_2] [i_3] [i_2] [i_2]), var_9))) ? (max((arr_5 [i_2]), (arr_10 [7]))) : (max(var_4, var_10)))) ^ ((min((arr_8 [i_3] [i_3] [i_3] [i_3]), ((65528 ? (arr_8 [i_1] [i_1] [i_1] [i_5]) : (arr_12 [1] [i_2] [i_1 + 3])))))))))));

                        for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_1] [i_2] [1] [i_5 - 1] [i_5 - 1] [9] [i_1] = (min(1585467839507255595, 10714743584918971350));
                            var_25 = (arr_10 [i_6 + 3]);
                        }
                        for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_1] [i_2] [i_3] [i_5] [i_7 + 1] = 81;
                            var_26 = (min(var_26, (~17960510373416282962)));
                            var_27 = ((((((arr_17 [i_5 - 1] [i_5 - 1] [i_5 - 1] [0] [i_5 - 1]) ? 65517 : (arr_17 [i_5] [i_5 - 1] [i_5 - 1] [12] [i_5 - 1])))) / (max((arr_10 [i_7 + 1]), var_15))));
                            var_28 += ((~var_11) | (~var_15));
                        }
                        for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_1] [i_1] [i_1 + 4] [i_1] [i_1] = (((-1498076360 | 1478244254) | (arr_23 [i_1] [i_1 + 1] [17] [i_1] [i_1])));
                            var_29 -= (((((4398046511103 | ((12626980752959441774 & (arr_15 [i_2] [i_3] [i_3] [i_3])))))) ? -28217 : ((~(((arr_8 [i_8 + 1] [16] [i_3] [14]) ? var_10 : (arr_16 [i_2] [i_3] [i_5] [i_2])))))));
                            var_30 |= var_9;
                            var_31 = (min(var_31, (arr_4 [10] [i_5 - 1])));
                        }
                        var_32 = var_6;
                        var_33 &= (max((max((arr_3 [i_5 - 1]), (4814646026644805347 / 16115670586449089627))), (((-1767089680 + (((arr_22 [i_1] [i_2] [i_3]) ? (arr_27 [i_3] [i_3]) : 243)))))));
                    }
                }
            }
        }
        var_34 = (min(((~(arr_24 [i_1 + 3] [i_1 + 1] [i_1] [i_1 + 1]))), (((arr_24 [i_1 + 1] [i_1 + 1] [i_1] [i_1]) ? (arr_24 [i_1] [i_1] [i_1] [22]) : (arr_24 [i_1 - 1] [20] [i_1 + 4] [i_1])))));
        var_35 *= 4294967283;
    }
    #pragma endscop
}
