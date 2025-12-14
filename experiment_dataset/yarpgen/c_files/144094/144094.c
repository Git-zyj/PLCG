/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(-1216960427, var_12);
    var_21 = (max((!-32756), var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_22 = (arr_0 [i_0]);
                arr_7 [i_1] = (((max(((min(1, var_17))), 958695718094688052)) * (((((!1467823001) > ((0 ? (arr_0 [i_1]) : -1467822993))))))));
            }
        }
    }
    var_23 = 1;
    #pragma endscop
}
