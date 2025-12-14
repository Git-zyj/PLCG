/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((max(((104 >> (var_0 + 1098076507))), (~38)))) && (((arr_2 [i_0]) > (arr_4 [i_1] [i_0] [i_0])))));
                var_13 = (((((arr_0 [i_0] [i_1]) && (arr_0 [i_0] [i_1]))) && -1));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 += (((max(62, (arr_4 [i_0] [i_1] [i_0])))) ? 218 : (((((min(62, -8209817213469109513))) > (min((arr_11 [i_4] [i_3 - 2] [i_1] [i_1]), var_8))))));
                                var_15 |= 1;
                                var_16 *= ((((((arr_13 [i_2 - 1] [i_3 - 2] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4]) & (arr_13 [i_2 + 1] [i_3 - 1] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1])))) ? (~-2065161934) : (((arr_10 [i_3] [i_3]) >> (-62 + 92)))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] [i_0] = arr_3 [i_0] [i_1] [7];
            }
        }
    }
    var_17 = (max(611030270, ((((12 <= -64) >= (max(var_11, var_5)))))));
    #pragma endscop
}
