/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = -1;
                var_17 = (max(var_17, ((((((((((arr_4 [i_0] [14] [2]) ? var_8 : (arr_1 [i_1] [i_0])))) ? ((((arr_4 [i_0] [i_0] [4]) && -19))) : 8806))) ? var_8 : ((-(((arr_2 [i_0] [i_1]) ? (arr_2 [i_1 - 1] [i_0]) : (arr_2 [i_1] [i_0]))))))))));
                var_18 = (max(var_18, ((max((min(-795922039, var_11)), ((((arr_1 [8] [i_1]) < (((arr_1 [6] [6]) << (((arr_5 [i_0]) - 10496))))))))))));
                var_19 *= var_15;
                var_20 = ((((((arr_1 [i_1 - 1] [i_1 - 1]) + (arr_4 [i_1] [i_1 - 1] [i_1 - 1])))) || ((min((-795922039 || 1680114511), (max(var_2, var_10)))))));
            }
        }
    }
    var_21 += (((var_14 * (5 / 35470))));
    var_22 = 5637907662535622393;
    #pragma endscop
}
