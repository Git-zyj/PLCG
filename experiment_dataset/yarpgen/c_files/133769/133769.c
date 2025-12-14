/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = ((!(((((((arr_4 [i_0] [17]) || (arr_5 [15] [i_1] [i_1])))) & ((((arr_2 [i_0]) >= 4294967282))))))));
                arr_6 [i_0] [i_0] = (((min(-230530662732247375, 14))) || ((max(1792026341, 1336813917))));
                arr_7 [i_1] [i_0 + 1] = max((((arr_3 [i_1]) ? var_5 : ((1792026341 ? 14958198929408302509 : (arr_2 [i_0]))))), ((min(((min(var_2, (arr_2 [i_1])))), ((var_7 ^ (arr_2 [i_0])))))));
                arr_8 [i_1] = (arr_3 [i_0]);
            }
        }
    }
    var_15 = (min(var_15, var_4));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {
                {
                    var_16 = (min(var_16, (!var_0)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_17 += (min(var_7, (~4208841927)));
                                var_18 = (((arr_2 [i_2]) * (((!((max(65534, 1))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((min((~32761), (22 % -9223372036854775804)))) ? ((((~var_1) ? (min(-29159, (-9223372036854775807 - 1))) : var_0))) : var_12));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            {
                arr_28 [i_7] = (max((max((max(12, (-9223372036854775807 - 1))), ((~(-9223372036854775807 - 1))))), ((max((arr_0 [i_8 + 2] [i_8 + 2]), (arr_4 [i_8 + 2] [i_8 + 2]))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((~(~24))))));
                            var_21 = (min((max(3967525890, (arr_0 [i_8 - 2] [i_10 - 3]))), (((~(602663845018436803 != 5516956818832993426))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
