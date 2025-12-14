/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_16));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0 - 2] = ((((max(18446744073709551600, 1648957347))) ? (((!(((-15672 ? (arr_4 [i_1]) : (arr_4 [i_0]))))))) : 7854858260332147852));
                var_18 = (max(((10591885813377403763 ? -15672 : 10591885813377403763)), var_2));
            }
        }
    }
    var_19 = ((-32758 ? 32757 : 17776799960475520108));
    #pragma endscop
}
