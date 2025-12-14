/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;
    var_16 &= var_6;
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = ((-((((max(288970225, (arr_0 [6] [6])))) ? var_1 : (arr_0 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_19 *= (max((((1 > ((-(arr_6 [i_1] [i_1])))))), ((~(arr_2 [i_0])))));
                        var_20 = (min(((!(arr_0 [i_0] [i_1 + 1]))), (arr_0 [i_0] [i_1 - 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
