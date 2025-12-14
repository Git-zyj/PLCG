/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = (min((((arr_4 [i_0 - 2] [i_1] [i_1]) ? 114 : (min(17864736435945625585, 1)))), (((var_3 && (arr_0 [i_0]))))));
                var_13 = (!4294967295);
                var_14 += ((((min((arr_2 [16]), (arr_2 [16])))) * (arr_2 [18])));
                arr_5 [i_0] [i_1] [i_1] = (((!2199023255551) - ((((((arr_3 [i_0]) << 1)))))));
            }
        }
    }
    var_15 = (((((255 ? -650336471 : ((max(var_9, var_7)))))) ? ((((1 ? -1783164811 : 41108)))) : var_11));

    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_16 = (((arr_13 [i_2]) / ((4294967288 ? 1015143114 : -1783164811))));
                        var_17 = (min(var_17, ((min((var_9 <= var_3), (((((582007637763926041 ? (arr_7 [i_5]) : 33760))) || 2817670782)))))));
                        var_18 ^= ((!((min((arr_18 [i_2 + 1]), ((789921593 * (arr_15 [i_2]))))))));
                        arr_19 [i_2 - 1] = (min((((arr_11 [i_3] [i_4] [i_5]) ? (((arr_14 [i_2] [i_2] [i_2] [i_5]) / 24)) : (arr_8 [i_3] [i_5]))), var_2));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_19 = (max(var_19, -1783164806));
                        var_20 = (max((arr_14 [i_2] [i_6] [i_7] [i_8]), (arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_21 = (arr_14 [i_2 - 1] [5] [i_2] [i_2 - 2]);
                    var_22 = ((7 ? (((arr_1 [i_2 - 2]) ? (((arr_26 [i_2]) ? (arr_10 [i_2] [i_2 - 1]) : 4294967288)) : var_3)) : (((max(2817670782, 22)) - (arr_18 [i_9 - 1])))));
                    var_23 = (9223372036854775797 || 2817670803);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    {

                        for (int i_14 = 1; i_14 < 12;i_14 += 1)
                        {
                            var_24 = (max(var_24, ((min(1, ((((arr_1 [i_2 + 1]) && 55428))))))));
                            var_25 = (max(var_25, (((1 ? 28 : 240)))));
                        }

                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            var_26 ^= (((arr_36 [i_2] [i_11] [i_12]) <= (arr_33 [i_2 - 1] [i_2] [i_2 - 1])));
                            var_27 = (max(4294967277, (arr_20 [i_2])));
                            var_28 ^= (((-((-(arr_0 [i_2]))))) * var_10);
                        }
                        var_29 = 0;
                        var_30 = ((((-404078754 || (arr_8 [i_2 - 2] [i_11])))) / (1 <= 1783164816));
                    }
                }
            }
        }
    }
    var_31 = (max(var_2, (max(253, (min(0, var_8))))));
    #pragma endscop
}
