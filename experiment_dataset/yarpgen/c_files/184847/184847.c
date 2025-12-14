/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 -= ((+(((arr_2 [i_0 + 3] [i_0] [i_0 - 1]) ? 76 : (arr_2 [4] [i_1] [i_0 + 1])))));
                arr_4 [i_1] [i_0] &= (((arr_0 [2]) ? ((~(65535 != var_9))) : (var_17 || -122)));
                var_21 = var_9;
            }
        }
    }
    var_22 = (max((-4391 == var_16), 34));

    for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_23 = var_16;
        var_24 = -4662213727858608703;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_25 = ((151 ? 40679 : (0 <= -4391)));
        var_26 ^= 2147483647;
        var_27 = var_5;

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    {

                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            var_28 ^= ((32114 ? var_1 : (arr_13 [i_3 - 2] [i_4] [i_7 - 1])));
                            var_29 = ((0 ? 4391 : (((31371 && (arr_18 [i_5] [i_5] [0]))))));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_24 [i_5] [i_4] [i_4] [i_8] = (-4391 >= var_17);
                            var_30 = 0;
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_31 += (((13161 != var_19) ? (var_14 <= var_16) : 34883));
                            var_32 = (min(var_32, (arr_9 [i_3])));
                            var_33 = ((50 ? ((2147483647 ? var_10 : var_16)) : var_19));
                        }
                        arr_27 [i_3 - 2] [i_4] [i_4] [i_6] &= (((arr_8 [i_3 + 1]) ? (arr_8 [i_3 - 1]) : (arr_8 [i_3 + 1])));
                        var_34 = ((var_7 ? 0 : 151));
                    }
                }
            }
            arr_28 [i_4] &= var_18;
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_31 [i_3] [i_3] [i_10] = (((arr_6 [i_3 - 2]) == (arr_15 [i_3] [i_10] [i_10] [i_3 + 1])));
            var_35 = (127 << ((((12627648675182809043 << (2147483647 - 2147483586))) - 6917529027641081833)));
            arr_32 [i_10] [i_3] [i_10] = ((-((-(arr_5 [i_3] [i_10])))));
        }

        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            var_36 = (70 == var_2);
            arr_36 [i_3] [i_3] [i_3] = 262237379;
        }
    }
    /* vectorizable */
    for (int i_12 = 2; i_12 < 23;i_12 += 1) /* same iter space */
    {
        var_37 = -671488577;
        var_38 &= ((!(arr_11 [i_12 - 2] [i_12] [i_12])));
        var_39 = 0;
    }
    var_40 = 63331;
    var_41 = 3748667931;
    #pragma endscop
}
