/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~(~var_6))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 *= ((((min(var_3, (arr_8 [i_0 + 2] [i_0 - 2] [i_0 + 3] [i_0 + 1])))) == var_6));
                            arr_9 [8] [i_1] [8] [2] = (min((((arr_8 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 3]) ? -29727 : var_9)), (((min(97, -10336))))));
                            var_16 = (min(var_16, (!var_4)));
                            arr_10 [i_1] [i_2] [i_1] [i_1] = ((~(-2147483647 - 1)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_17 &= (min(-39, (min(((min(var_5, var_3))), ((var_0 ? 0 : 0))))));
                            var_18 = ((-((-((((arr_15 [i_0 + 1] [i_0 + 1] [i_1] [i_5]) == 9223372036854775807)))))));
                            var_19 = 1998320651;
                            var_20 = (((((-82 ? -821520717 : 1))) ? (((-(((!(arr_11 [i_0]))))))) : ((((((29750 == (arr_12 [i_0] [i_1] [i_1]))))) | (arr_11 [i_0 - 2])))));
                        }
                    }
                }
                arr_16 [i_0 + 1] [i_1] = (((((~((~(arr_3 [i_1])))))) ? (!-16190) : (min((arr_1 [i_0 - 1]), (arr_11 [i_1])))));
            }
        }
    }
    #pragma endscop
}
