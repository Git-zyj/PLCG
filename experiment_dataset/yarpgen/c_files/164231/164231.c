/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(var_1, (min(var_2, var_3))))) ? (max((var_4 == var_5), ((var_4 ? var_10 : var_14)))) : ((((((-6398805465574878001 ? var_8 : 9223372036854775807))) ? (max(1, 363325694)) : var_5)))));
    var_17 = (min(var_17, (((var_5 ? (!-var_2) : ((-(min(var_1, 7481558764046669649)))))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_18 = ((((var_7 & (max((arr_1 [i_0]), (-2147483647 - 1)))))) ? (!var_6) : (((((-48 ? var_6 : var_5))) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : var_8)));
        var_19 = ((((((73 ? 247 : 2147483647)) ? var_15 : (((!(arr_0 [i_0]))))))));
        var_20 = (-17 ? 15197806400869996428 : 363325696);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_21 = (arr_8 [i_1] [i_1] [i_1]);
                    var_22 = (-750 / 54);
                    var_23 = (min(var_23, var_2));
                }
            }
        }
        var_24 = (max(var_24, ((((min(((((arr_7 [i_1] [i_1] [i_1] [i_1]) + var_7))), (arr_3 [i_1]))) / (arr_4 [i_1]))))));
        arr_9 [i_1] = (max((((arr_3 [i_1]) ? 84 : ((min(var_11, (arr_7 [i_1] [i_1] [i_1] [i_1])))))), 1));
    }
    #pragma endscop
}
