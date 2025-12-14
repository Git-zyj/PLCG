/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = var_9;
                arr_7 [i_1] [i_0] [i_0 - 1] = (min(((min((arr_3 [i_0] [i_1]), -134217727))), (max(-1025101472642877665, -481440493))));
                var_12 += 3447512322435309782;
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_13 = (((max((arr_1 [i_0 - 2] [i_2 - 3]), (arr_1 [i_0 - 1] [i_2 + 1])))) ? ((((arr_1 [i_0 - 3] [i_2 + 1]) || (arr_1 [i_0 - 2] [i_2 - 1])))) : -1);
                            var_14 = (min(var_14, (arr_8 [i_3])));
                        }
                    }
                }
            }
        }
    }
    var_15 = var_3;
    var_16 = ((var_8 ? (!var_3) : var_4));
    #pragma endscop
}
