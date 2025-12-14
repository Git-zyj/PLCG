/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_5 <= ((max(-var_8, (var_8 == var_10))))));
    var_15 = 1;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (((((((((arr_1 [i_0]) && (arr_1 [i_0])))) & var_12))) % (max(((((arr_2 [i_0]) - (arr_1 [i_0])))), (max(5132873405090402897, (arr_2 [i_0])))))));
        var_16 ^= ((0 ? ((((arr_0 [i_0]) <= var_1))) : (((((arr_1 [i_0]) ? 1 : (arr_1 [i_0])))))));
        var_17 |= (((min(((min(1, (arr_1 [i_0])))), (arr_0 [i_0]))) | (arr_0 [i_0])));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_18 = (min((max(-1, ((min((arr_8 [i_2] [i_3]), (arr_15 [i_1] [i_4])))))), ((-((((arr_2 [i_3]) || var_13)))))));

                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            arr_19 [i_3] [i_3] [i_3] [i_3] [i_5 + 3] [i_2] = ((-(((arr_1 [i_1]) - (arr_16 [i_1] [i_2] [i_1] [i_3] [i_1] [i_5])))));
                            var_19 *= ((((max((min(1, (arr_17 [i_1] [i_1] [i_3] [i_4] [i_5] [i_2]))), (((5132873405090402897 != (arr_6 [i_1] [i_1]))))))) ? ((min((arr_15 [i_1 - 1] [i_1 - 1]), (arr_15 [i_1 - 1] [i_1 + 1])))) : (((min(5132873405090402902, (arr_2 [i_2])))))));
                            var_20 = ((((((max(2077704875, (arr_17 [i_1] [i_2] [i_3] [i_4] [i_5 - 2] [i_3]))) * (arr_9 [i_1 + 1] [i_5 + 2] [i_1 + 1])))) & (min((min(var_13, (arr_11 [i_3] [i_2] [i_3]))), ((max((arr_9 [i_1] [i_2] [i_2]), (arr_12 [i_4] [i_4]))))))));
                        }
                    }
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        var_21 &= (arr_1 [i_3]);
                        var_22 = (max(((((max(var_7, (arr_2 [i_3])))) ? (~var_13) : (((arr_11 [i_3] [i_3] [i_3]) ? (arr_14 [i_2] [i_3] [i_2]) : 65535)))), var_13));
                    }
                    arr_23 [i_3] [i_3] [i_3] = ((((~var_10) % ((((arr_21 [i_1] [i_2] [i_3]) != (arr_7 [i_1])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 13;i_8 += 1)
        {
            {
                arr_28 [i_7] [i_7] = ((((max((min(1, (arr_27 [i_7]))), (((~(arr_25 [i_7]))))))) && ((((min((arr_26 [i_7] [i_8] [i_8 + 1]), (arr_27 [i_8 - 2]))) & (65535 & -11947))))));

                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_23 = (((min((arr_27 [i_7]), (((!(arr_26 [i_7] [i_8] [i_9]))))))) != -1246);
                    var_24 = (~var_2);
                }
                arr_31 [i_7] [i_7] = -872664843;
            }
        }
    }
    #pragma endscop
}
