/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 15798686897992131720;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (((((max((arr_2 [i_0]), var_9))))) % (min(2648057175717419883, 1)));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_15 = ((!((min(35, (arr_5 [i_0] [i_0]))))));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_16 *= ((5578 != (arr_9 [i_4] [i_3] [i_1])));
                            arr_15 [i_3] [i_0] [i_1] = ((-((~((min(-32762, -112)))))));
                        }
                    }
                }
            }
        }
        var_17 -= ((121 ? ((((max(var_12, (arr_14 [i_0])))))) : (((((2648057175717419883 ? -67 : var_0))) ? (min(var_13, (arr_2 [i_0]))) : var_4))));
    }
    var_18 = (max(var_18, 15798686897992131703));
    var_19 = var_2;
    #pragma endscop
}
