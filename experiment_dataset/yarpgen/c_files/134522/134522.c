/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_20 = ((~(((((-10728 ? 4294967295 : (arr_8 [i_0] [i_1] [i_3]))) != (!65535))))));
                        var_21 = (!var_17);
                    }
                    var_22 = (min((((arr_9 [i_0] [i_0] [i_0] [0] [i_0] [i_0]) ? (arr_9 [i_0] [i_1] [i_1] [i_0] [i_2] [i_2]) : (arr_9 [i_2] [i_2] [i_2] [i_2] [i_1] [i_0]))), var_17));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            {
                var_23 += -19;

                /* vectorizable */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_20 [i_5] [i_5] = (((arr_11 [i_4 + 3]) ^ (arr_16 [i_4] [i_4])));
                    var_24 = (min(var_24, (((12847828798185522748 ? (arr_16 [i_4] [i_4]) : (((14351 ? 155 : 51187))))))));
                    var_25 = (arr_3 [i_4 + 1]);
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_23 [i_4] [i_5 - 2] [i_7] [i_5] = 65526;
                    var_26 |= (((arr_11 [i_4 + 1]) && (((-(arr_7 [i_4 + 3] [i_5] [i_7] [23]))))));
                    arr_24 [i_5] [i_5] = (arr_0 [i_4 + 3] [i_4]);
                }
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    var_27 = (max(var_27, (max(((((((-(arr_22 [i_4] [i_8] [9] [i_5 + 1])))) ? (arr_19 [2] [i_5 + 1] [8] [8]) : 51195))), 7))));
                    arr_27 [i_8 + 1] [i_5] [i_5] [i_4] = (((min(((4896 << (111 - 102))), ((min((arr_10 [i_4 + 1] [i_5] [i_8 + 1] [i_8]), (arr_14 [i_5])))))) ^ ((min(3, 65534)))));
                    arr_28 [0] [0] [0] = (((((arr_10 [i_4 + 1] [i_4 + 2] [i_4 + 3] [i_8 + 1]) ? (arr_10 [i_4 + 1] [i_4] [i_4 + 2] [i_8 + 1]) : (arr_13 [i_5 - 2]))) >= ((((arr_10 [i_4] [i_4] [i_4 + 1] [i_8 + 1]) ? (arr_3 [i_4 - 1]) : (arr_10 [i_4 + 1] [15] [i_4 + 2] [i_8 + 1]))))));
                }
            }
        }
    }
    var_28 = ((!((min(-var_19, var_0)))));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 23;i_10 += 1)
        {
            {
                var_29 = (arr_29 [i_9] [i_10]);
                var_30 = 42486;
            }
        }
    }
    #pragma endscop
}
