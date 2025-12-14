/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((var_3 - 7555841444056175677) ? var_4 : ((var_0 ? var_0 : var_4)))), var_3));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = max(((((arr_0 [i_0 - 3]) ? var_4 : 4))), (min(32958, 17939465106025950030)));
                arr_4 [11] = (max(((+((((arr_2 [i_1]) != var_10))))), ((((arr_0 [i_0 + 1]) <= (arr_1 [i_0 - 3]))))));
                arr_5 [i_0 - 1] = ((((!((min(var_1, var_1))))) ? var_2 : (24 || var_0)));
                arr_6 [i_1] [i_1] = (((((((17834 ? (arr_2 [i_0]) : (arr_1 [i_0])))) && (((~(arr_3 [i_0])))))) && ((max(0, (arr_0 [i_0 - 1]))))));
                var_13 = (min(var_13, (((((max((~65518), var_6))) ? (((min(28, (!var_10))))) : (((arr_0 [i_0 + 1]) ? (((var_8 ? 2147483647 : 0))) : (arr_3 [i_0 - 4]))))))));
            }
        }
    }
    var_14 = ((~(((min(var_4, 7)) - (var_2 * -29883)))));
    var_15 = ((((max((((var_9 ? var_8 : var_0))), (max(var_1, var_3))))) ? (!var_10) : (((var_9 * -17841) ? ((min(24, 32767))) : 2147483647))));
    var_16 = 1;
    #pragma endscop
}
