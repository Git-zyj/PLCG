/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((min((~var_8), (((-1 ? var_11 : var_11))))), 8174927672616387723));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            var_17 = (max(var_17, ((((((((~8174927672616387706) ^ (~var_12))) + 9223372036854775807)) << ((((((((arr_10 [i_0] [i_1] [i_2] [13] [i_4]) ? var_12 : 8174927672616387713))) + 1624269325)) - 40)))))));
                            var_18 = (min((min((arr_8 [i_0] [i_3]), (arr_1 [i_3]))), 28));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_19 = var_5;
                            var_20 = (min((((!(((4029042774 ? var_0 : -1053542156)))))), (((arr_16 [i_0 + 2] [i_0 + 2] [i_2] [i_3] [i_5]) ? ((min(63715, (arr_16 [i_5] [i_5] [19] [i_5] [17])))) : (!134217727)))));
                        }
                        var_21 = (((((33554431 / (arr_13 [i_0 - 1] [17] [i_1 - 1] [i_1] [1] [i_1] [i_3 - 3])))) ? 15 : (min(4, (arr_14 [i_0 + 1] [i_0 + 2] [17] [i_1 + 2] [i_3] [i_3 + 4])))));
                    }
                    var_22 = (min(var_22, ((((max(-51, 17)))))));
                }
            }
        }
    }
    #pragma endscop
}
