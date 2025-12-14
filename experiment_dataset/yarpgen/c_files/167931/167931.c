/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((((var_15 ? -1571455241 : var_1)) & var_5)), ((1571455240 + (var_12 <= -1020145448339104703)))));
    var_21 = (1571455240 == 85);
    var_22 = (-1571455223 >= var_4);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [2] [1] [2] |= (((((var_14 ? 2867478379 : var_8))) ? (((((((arr_1 [i_0] [i_1]) ? (arr_2 [1]) : var_0))) ? -428161386 : var_15))) : ((var_1 / (arr_0 [i_0 - 1] [i_0 - 1])))));
                arr_7 [i_0] [i_1] [7] = (((min((var_5 - 9632701274938895890), ((min(var_17, var_12))))) == var_1));
            }
        }
    }
    #pragma endscop
}
