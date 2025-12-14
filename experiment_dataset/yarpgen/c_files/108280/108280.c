/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 ^= ((var_4 % (((var_11 % ((min(var_5, var_9))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (((((((arr_0 [i_1]) ? var_0 : 25)))) >> (((arr_0 [i_1]) >> (((arr_0 [i_0 + 2]) - 56822))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = ((arr_8 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]) ? (((arr_8 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]) << (((arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) - 16654157220697934892)))) : (((arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) ^ (arr_8 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]))));
                            var_16 = (arr_6 [11]);
                            arr_12 [i_1] = (((arr_8 [i_3 - 1] [i_2] [i_0] [i_0]) ? (max(var_8, (arr_1 [i_0 + 2]))) : var_8));
                        }
                    }
                }
                var_17 = 42870;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {

                            for (int i_6 = 1; i_6 < 9;i_6 += 1)
                            {
                                var_18 *= var_11;
                                var_19 *= 0;
                            }
                            var_20 = (((((min((arr_13 [i_0] [i_4 - 1] [i_1] [i_0]), var_11)))) % 1279101611064009559));
                            var_21 = ((min((arr_15 [3] [3] [i_4] [i_4 + 1] [i_4 - 1]), 25)));
                            var_22 = (((13684577578594394596 << ((((34201 % (arr_14 [i_1] [i_4 - 1] [5]))) - 15997)))));
                            var_23 *= ((((((34190 ? (arr_17 [i_0 + 2] [i_0 + 2] [i_0] [i_0]) : (arr_8 [i_4 - 1] [i_1] [i_4 - 1] [i_1]))) % (((var_8 ? var_3 : 1)))))) ? -123 : (min(((15443955370314222447 << (((arr_13 [i_0] [i_1] [i_4] [i_5]) - 27342)))), (arr_15 [i_5] [i_5] [i_4] [i_1] [i_0]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
