/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!var_7) && 45547));
    var_12 = ((!2519452309) ? ((-var_3 << (var_1 + 6007889374498551003))) : (((var_8 ? (!-7192522955370302940) : var_5))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_13 = (max((arr_2 [i_0]), 0));
        var_14 = (max(var_14, -5003170730602137962));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            {
                var_15 = (max(var_15, ((max(((((arr_4 [i_1] [i_2 - 2]) ? (arr_4 [i_2] [i_2 + 1]) : (arr_6 [i_1] [i_2 - 1] [i_2])))), (((5003170730602137962 - var_3) ^ (arr_4 [i_2] [i_2 - 1]))))))));
                arr_9 [i_1] = (((arr_7 [i_1] [i_1]) ? (((-(max((arr_4 [i_2] [i_1]), (arr_3 [i_1])))))) : (max((var_10 & 22), (((arr_3 [i_1]) ? 6999103011659924974 : 13))))));
                var_16 = var_0;
            }
        }
    }
    #pragma endscop
}
