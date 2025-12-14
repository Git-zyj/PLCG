/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = ((((min(((1 * (arr_0 [i_1]))), 19544))) / (min(-var_8, ((-10975 ? 46006 : var_8))))));
                arr_4 [i_1] = ((((((arr_0 [i_0]) || (((8332534476350981438 + (arr_3 [i_0] [i_0]))))))) & var_5));
                arr_5 [i_1] = (min((((~((1536 ? 60256 : 5291))))), var_19));
            }
        }
    }
    #pragma endscop
}
