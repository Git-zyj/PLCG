/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_3 ? var_8 : var_6)) * ((((4096 >> var_6) & (6766012476482674010 == 174))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (((var_8 * 184) | (!var_8)));
                var_12 = 11680731597226877591;
                var_13 = (arr_2 [i_0] [i_1 + 1]);
                var_14 = ((min(((32764 ? 6548 : 35184103653376), (arr_1 [i_0] [i_0])))));
                var_15 = 53;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            {
                var_16 = ((((max(6546, 3820))) && 11680731597226877584));
                var_17 -= (min(((5014899741784197172 ? 11680731597226877619 : 3283)), ((((arr_2 [6] [i_3 + 1]) || 24)))));
                var_18 = (arr_6 [i_2 - 2]);
                var_19 = min((min((((arr_7 [i_3]) & -4331)), (arr_5 [i_2 - 1] [6]))), (~254));

                for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    var_20 = ((min(-11680731597226877592, 11680731597226877606)));
                    var_21 -= (max((9538 % -10913), (((-(arr_8 [i_2 - 2]))))));
                    var_22 = ((((min(12582912, 11680731597226877594))) ? (((arr_13 [i_4] [i_3 + 1] [i_2 - 1]) ? 10920718146535621389 : (arr_13 [i_2 + 1] [i_3] [i_4]))) : -7411));
                    var_23 = (arr_13 [i_2 + 1] [10] [i_4]);
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_24 = (arr_7 [i_2]);
                    var_25 = ((var_6 ? ((var_0 + (((min(1, 10904)))))) : ((-32749 ? ((((arr_3 [i_2]) ? 1615246270311883728 : (arr_13 [i_2 + 1] [i_5] [i_5])))) : (min(34013, (arr_5 [i_3] [i_5])))))));
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    var_26 = ((((max((arr_7 [i_2 + 2]), (arr_4 [i_2] [i_3 - 1] [i_6])))) ? -var_6 : (max((arr_4 [i_6] [i_3 - 1] [i_6]), (arr_7 [i_3 + 1])))));
                    var_27 = (max(var_27, (((~(((arr_8 [i_2 - 1]) % ((960 ? (arr_8 [i_2 + 3]) : 6766012476482674037)))))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_28 = (!(arr_9 [i_2 - 1] [i_3 - 1]));
                    var_29 = (min(var_29, -42));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_30 = var_2;
                                var_31 = ((arr_5 [i_2 + 1] [i_8]) ? (arr_11 [i_2 - 1] [i_3 + 1] [i_9 - 4]) : (arr_21 [i_8] [i_3 - 1] [i_7] [i_8] [i_9 + 1]));
                                var_32 = ((-(arr_9 [i_3 - 1] [i_2 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
