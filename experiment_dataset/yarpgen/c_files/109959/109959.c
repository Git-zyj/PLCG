/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((((((((36 ? -113 : 49161))) ? (121 < 4466) : 199))) ? (((61070 < 8691) ? 9223372036854775802 : (var_12 == var_14))) : 2048))));
    var_18 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = (max((((max(1025365878, (arr_7 [i_0] [i_0]))) / 4461)), (max((!14333344427836353577), -87712955))));
                                arr_13 [i_0] [i_0] [i_1] [22] [i_2] [i_1] [i_4] = 2048;
                                var_20 += 90024432;
                            }
                        }
                    }
                    arr_14 [i_1] = (((((((max(-9223372036854775802, 221))) >= (max((arr_10 [i_0] [18] [i_0] [i_1]), 9183944755535070479))))) % 8671));
                }
            }
        }
    }
    #pragma endscop
}
