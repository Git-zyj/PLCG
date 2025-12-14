/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [20] [i_1 - 1] |= ((((((arr_1 [i_1 + 2] [i_1 + 2]) ? (arr_1 [i_1 + 1] [i_1 + 2]) : 2060588320))) || ((min(1277712444, (arr_1 [i_1 + 1] [i_1 + 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_21 *= (((((min((arr_3 [8] [8]), (arr_7 [i_0] [i_1] [8] [20] [10] [14]))))) >= (((arr_7 [i_2] [i_0 - 1] [i_2 - 1] [24] [i_0] [i_0]) ? (var_6 / var_11) : (arr_5 [20])))));
                            arr_10 [i_0] = (((((940813356999561115 ? 85 : 4294967273))) ? ((min(18516, (arr_5 [i_0])))) : ((52 ? (arr_9 [i_0 + 1] [i_0]) : (arr_9 [i_0 + 1] [i_0])))));
                            var_22 = (arr_5 [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_23 = var_5;
    var_24 = var_13;
    #pragma endscop
}
