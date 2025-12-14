/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 14629;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [8] [8] [i_1] = (max((((~141) ? (max(var_6, 1)) : (arr_2 [i_1 - 1] [i_0 - 1]))), var_9));
                var_13 = var_9;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_3] = ((-(~18291)));
                            arr_11 [7] [7] [i_2] [5] = (max(((((arr_2 [i_1 - 1] [i_0 - 1]) > (arr_2 [i_1 - 1] [i_0 - 1])))), (~var_2)));
                        }
                    }
                }
                arr_12 [i_0] = (227 == var_9);
                var_14 = (((max(var_8, ((47253 ? 68 : 1539922600)))) + ((55249 ? 71 : 47251))));
            }
        }
    }
    #pragma endscop
}
