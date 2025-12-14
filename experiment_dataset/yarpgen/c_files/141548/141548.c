/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!1);
    var_16 = (min(var_16, (((!(((var_8 ? 1 : (var_5 > var_0)))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (max(var_17, -1));
        var_18 &= (((max((arr_1 [0]), var_1)) << (((((arr_0 [0]) ? 862757482789823610 : (arr_1 [14]))) - 862757482789823585))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_19 = (max(var_19, (((2064920358 > ((((!(((var_10 ? (arr_0 [0]) : -19666))))))))))));
                        arr_9 [i_0] [i_1] [i_2] [i_0] = ((max(1, (~var_9))));
                        var_20 = (min(var_20, (((~(arr_3 [10]))))));
                        var_21 = ((-(max(var_14, (arr_0 [i_0])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
