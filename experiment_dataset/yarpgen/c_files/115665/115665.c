/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [8] = (max(((!(arr_2 [i_0] [11] [1]))), (((arr_1 [i_1]) > (((15437 > (arr_1 [i_1]))))))));
                arr_6 [i_0] [i_0] = (1 ? (((arr_4 [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_0] [i_1]))) : 6);
                arr_7 [i_0] = ((((((((!(arr_0 [10])))) >> (((max(1, 2937083322)) - 2937083298))))) || ((min(24308400, ((min(-5887508477978467777, 1))))))));
                var_20 *= ((!((((15 / 128) / (min((arr_2 [i_0] [i_0] [0]), 2240248531)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_2] = (min(((min(((min((arr_8 [i_2]), -14094))), ((~(arr_8 [i_2])))))), (max((arr_13 [i_2] [i_2]), (((arr_9 [i_2] [i_3]) ? 5887508477978467802 : 1))))));
                var_21 = ((((arr_8 [i_2]) ? (arr_13 [i_2] [i_2]) : ((22931 ? 1 : -5887508477978467791)))) < ((min(16, (arr_12 [i_2] [i_3])))));
            }
        }
    }
    var_22 &= ((((((!248) * 0))) ? ((((var_0 ? -3164 : 1)) + (~var_9))) : (var_4 <= var_10)));
    #pragma endscop
}
