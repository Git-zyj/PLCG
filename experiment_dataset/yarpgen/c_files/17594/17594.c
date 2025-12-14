/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((((max(1206620290, -31086))) ? var_4 : (min(var_0, var_8))))))));
    var_12 = (min(var_12, var_2));
    var_13 |= (((-var_9 % 61412) > ((var_10 ? var_2 : (!var_8)))));
    var_14 |= (!var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (((((((var_4 > (arr_1 [i_2])))))) > 1206620290));
                    var_15 = (max(var_15, ((((((((arr_2 [i_0] [i_0] [i_0]) ? 16 : (arr_5 [i_0])))) ? (min((arr_3 [i_1 + 1]), var_10)) : ((~(arr_3 [i_0])))))))));
                }
            }
        }
    }
    #pragma endscop
}
