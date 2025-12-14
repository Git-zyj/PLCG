/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((((((var_12 ? 57863 : var_4))) ? ((var_5 ? -1745909894 : var_3)) : ((min(-8, var_8)))))), (max((min(var_16, 65534)), (((var_14 ? var_7 : var_14)))))));
    var_18 = (min((min(((var_9 ? 6902 : var_0)), ((max(-6903, var_3))))), (max(((var_16 ? 241 : var_9)), ((min(1, var_15)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((0 ? 202 : 23733));
                    var_19 = (max(((max(((0 ? 1 : 3322520840)), (((1 ? 225 : 65534)))))), (max((((arr_5 [i_0 - 1] [i_0 - 1] [i_2] [i_2]) ? 65534 : (arr_3 [i_0] [i_1]))), (((var_11 ? var_8 : 65534)))))));
                    var_20 = (max(((((min(65522, 124))) ? (((arr_1 [i_0]) ? -31281 : var_0)) : (((max(6902, var_14)))))), ((min(((((arr_0 [i_0] [i_0 - 1]) ? var_10 : 59))), ((127 ? var_12 : 23733)))))));
                    var_21 = (max((min((min(-22869, 15646672595231856904)), (((1258031149821945771 ? var_14 : (arr_4 [i_0])))))), (((((var_4 ? var_16 : var_10))) ? (max((arr_4 [i_0]), var_16)) : ((max((arr_3 [i_2] [i_1]), 60)))))));
                    arr_8 [i_2] [i_2] &= (((((((var_5 ? var_11 : 0))) ? (((max(var_2, 19432)))) : ((var_4 ? 195 : var_4))))) ? ((((max(76, 6893))) ? (((var_5 ? (arr_4 [i_2]) : (arr_4 [i_2])))) : (max(var_1, (arr_1 [i_2]))))) : (((max(0, 195)))));
                }
            }
        }
    }
    #pragma endscop
}
