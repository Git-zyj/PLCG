/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 46419;
    var_14 = ((var_4 ? 127 : 185));
    var_15 = ((((((~((191 ? 185 : 8945)))) + 2147483647)) << ((((((var_9 ? 185 : 32767)))) - 185))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (max((((arr_2 [i_0 + 1] [i_0 + 3] [i_0 + 3]) || ((min(var_10, (arr_1 [i_1])))))), ((((!(arr_2 [i_0] [i_0 + 2] [i_0]))) && (!var_0)))));
                arr_5 [i_1] [i_1] = (min(15, 9));
            }
        }
    }
    #pragma endscop
}
