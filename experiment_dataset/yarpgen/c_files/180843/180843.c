/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    var_10 = (((((!var_7) ? ((160 ? (arr_2 [i_0] [0]) : 0)) : (((arr_3 [i_0]) ? var_8 : 4294967282)))) >> (((~1727769801) + 1727769825))));
                    var_11 = (((((-((var_1 ? (arr_8 [i_1]) : (arr_5 [i_0] [i_1] [i_2])))))) ? (((~30417) * (arr_1 [i_0 + 2]))) : (+-4270718937)));
                }
                var_12 = ((((~(((arr_7 [1]) ? 18078979592314391040 : 0)))) > (((((((arr_2 [i_0] [i_0]) ? 12 : (arr_5 [i_1] [i_1] [i_0])))) ? ((24248374 ? (arr_7 [i_0]) : var_8)) : var_5)))));
                var_13 = (((((-32 ? 253 : 65511))) ? (arr_6 [i_0]) : ((-(((arr_4 [17]) ? (arr_7 [i_1]) : (arr_1 [i_1])))))));
            }
        }
    }
    var_14 = (min(var_14, var_9));
    var_15 = (((var_9 ^ var_0) ? ((((var_5 < (max(1732531785, var_3)))))) : ((var_3 ? ((var_9 ? var_9 : 3237397259)) : (-127 - 1)))));
    #pragma endscop
}
