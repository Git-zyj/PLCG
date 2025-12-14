/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_0;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [4] = ((1061637116 ? 3233330180 : 32));
        arr_3 [i_0] [i_0] = (arr_0 [12] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = (arr_4 [i_2]);
                    var_18 = (((1061637116 << (1061637117 - 19443))));
                    arr_10 [i_0] [i_2] = ((1343110648 ? ((((min(var_10, (arr_9 [i_0] [i_1] [i_1] [i_2])))) ? (((var_15 > (arr_4 [i_0])))) : var_0)) : ((+((((arr_7 [13]) <= var_14)))))));
                    var_19 = -15124;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_20 |= (((((min(-1, (arr_9 [i_3] [i_3] [i_3] [i_3])))) ? var_1 : 1343110638)));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_21 = (arr_4 [0]);
                        arr_24 [i_6] [i_5] [i_5] [i_5] [i_5] [i_3] = (((arr_4 [7]) < var_5));
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_7] [i_5] [i_5] [i_4 - 1] [i_3] = (((arr_25 [i_5] [i_5 + 1] [i_5] [i_7]) & (min((arr_11 [i_4 - 1] [i_4 - 1]), var_14))));
                        arr_28 [i_5] [i_5] [i_5] [i_5] = (min((((!(arr_16 [i_7] [3] [3])))), -15385));
                        arr_29 [i_5] [i_5] = (max((arr_22 [3] [i_5] [i_5] [i_7]), (((61 ? var_4 : var_9)))));
                    }

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_35 [i_5] [i_4 - 1] [i_5] [i_8] [i_9] = ((~(arr_14 [i_5 - 1] [i_8] [i_5])));
                            var_22 = (max(var_22, (~var_13)));
                        }
                        var_23 = (max(var_23, ((max(593078970, ((var_4 ? -1343110647 : ((((arr_32 [i_3] [i_4] [i_3] [i_5 + 2] [i_8] [i_8]) ? (arr_12 [i_5]) : (arr_8 [i_5] [i_8])))))))))));
                    }
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        var_24 = (((((-(arr_15 [i_3] [i_3])))) ? (arr_23 [i_3] [1] [1] [i_10]) : (max(((min(6089392124679440713, 57017))), var_10))));
                        var_25 = (((((((((arr_12 [i_3]) ? -15130 : -1))) ? (arr_16 [i_3] [i_3] [i_3]) : 8593792348728496157))) ? (((15122 ? 15141 : 1061637116))) : (min((arr_39 [i_3] [i_3] [i_5] [i_5] [i_3] [i_10]), (min(var_2, -15097))))));
                        var_26 ^= (max(((max(1343110647, (arr_36 [i_5 + 2] [i_4 - 1] [i_5] [i_10 + 1] [i_5] [9])))), (((max((arr_17 [i_10 + 1] [i_4]), (arr_36 [i_3] [i_3] [i_3] [15] [i_3] [i_3]))) / (-6089392124679440713 ^ -15121)))));
                    }
                }
            }
        }
    }
    var_27 ^= var_12;
    var_28 = (!15097);
    var_29 &= var_6;
    #pragma endscop
}
