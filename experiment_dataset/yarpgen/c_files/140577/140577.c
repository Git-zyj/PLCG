/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_1] [i_2 + 1] &= min(var_4, var_4);
                    var_18 = (max(var_18, ((((min(var_10, (((arr_1 [i_1]) ? var_4 : var_12)))) / ((max(0, (max(var_6, (arr_4 [i_1] [i_1])))))))))));
                }
            }
        }
    }
    var_19 = (max(var_19, ((min((((var_4 && (((var_1 << (((var_5 + 1966040180) - 49)))))))), ((76 ? 0 : (100 <= 53))))))));
    var_20 = (min(var_20, 0));
    #pragma endscop
}
