/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(((var_2 ? var_8 : 97)), (max(var_11, 97)))), ((((max(-11749, var_12))) ? ((min(var_8, var_0))) : ((max(36168, 0)))))));
    var_15 = (max((min(((var_5 ? var_1 : 18446744073709551595)), (((-11734 ? 0 : var_5))))), ((max((max(var_10, var_2)), (max(var_9, var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max((min(((max(var_0, (arr_0 [i_0] [i_1 - 1])))), ((-2 ? -69 : (arr_4 [i_1] [i_0]))))), ((max(47, 78)))));
                var_16 = (max(((min(((max(65535, 0))), ((0 ? 48617 : 11748))))), (min((((28657 ? 64512 : 30))), ((24 ? 3114386404395417861 : 0))))));
            }
        }
    }
    var_17 ^= (min(((min((((8082635308786472712 ? var_5 : var_2))), (min(-8082635308786472723, var_0))))), (max((max(63720, 5451059194600407250)), (((var_8 ? var_10 : var_2)))))));
    var_18 = (max(var_18, ((max(((min(((min(37, 36156))), (max(17, -33))))), (max((max((-32767 - 1), 1125899906840576)), ((min(-42, 214577134998941875))))))))));
    #pragma endscop
}
