/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((max(var_15, -8925376865953351689)))));
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, (max(((~(arr_9 [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3 - 1]))), ((-(arr_9 [i_3 + 1] [i_2] [i_2] [i_2])))))));
                            var_20 = (((((((max(2147483647, (arr_6 [8] [i_1])))) || (arr_9 [i_3 + 2] [i_3 + 1] [i_3] [i_3 + 2])))) % var_4));
                        }
                    }
                }
                arr_13 [i_1] = var_0;
                var_21 = ((-(((1859188977 >= (arr_1 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
