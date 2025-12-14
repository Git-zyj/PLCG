/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] = var_2;
                            arr_11 [21] [i_0] [i_2] [i_0] [i_0] = ((~((((arr_9 [i_2 + 2] [i_1 - 3] [i_2 + 2] [i_1 - 4]) || (((var_13 >> (var_13 - 103)))))))));
                            var_17 = -1192638827639493530;
                        }
                    }
                }
                var_18 = (max(var_18, ((((32256 ^ 1) << ((((min(1023, (arr_5 [24] [i_1] [i_1]))) != (var_10 || 1)))))))));
                arr_12 [i_0] [i_0] = 866973447;
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
