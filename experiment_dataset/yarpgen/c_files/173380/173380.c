/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((var_6 ? ((~((1 ? (arr_3 [0]) : (arr_1 [i_0]))))) : (((arr_3 [4]) ? (arr_1 [i_0]) : ((((arr_1 [i_1]) ? 0 : (arr_3 [4]))))))))));
                var_16 ^= (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] = arr_4 [i_0];
                            var_17 = (arr_5 [i_1] [i_1]);
                            var_18 = (arr_1 [i_3]);
                            var_19 = (((arr_2 [i_1 - 1] [i_1] [i_1]) ? (arr_2 [i_1 + 2] [i_1] [i_1]) : (arr_2 [i_1 + 2] [i_1] [i_1])));
                        }
                    }
                }
                var_20 &= max(((((40 ^ (arr_6 [8] [i_1] [8] [i_0]))))), (arr_6 [2] [i_1] [2] [2]));
                var_21 &= ((3119977415 ? (~var_1) : (max(1174989882, (arr_7 [i_1] [i_1] [2] [i_1])))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_22 ^= (((arr_12 [i_4]) ? (arr_15 [i_4] [i_4]) : (min((arr_14 [i_4]), (arr_15 [i_4] [i_4])))));
            var_23 = (~(((arr_15 [i_5] [i_4]) ? ((((-127 - 1) & 67076096))) : (max(3119977420, 120)))));
        }
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            arr_19 [i_4] = arr_14 [i_4];

            /* vectorizable */
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                var_24 &= (((-(arr_18 [i_4] [1] [i_4]))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_25 ^= 1;
                            var_26 ^= 2311660875038805968;
                            var_27 = (arr_15 [i_6] [16]);
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                var_28 = (max(var_28, (arr_18 [i_4] [i_4] [i_4])));
                arr_31 [i_10] = (arr_23 [i_10] [i_10] [i_10] [i_10]);
            }
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            var_29 |= ((~(((arr_16 [i_4] [i_4] [i_11]) ? (arr_16 [i_4] [i_4] [i_4]) : (arr_16 [i_11] [i_4] [i_4])))));
            var_30 += ((((max((((arr_25 [4] [i_11] [i_11] [i_4]) ? 0 : (arr_13 [i_4]))), 1))) ? (arr_25 [i_4] [i_4] [i_4] [i_4]) : (-127 - 1)));
        }

        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            var_31 = (((min((arr_29 [i_4] [i_12] [i_4] [i_4]), var_5))) ? (arr_26 [i_4]) : 5292677361912203367);
            var_32 = (arr_30 [i_12] [i_12] [8] [i_12]);
            arr_37 [i_4] [i_4] [i_4] = ((~(min((((3119977427 ? 5292677361912203367 : 42))), (max(5629581482792823028, (arr_24 [i_4] [i_4] [i_4] [i_4] [i_4])))))));
        }
    }
    #pragma endscop
}
