/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-var_8 ? var_6 : (var_2 % var_7)));
    var_14 |= ((((((((8 ? var_2 : var_3))) ? var_0 : var_10))) || ((max(var_8, (1 * var_12))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {
                        var_15 = (max(var_15, ((!(((+((((arr_5 [i_2] [0]) >= 255))))))))));
                        arr_11 [i_2] [i_2] [16] [i_0] = min((+-8064), ((-(((!(arr_9 [i_3] [i_3 + 2] [i_2 - 1] [10] [10] [i_0])))))));
                    }
                }
            }
        }
        var_16 ^= ((!var_2) > var_6);
        var_17 = (max(var_17, ((((arr_5 [i_0] [i_0]) ? ((min((arr_10 [i_0] [i_0] [13] [i_0]), (arr_10 [i_0] [i_0] [1] [i_0])))) : (((((196 ? 4525097648039737149 : 59))) ? (arr_3 [i_0]) : (arr_9 [i_0] [i_0] [22] [i_0] [i_0] [i_0]))))))));
    }
    #pragma endscop
}
