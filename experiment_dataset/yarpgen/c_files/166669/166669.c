/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = 48;
                var_18 = (max(var_18, (~var_1)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = 48;
                            var_20 = 48;
                        }
                    }
                }
                var_21 = (~var_4);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            {
                var_22 += ((!((!(!32768)))));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_23 += 128;
                            arr_20 [5] [i_4] [i_5 + 1] = ((-(~-var_15)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
