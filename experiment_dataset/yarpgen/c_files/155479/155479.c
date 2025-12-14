/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (max((arr_1 [i_0]), (min((arr_1 [i_0]), 106))));
                    arr_8 [i_0] [i_1] [i_0] = (~9096258013811579651);
                    arr_9 [i_0] [i_1] [i_0] = ((((((((var_2 & (arr_0 [i_0 - 1])))) ? -var_19 : (((134217726 ? -114 : (arr_2 [i_0] [12]))))))) ? (max(((106 << (-4813356978658583606 + 4813356978658583625))), (arr_6 [i_0]))) : ((((arr_6 [i_0 - 1]) > ((-3821214043836845668 ? var_15 : 2784)))))));
                }
            }
        }
    }
    var_21 = ((((-1 > ((var_11 ? 58952 : 1126365915)))) ? 64 : ((max(var_5, var_5)))));
    #pragma endscop
}
