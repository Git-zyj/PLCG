/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((((((max((-121 || 1674394688), (86 < 1483210484))))) | (max(((min(-123, -122))), ((1483210484 ? 18446744073709551615 : -1483210476)))))))));
                arr_4 [i_0] [i_1] [i_0] = ((-13600683728516884219 ? (6049721576676908963 || -118) : ((-123 ? (!13600683728516884223) : (-117 ^ -85)))));
            }
        }
    }
    var_15 = (((max((-118 - 17), (-1483210489 + 3988647653)))) ? var_6 : var_13);
    #pragma endscop
}
