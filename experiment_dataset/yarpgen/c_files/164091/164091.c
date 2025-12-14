/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (max(((max(50, -672124915))), (max((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0] [i_0 - 1])))));
                arr_6 [i_0] [i_1 - 1] [12] = (((max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 + 1] [i_0 - 1])))) ? (arr_1 [22] [3]) : (max(0, (~3622842377))));
            }
        }
    }
    var_20 = (max(var_13, (max(((min(var_8, var_7))), var_2))));
    var_21 = (max(((var_1 >> (((~var_2) - 9095538445927280096)))), var_8));
    #pragma endscop
}
