/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (min(var_15, (((var_15 == (var_13 << 1))))));
    var_18 = (-3654659910878472773 - var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_19 *= max((min((arr_4 [i_1 + 1] [2] [i_0]), (((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0]))))), (7 || -3654659910878472773));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = (max(-3654659910878472773, 2097151));
                                var_21 = ((+(((((4294967295 ? (arr_3 [i_1 - 2]) : var_8))) ? ((32925 % (arr_5 [i_0] [i_0] [12]))) : (((var_10 ^ (arr_10 [14]))))))));
                                arr_14 [i_1 - 1] [i_1 + 1] = 24576;
                                arr_15 [i_4] [i_1 - 2] [i_4] [i_3] [i_4] [i_4] [i_4] = 32925;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((((1829328571550486782 ? ((-(arr_8 [0]))) : (-3654659910878472773 * 0)))) ? ((var_15 ? 8144102779507316653 : (!var_16))) : 0)))));
                                arr_24 [i_7] [14] [i_7] [i_7] [i_5] = ((((arr_7 [i_0] [i_5] [i_0]) & 24573)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            {
                var_23 = var_4;
                arr_32 [i_9] [11] = ((6 ? (24576 - 65524) : 234));
                var_24 += (~var_10);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_25 = (min(var_25, 24590));
                            arr_37 [0] [2] [i_8] [i_8] = 7;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
