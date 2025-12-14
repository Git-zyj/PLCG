/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (var_9 ? (max((825407585146562946 && 50921), var_1)) : (((((var_9 < var_9) != var_4)))));
    var_19 = (((((max(65535, 3862567652706373647))) && var_15)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [14] = (max(((~(min(1320073911, 34)))), ((59524 - ((4 ? 84 : 1320073911))))));
                arr_5 [i_1] [i_0 - 2] = (~((59524 ? 168 : (!-1320073912))));
            }
        }
    }
    var_20 = var_15;
    #pragma endscop
}
