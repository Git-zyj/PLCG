/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (max(var_1, ((((32767 ? (arr_3 [i_1] [6] [i_1]) : var_7))))));
                arr_6 [i_0] [i_0] [i_0] = ((((min(((14145 ? 14145 : 856)), (arr_4 [i_0] [i_0] [i_0])))) ? ((((min(-14134, (arr_2 [i_1] [i_1] [3])))) ? (arr_0 [i_0] [i_0]) : (max(1, 17901836691689743684)))) : ((((((-14146 ? 1503386390 : (arr_1 [3])))) & ((var_6 << (1592062689632617314 - 1592062689632617313))))))));
                arr_7 [i_0] [i_0] = ((((((arr_3 [i_0] [i_0] [1]) & (arr_4 [7] [i_1] [i_1])))) ? ((((arr_3 [i_1] [i_1] [1]) - (arr_4 [i_1] [i_1] [i_1])))) : (14145 | -5514833731371367634)));
                arr_8 [i_0] [i_1] = ((((max((arr_0 [i_1] [i_0]), (((var_4 && (arr_0 [7] [i_1]))))))) | (((((max(var_3, (arr_2 [i_1] [i_1] [1]))))) & (min(var_7, (arr_3 [i_0] [1] [i_0])))))));
            }
        }
    }
    var_10 = var_5;
    var_11 = (((min(var_3, var_4))) != var_2);
    #pragma endscop
}
