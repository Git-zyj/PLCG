/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] = 1687738599684568879;
                var_10 = 607490551503962815;
                arr_6 [i_0 - 1] [i_1] &= (((min((18446744073709551615 & -32747), ((min(-32757, -1))))) ^ (max((min(32746, 12938575647336946435)), ((min(4294967295, 32747)))))));
            }
        }
    }
    var_11 = 32749;
    #pragma endscop
}
