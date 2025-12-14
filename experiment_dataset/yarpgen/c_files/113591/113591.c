/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((min(var_1, var_11)), var_2));
    var_13 = max((((var_4 + var_4) ? var_0 : var_5)), 1);
    var_14 = (min(((min(var_2, 43028142))), (min(-var_1, (min(var_10, 9959550853761951005))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = ((var_1 * (((1 >> 1) ? (808111877 * 0) : 0))));
                    arr_6 [i_2] = (min(((max((min((arr_0 [i_0] [i_1]), var_9)), (!3862532856)))), ((15648 ? ((-110 ? (arr_5 [i_0] [i_1] [i_2] [1]) : (arr_2 [i_2]))) : (arr_4 [i_2] [i_1] [0])))));
                    arr_7 [i_0] [i_2] [i_2] = ((((1 ? -557546004 : 808111877)) + ((((((arr_0 [i_0] [i_2]) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_0] [i_0])))) ? (min((arr_5 [1] [4] [i_2] [1]), (arr_1 [i_0]))) : (((8707104909670058004 ? var_4 : var_4)))))));
                    var_16 = 3486855419;
                }
            }
        }
    }
    #pragma endscop
}
