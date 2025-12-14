/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_11 += ((1384282820 || (4134076829 > 1)));
        var_12 = (4294967295 | 3198786);
    }
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            {
                var_14 = (1945386440 ? -19 : 25119);
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_15 = (873074645 && 1384282837);
                            var_16 = (min(var_16, 3));
                            arr_17 [i_1] [i_2] [8] |= 4294967264;
                        }
                    }
                }
                arr_18 [i_2] = (0 ? ((((4294967273 << (1945386467 - 1945386450))) ^ 3411757490)) : 268435200);
            }
        }
    }
    #pragma endscop
}
