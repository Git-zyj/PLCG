/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((!(!var_2)))), (max((max(var_2, var_8)), (((2312647539 ? 57089 : -66)))))));
    var_14 = (((((((max(var_4, 16761))) ? ((var_12 ? var_3 : var_8)) : (((var_6 ? 16383 : var_12)))))) ? (min((((var_3 ? var_8 : var_12))), ((var_10 ? var_4 : var_10)))) : (max(((max(0, var_1))), (min(var_7, 1619792186))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [2] [i_1] [i_2] |= (max((((((min(1, (arr_2 [i_0 + 1])))) ? ((27 ? -22283 : var_4)) : ((~(arr_5 [i_0])))))), ((+(max((arr_4 [i_0]), var_4))))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((176997488 ? (((((max(31, 2312647562))) ? (!2145646933) : 10))) : (max(18446744073709551615, 183644551))));
                }
            }
        }
    }
    var_15 = (max(((((max(var_6, 218))) ? (((255 ? 2097151 : 1))) : ((var_0 ? 1982319738 : var_9)))), (((((min(-1, 50284))) ? var_9 : ((7394262301954757597 ? 1 : -1610342086)))))));
    #pragma endscop
}
