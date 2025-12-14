/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [1] = ((((0 ? 6089190835334189906 : 6089190835334189906))));
                                var_16 += (((((2159332216743945607 ? 51 : 12357553238375361709))) ? 1 : (((12357553238375361709 ? 4824636000603576424 : 1)))));
                                arr_15 [1] [i_1] [23] [i_1] &= ((50613 ? 65533 : 205));
                            }
                        }
                    }
                    var_17 ^= 16777152;
                }
            }
        }
    }
    var_18 = (((12357553238375361720 ? ((23605 ? 16646144 : 2)) : 16777152)));
    #pragma endscop
}
