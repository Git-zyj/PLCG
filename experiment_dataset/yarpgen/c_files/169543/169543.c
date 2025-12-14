/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((var_2 ? 2147483639 : var_2))), ((-2147483627 ? (~2147483639) : var_4))));
    var_11 = var_8;
    var_12 = (((((169 ? -2147483633 : ((609336219837530822 ? -22970 : 0))))) ? 2147483626 : var_0));
    var_13 |= (!7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 -= (!7);
                    var_15 |= 2004048213;
                    var_16 = (max(-2147483639, (((max(2147483627, (arr_6 [i_0] [i_1] [i_1] [i_1]))) / 122))));
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((((arr_7 [i_1] [i_1 - 1] [i_1]) ? (arr_7 [i_1] [i_1 - 1] [19]) : 1)));
                }
            }
        }
    }
    #pragma endscop
}
