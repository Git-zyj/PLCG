/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_10 = (((!7740982409039718053) - 211));
                    var_11 += (((arr_2 [i_1 - 2]) ? ((((!(arr_3 [i_2]))))) : (arr_1 [i_0 + 2] [i_0 + 3])));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_12 += (((1855231768 != 7793301511477688294) ? ((+((((arr_4 [i_1]) || 65523))))) : (((((65535 >> (arr_3 [2]))) > 242)))));
                    var_13 += (max((((-(arr_2 [i_1 - 1])))), ((((arr_2 [i_1]) && ((8 == (arr_11 [i_0] [i_1]))))))));
                    var_14 = (max(var_14, var_8));

                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_15 = (((max(((max(var_2, var_8))), (~4087829948))) << ((2012003235 ? 0 : 4087829928))));
                        var_16 = (arr_2 [i_1 - 1]);

                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_1 - 1] [i_3] [i_4] [i_5 - 1] = max((1 < 207137348), (((((111 ? 242 : 7))) ? 204 : (((arr_11 [i_0 + 2] [i_0]) >> (((arr_15 [i_3] [i_0] [i_5 - 1]) + 30856)))))));
                            var_17 = (65535 << 1);
                        }
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            arr_22 [i_0] = arr_8 [i_0] [i_6 + 1];
                            arr_23 [i_0] [i_0] = (arr_18 [i_0] [i_4] [6] [i_1] [i_0]);
                        }
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_3] [i_0] [i_7] = ((~(((((var_6 ? (arr_20 [i_0 + 2] [i_0] [i_0] [i_0] [6]) : 65535)) <= (arr_3 [i_0]))))));
                            var_18 = ((((((255 ^ 1077002344) ^ 1))) || 129));
                            var_19 = (max(var_19, var_4));
                        }
                    }
                    arr_27 [i_1] &= 65527;
                }
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    var_20 += ((~(~-1)));
                    var_21 = 21257;
                    var_22 += (max(((((((arr_20 [i_0] [i_1] [i_8] [i_8] [i_8]) | var_0)) | (((var_9 ^ (arr_19 [1] [i_1 - 1] [i_8 + 1] [i_1] [i_8] [1] [i_0]))))))), ((~(max(9223372036854775807, var_2))))));
                }
                var_23 += var_4;
            }
        }
    }
    var_24 ^= (((((((var_1 ? var_9 : 1))) ? var_0 : (max(var_1, var_0)))) / ((max((var_7 && var_3), ((21257 >> (var_0 + 2135559437))))))));
    var_25 = (max((((!(((var_7 ? var_8 : var_8)))))), 21257));
    #pragma endscop
}
