/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((min((var_16 ^ var_0), var_14)), var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] = ((+(min((arr_7 [i_0] [i_1] [i_3 - 1] [i_3 - 1]), (arr_7 [1] [i_1] [i_3 + 2] [6])))));
                            arr_11 [i_1] = (arr_5 [i_3] [i_2] [1] [1]);
                            arr_12 [i_0] [i_1] = (((max((max(1, 18015314696992090417)), (((var_3 / (arr_6 [i_3]))))))) || -495);
                        }
                    }
                }
                var_19 = var_16;
                arr_13 [i_0] [i_1] [i_0] = ((-(max(((((arr_6 [i_0]) < -497))), (((var_7 + 2147483647) >> (var_4 + 690324995)))))));
                arr_14 [i_1] = (min(((min(((~(arr_2 [i_0] [i_1]))), 1))), (max((arr_3 [i_1]), (arr_3 [i_1])))));
            }
        }
    }
    var_20 = (((((min(var_16, (max(var_7, var_4)))) + 2147483647)) >> (var_1 + 3124)));
    #pragma endscop
}
