/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 138;
    var_21 = ((((((var_15 ? var_4 : 64566)))) ? (max(var_6, (((var_8 ? 970 : 37188))))) : ((max(var_17, -var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_22 = (max(var_22, (((min((arr_2 [i_0] [i_1]), (arr_0 [i_1])))))));
                var_23 = (min(((max((arr_0 [i_0]), (arr_0 [i_1])))), ((33088 ? 6630224200544305377 : (arr_1 [i_0])))));
                var_24 ^= (((((((arr_3 [7] [i_1]) == 5706309020696414358)))) ? -var_10 : ((((arr_2 [0] [i_1]) < (arr_0 [i_0]))))));
                var_25 = (min(var_25, (((-((-(((arr_3 [i_0] [i_0]) ? (arr_1 [14]) : (arr_0 [2]))))))))));
                var_26 = -25498;
            }
        }
    }
    var_27 = (min(969, 0));
    #pragma endscop
}
