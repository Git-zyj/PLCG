/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 2));
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] = 8;
                                arr_14 [i_2] [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2] = (arr_4 [i_2 + 1]);
                                var_14 = (min(var_14, 18947));
                                var_15 = (max(var_15, (((((arr_7 [i_3 - 3] [i_3] [i_3 + 1] [i_3 - 1]) || ((!(arr_12 [i_0] [i_2] [i_3 - 2] [i_4])))))))));
                            }
                        }
                    }
                    var_16 = (min(var_16, (((((((46610 ? 4294861305860346426 : 0)) % (arr_9 [i_0] [i_1] [i_1] [i_2 - 1] [i_0]))) | (((((max(18949, (arr_6 [i_1])))) ? (arr_3 [i_1] [i_2 + 1]) : (var_0 != var_3)))))))));
                }
            }
        }
    }
    #pragma endscop
}
