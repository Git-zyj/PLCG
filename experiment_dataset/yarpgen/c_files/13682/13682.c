/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_2);
    var_17 = (max(var_17, (((((-(var_10 * var_0))) - ((-68 % (var_3 + var_8))))))));
    var_18 = ((((var_9 + ((min(var_4, var_0))))) + (max(var_14, var_15))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [18] [i_1] [i_2 - 1] [i_3] = ((~((((104 % -70) || (((151 >> (-10 + 28)))))))));
                        var_19 = ((((max((max((arr_0 [14]), (arr_5 [i_0 + 1] [i_0] [i_0] [i_0]))), (min(135, 1))))) < ((~(arr_7 [i_3] [i_3] [i_2] [1] [13] [i_0 - 1])))));
                        var_20 *= (min((max((max(-1169, (arr_7 [i_3] [i_2] [13] [i_2 + 1] [10] [i_0 - 1]))), 70)), 92));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_21 = (arr_8 [i_0 + 1] [i_1] [i_2 + 2] [i_1]);
                            var_22 = (((arr_6 [i_2] [i_2] [i_2 + 2]) >> ((((arr_7 [i_4] [i_2] [i_2] [i_0 - 1] [i_0 - 1] [i_0 - 1]) >= ((((arr_6 [i_0] [i_1] [i_2]) != (arr_6 [i_1] [i_1] [i_2 - 1])))))))));
                            arr_14 [i_0] [i_1] [i_2] = (((min(0, 53))) > (((((arr_4 [i_0 - 2] [i_1] [i_1] [i_3]) * (arr_2 [i_4]))) << (((!(arr_13 [i_0] [i_1] [i_0 - 1] [i_3] [i_4] [11] [i_2])))))));
                            arr_15 [13] [7] = ((27 | ((-(arr_1 [i_0 - 1] [i_0 - 1])))));
                            var_23 ^= (max(((((((arr_13 [i_0 - 2] [i_0] [i_1] [i_2] [i_1] [i_3] [i_4]) <= (arr_1 [i_1] [i_3])))) >> ((((-(arr_6 [i_0 - 2] [i_0 + 1] [i_0]))) + 240)))), ((+((min((arr_8 [i_0 + 1] [i_1] [i_2] [i_3]), (arr_3 [0] [i_1]))))))));
                        }
                        arr_16 [i_1] [i_2] [i_3] = (min((max((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((arr_6 [i_0 - 2] [i_0 - 1] [i_0]) >> (((arr_13 [i_0] [i_0 - 1] [i_0 + 1] [i_1] [i_2 - 2] [i_0 - 1] [i_3]) + 75)))))), (((((-(arr_1 [i_0 + 1] [1]))) < (((arr_7 [1] [i_3] [i_3] [i_3] [i_3] [8]) % (arr_12 [i_0 - 1] [18] [i_2] [i_3] [i_2 - 1] [15]))))))));
                    }
                    var_24 -= (5 % 21);
                }
            }
        }
    }
    var_25 = ((~((~(~var_9)))));
    #pragma endscop
}
