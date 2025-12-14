/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [1] = var_10;
                arr_6 [0] [5] [7] = (min((((((min(-7223668705631814403, (arr_1 [1])))) ? (((!(arr_0 [4] [i_1])))) : (arr_4 [i_0])))), (((arr_2 [1] [i_1]) ? (((arr_1 [i_0]) ? 5 : -858425681150336667)) : 79))));
            }
        }
    }
    var_19 = var_10;
    var_20 ^= var_16;
    var_21 = var_10;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                arr_11 [i_3] = (min((min(4294967290, (arr_4 [9])), ((min(1, (arr_4 [i_2 - 1])))))));
                arr_12 [i_2 - 1] = (-9223372036854775807 - 1);
                var_22 += (max(((var_6 ? (arr_1 [i_2 - 1]) : (min(var_3, -4360245352826453363)))), (arr_2 [i_2] [i_3 - 1])));
            }
        }
    }
    #pragma endscop
}
