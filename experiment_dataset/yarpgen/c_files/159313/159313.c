/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max(var_0, ((1366638329 ? var_9 : 1366638329)))) != var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (max(var_10, (arr_3 [i_0] [i_0])));
                arr_5 [i_0] [14] [i_0] = 2928328966;
                var_19 -= (((((arr_3 [i_1] [i_0]) & 14037040615979974067))) ? (((16368 & (var_10 * 6)))) : (min((((-1778283004 ? var_0 : 92))), ((6 ? var_11 : (arr_3 [i_1] [i_1]))))));
                var_20 += (((((((arr_3 [i_1] [i_1]) ? -7 : 0)))) ? 1 : (max(2028860150004000144, ((4818243819493417596 ? var_4 : var_15))))));
            }
        }
    }
    #pragma endscop
}
