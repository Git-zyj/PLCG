/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (arr_3 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_21 = ((-((-11 ? var_7 : 17))));
                            arr_10 [i_0 - 1] [i_1 - 3] [18] [i_0 - 1] [i_0] = (((~28617) ? (((((max(var_3, 9)))) % (arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 - 2] [i_0 + 2]))) : var_16));

                            for (int i_4 = 3; i_4 < 24;i_4 += 1)
                            {
                                var_22 *= ((var_8 ? (arr_4 [2] [i_2 + 2]) : (((~(arr_8 [i_0] [1] [i_1] [i_2] [i_3] [i_4 - 1]))))));
                                arr_13 [i_0 - 2] [i_0] [i_2 - 1] [i_3] [23] = (var_3 - -36911);
                                arr_14 [i_0 + 3] [i_1 - 2] [i_2] [i_3] [i_0] = (((36911 == var_8) ? ((+((((arr_7 [i_0]) == 36911))))) : ((min(-1365, (((!(arr_4 [i_0] [i_3])))))))));
                                var_23 = ((var_12 + -2729945377583528492) ? 0 : 790903495377122626);
                            }
                            for (int i_5 = 0; i_5 < 25;i_5 += 1)
                            {
                                var_24 *= min(((((arr_16 [i_0 + 1] [i_1 + 1] [i_2] [i_3] [i_5] [i_5]) || (arr_16 [i_0 - 1] [i_1] [i_2 - 1] [i_3] [i_5] [i_3])))), var_10);
                                var_25 += (arr_6 [i_0 - 3] [i_1 - 3] [i_5]);
                            }
                            var_26 -= (((((var_16 - (max(36919, (arr_6 [i_0] [i_2 - 1] [14])))))) ? (((~(((arr_6 [i_0 - 3] [i_1] [22]) ? -11 : 36911))))) : -17495088621751910063));
                            arr_18 [24] [i_1 - 2] [i_1] [i_0] [i_3] = ((!(!-var_18)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_27 = (((((((max(28625, 5805425825466102292))) || ((115488696 <= (-127 - 1)))))) ^ (((((-(arr_3 [i_0]))) == (((28617 - (arr_6 [i_0 + 3] [i_1] [i_0])))))))));
                            var_28 += ((-var_4 ? (!110) : (((!(arr_21 [i_0] [i_0 - 3] [i_1 - 1] [i_7 - 2] [i_7 + 1]))))));
                            var_29 = (min((max((arr_6 [i_1 - 1] [i_6] [i_6]), (arr_20 [i_0 + 2] [i_1] [i_6]))), ((max(143, -1)))));
                            var_30 -= var_10;
                            arr_24 [i_0] [i_1] [i_6] [i_7 - 1] = (-14 ^ (arr_8 [i_0] [i_7] [i_0] [i_7] [i_6] [i_0]));
                        }
                    }
                }
                var_31 = ((var_7 ? -6911536354616358514 : (((min((arr_12 [24] [i_0 - 3] [i_0] [i_0] [i_1] [i_1] [i_1 + 1]), (arr_12 [i_0] [i_0 - 3] [i_0] [i_0] [i_0] [i_1 - 2] [i_1 + 1])))))));
                var_32 = (((arr_5 [i_0] [i_1]) - 1));
            }
        }
    }
    var_33 ^= var_12;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {
                var_34 ^= ((~(-7 & var_17)));
                arr_33 [i_8] [i_9] [20] |= (min((!18446744073709551607), (arr_20 [i_8] [i_8] [6])));
                arr_34 [i_8] = var_9;
            }
        }
    }
    var_35 *= 13;
    #pragma endscop
}
