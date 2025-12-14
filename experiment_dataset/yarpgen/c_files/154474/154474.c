/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-1 / 3098234483);
    var_15 = (max((((3098234475 <= 2147483645) ? (((max(var_6, var_13)))) : (min(var_9, 7321005513818911565)))), var_10));
    var_16 = (min(var_16, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((max((arr_3 [i_0]), (!1))) <= ((max((min(16, 1)), ((min(var_8, var_11))))))));
                var_17 = (max((arr_4 [i_0]), ((max(((68971836 <= (arr_2 [i_0] [i_0] [i_1]))), (((arr_3 [i_1]) != (arr_3 [i_0]))))))));
            }
        }
    }
    var_18 -= 207;
    #pragma endscop
}
