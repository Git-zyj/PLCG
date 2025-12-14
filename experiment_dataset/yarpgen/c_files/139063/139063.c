/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((!(((149 ? 97 : -108)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 += ((~(!158)));
                var_15 += 152;
                var_16 -= ((arr_4 [i_0]) >= ((((max(var_0, var_7)) == var_2))));
            }
        }
    }
    #pragma endscop
}
