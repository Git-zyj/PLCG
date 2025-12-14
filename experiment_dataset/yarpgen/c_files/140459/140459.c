/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((((-7731158574378875788 ? var_1 : 1))) ? (((-3037 ? 65535 : var_1))) : ((1 ? 7731158574378875788 : var_3))))) || ((((((60892 ? var_6 : 47935))) ? var_1 : (min(3380258026, var_2)))))));
    var_17 = ((((var_14 ? var_1 : var_0)) < ((var_0 ? ((-7731158574378875790 ? 7731158574378875788 : var_6)) : (((18446744073709551615 ? 1 : 156)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [i_2] = (((((((((arr_4 [i_0] [i_0] [i_0]) ? 9457 : (arr_1 [i_0])))) ? (arr_9 [i_0] [i_1] [i_2]) : 1))) ? ((426676688 ? (arr_1 [i_1 + 2]) : ((min((arr_3 [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_1] [i_0])))))) : (arr_4 [i_0] [i_0] [i_0])));
                    arr_11 [i_2] [i_2] = ((((((((2530 ? -154545306 : -3044))) ? (arr_8 [i_2 + 2] [i_2 + 1] [i_2] [i_2 + 2]) : (arr_1 [i_0])))) ? 1 : ((((((arr_3 [i_0] [i_2]) ? 3403777740 : (arr_0 [i_0])))) ? (arr_9 [i_2] [i_2 + 1] [i_2 - 1]) : ((-120 ? -3044 : 154545307))))));
                }
            }
        }
    }
    #pragma endscop
}
