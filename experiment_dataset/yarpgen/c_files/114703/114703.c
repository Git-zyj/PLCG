/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = var_9;
    var_14 = ((+(((178 ^ 178) ? var_11 : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (arr_4 [i_0] [i_1] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, 2613655546));
                            var_17 = (min(((~(((var_7 + 2147483647) << (((((arr_7 [i_0 - 1] [i_1] [i_2] [i_2]) + 311684879)) - 6)))))), ((((~var_10) <= (((max(86, 64)))))))));
                            var_18 = (min(var_18, (((((!(arr_3 [i_0] [i_1 - 1] [i_0 + 2]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
