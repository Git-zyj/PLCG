/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 ^= min(3835066336, 63);
                arr_5 [i_0] = var_12;
            }
        }
    }
    var_15 += var_8;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_16 = ((183 - (!192)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_15 [i_2] [i_2] [i_4] [i_5] [5] = var_9;
                            var_17 = (min((arr_6 [i_2]), (arr_6 [i_2])));
                        }
                    }
                }
                var_18 *= ((max(43, -28609)));
            }
        }
    }
    var_19 = (max(var_19, (((!((max((max(192, 184)), 50))))))));
    #pragma endscop
}
