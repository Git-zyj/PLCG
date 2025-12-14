/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 |= (min((-2094003777 - 83), (((min(-2094003777, 2094003776)) + 2094003778))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [17] [i_2] [19] [i_2] = ((+(min((arr_2 [i_3 + 3] [i_3 + 3] [i_3]), 2533427929))));
                                var_16 = (min((max(var_0, var_12)), -101));
                                var_17 = (min(var_17, ((min(5581, (((((83 | (arr_0 [i_0] [i_0])))) & (min(var_10, (arr_5 [i_0]))))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_11 [i_0] = ((2533427944 - -109) ? 5581 : (((-55 + 2147483647) << ((((((-(arr_7 [i_0]))) + 56096)) - 31)))));
        var_18 = (min(var_12, 68841683));
    }
    var_19 &= var_2;
    #pragma endscop
}
