/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((min(((18446744073709551592 ? 2199023255551 : var_7), 2659453811843516811)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_2] [i_2] [i_3] = 0;
                            arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3] = ((((18446744073709551592 ? (arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : 18446741874686296052)) < (~var_10)));
                        }
                    }
                }
                arr_12 [11] [i_1] = var_5;
                var_15 -= (arr_9 [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_16 = 16352;
    #pragma endscop
}
