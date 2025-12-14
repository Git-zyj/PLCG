/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = ((((-(arr_2 [i_0])))) ? ((min((((arr_1 [i_0]) ? (arr_5 [i_1] [i_2]) : 2147483647)), ((-(arr_6 [i_1] [i_0])))))) : (min((arr_1 [i_1]), 2147483647)));
                    var_20 = max((((arr_1 [i_0]) ? -2147483639 : (arr_1 [i_1]))), ((min(((min(1, 6483))), 2810219598))));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((-(~2526209407)));
                }
            }
        }
    }
    var_21 = -1;
    #pragma endscop
}
