/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_17 ? var_9 : (((((!var_18) <= (var_2 * var_15)))))));
    var_21 = ((!(((~(34705 == var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_22 = (((min((34 > 55627), 5371166285094841867)) >= ((((!(55644 <= var_11)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_23 = (((max((17073992991824302236 | 6510359857165866180), ((3146 ? var_4 : 1)))) | ((min(((1 ? var_16 : (arr_11 [i_0] [i_2]))), (arr_6 [9] [i_1] [i_1 - 2]))))));
                            var_24 ^= (min(((-(arr_4 [i_1] [i_2]))), ((((arr_10 [i_0] [i_1] [i_2] [i_3]) && ((min(1, 30830))))))));
                            arr_12 [i_1] [i_1] [i_1] [i_1 - 2] [i_2] [i_3 - 1] = 4294967295;
                        }
                    }
                }
                var_25 = min(30830, (arr_7 [i_1 - 2] [2]));
            }
        }
    }
    #pragma endscop
}
