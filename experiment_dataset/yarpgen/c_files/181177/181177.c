/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_2 [i_0] [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_16 -= (arr_6 [i_0] [i_0]);
                            arr_11 [i_3] [i_2] = ((4294967295 % ((((min(var_6, var_6))) ? var_14 : (var_13 - 2251415342)))));
                        }
                    }
                }
                var_17 &= (arr_8 [7]);
            }
        }
    }
    var_18 = ((-(((((28231 ? 15694929269656212293 : 2377415148))) ? -1 : var_5))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_19 = (min(var_19, (((-(arr_14 [i_5]))))));
                arr_19 [i_5] [i_5] = 18302628885633695744;
            }
        }
    }
    #pragma endscop
}
