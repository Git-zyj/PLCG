/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((min((max(((var_8 ? var_7 : var_3)), var_18)), var_18)))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (max(4, 1));
        arr_3 [i_0] = max(57904, ((-((-(arr_1 [i_0 + 2]))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {
                var_21 ^= (arr_8 [i_1 - 1] [i_2] [i_2]);
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_13 [i_1] [i_2] [3] [3] = (((((~(arr_6 [i_1])))) >= (max((((174633137996625950 ? 128 : 128))), (arr_5 [i_1])))));
                            var_22 = ((((max(127, (arr_8 [i_1] [i_3] [i_1])))) ? (((((arr_6 [i_1]) || (!3455901152275150625))))) : (((arr_7 [i_3] [i_2] [i_1]) / -6524))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
