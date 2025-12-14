/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 18446744073709551615;
    var_14 = (((((0 ? var_3 : ((-37306422 ? 1088693097 : -1))))) && ((((((var_11 ? var_9 : -37306422))) ? 911251971 : 912130045)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (max((!4321307013031042654), -1));
                arr_8 [i_0] [i_1] = ((-4321307013031042660 || ((((-1088693098 ? 0 : (arr_1 [1])))))));
                arr_9 [i_1] = ((((((arr_2 [i_1]) ? 1 : (arr_2 [i_0])))) ? (((min((arr_3 [i_0]), 21755)))) : ((((min((arr_0 [i_1]), var_7))) ? (((255 ? 1 : 220))) : (((arr_6 [i_0] [i_0]) + var_10))))));
                arr_10 [i_1] = (arr_0 [i_0]);
            }
        }
    }
    var_15 = var_6;
    var_16 = (min(((min((max(var_1, var_10)), var_10))), ((var_12 ? 74 : var_11))));
    #pragma endscop
}
