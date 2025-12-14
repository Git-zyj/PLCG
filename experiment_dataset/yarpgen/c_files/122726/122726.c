/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(var_0, (((var_7 <= var_7) % 1)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((((var_8 != var_10) ? (~2648) : (min((~var_9), 134)))))));
                    var_14 -= (~var_8);
                    var_15 = ((1 ? ((((1 && (arr_0 [7]))))) : ((((!(arr_4 [i_2] [i_2] [i_2 + 1] [i_0]))) ? 131 : var_9))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    arr_14 [i_4] = (((((((var_7 ? 1853577254 : var_0)) < 105))) >= 203));
                    var_16 = (max(var_16, ((((((133 ? (var_5 / 47) : (min(var_6, -8224941884939325946))))) ? (((arr_3 [i_3]) ? (max(48967, var_6)) : ((((-3 != (arr_1 [i_3]))))))) : (((var_8 ? (arr_6 [i_5 - 1] [i_5 - 1] [i_4 + 1] [i_4 - 1]) : var_11))))))));
                }
            }
        }
    }
    #pragma endscop
}
