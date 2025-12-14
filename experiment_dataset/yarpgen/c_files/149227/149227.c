/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 |= (min((((((-1847594137089316862 ? (arr_3 [i_1]) : 14847428753124511768)) == ((max((arr_5 [i_0 - 2]), (arr_7 [i_0] [16] [i_0]))))))), (arr_0 [i_0 - 2])));
                    var_12 ^= (min(((((arr_6 [i_0] [i_0 - 1] [10] [i_2 + 4]) >= (arr_7 [i_0] [i_0 - 1] [i_0 - 1])))), (max((arr_3 [i_0]), (arr_6 [i_0] [i_0 - 1] [i_2] [i_2 + 4])))));
                    var_13 = ((!(((min(-479921155974716233, 11814543653146833799))))));
                    var_14 = (((((arr_4 [i_0 - 1] [i_2 - 2]) | (arr_4 [i_0 - 1] [i_2 - 1]))) > 63));
                    var_15 = (((((arr_2 [i_2 + 1]) > (arr_7 [i_2 - 1] [i_1] [i_0 - 1]))) ? (max((arr_4 [i_2 - 3] [21]), (arr_3 [i_2 + 1]))) : (max((arr_7 [i_2 - 1] [i_1] [i_0 - 2]), (arr_4 [i_2 + 2] [i_1])))));
                }
            }
        }
    }
    var_16 = var_8;
    #pragma endscop
}
