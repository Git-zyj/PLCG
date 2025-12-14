/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((!(((var_14 ? var_3 : var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [8] &= (((((((((arr_3 [2] [i_1]) % (arr_3 [12] [i_1])))) ? ((((!(arr_0 [i_0]))))) : ((2811332838932003390 ? (arr_0 [i_0]) : 419573208))))) ? ((((min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((min((arr_2 [5]), (arr_1 [i_0]))))) : 3875394087)) : (((min((!0), ((!(arr_3 [i_0] [i_1])))))))));
                var_16 = (((((((min(0, (arr_3 [i_0] [i_1])))) ? (max((arr_0 [i_0]), (arr_1 [i_0]))) : ((((203 || (arr_3 [8] [i_1])))))))) ? ((((((((arr_3 [i_1] [i_1]) ? (arr_0 [11]) : (arr_1 [i_0])))) || ((((arr_1 [i_0]) ? (arr_0 [i_0]) : 1))))))) : (((arr_2 [i_1]) ? ((((!(arr_2 [5]))))) : 1267039989))));
                arr_5 [i_0] = (((((((-80 ? 3027927307 : (arr_2 [i_0])))) - -2811332838932003390)) <= 0));
            }
        }
    }
    var_17 = (max(((((var_7 ? var_5 : 1267039989)) & (var_9 | var_12))), var_9));
    #pragma endscop
}
