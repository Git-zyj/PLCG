/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((905938044 ? (max(1921250750, 65532)) : var_10))) ? 3389029251 : (max((~var_3), (max(-1652237934, 1921250762))))));
    var_14 |= ((var_0 ? (((var_12 & var_0) ? (max((-9223372036854775807 - 1), 3964320224)) : var_5)) : ((max(var_4, var_7)))));
    var_15 -= ((var_5 <= (max(((905938043 ? 3389029259 : -84)), (((1 ? -1 : 227)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [16] [18] = (((((-1 ? var_9 : 4509))) ? ((127 ? var_11 : 1081642278109288656)) : (((83 ? var_2 : 13)))));
                var_16 = (min(var_16, ((((var_3 != 1921250763) != ((16383 ? var_9 : 5)))))));
                var_17 = ((-45 ? 3389029248 : 3389029267));
            }
        }
    }
    #pragma endscop
}
