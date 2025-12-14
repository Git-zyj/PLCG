/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = ((((((9924 ? 21 : 261888)))) >= (max((arr_9 [i_0] [i_1] [i_1] [i_0]), var_11))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = (max((min(var_10, (arr_7 [i_4]))), (arr_0 [i_0])));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] = (~var_13);
                            }
                        }
                    }
                    arr_16 [18] &= (((((var_5 ? (arr_14 [10] [i_1] [i_2]) : (arr_14 [12] [12] [12])))) ? ((((((max(var_16, var_5))) && (((arr_13 [i_0] [12] [i_0]) > (arr_14 [10] [i_1] [i_2]))))))) : ((-(((arr_9 [i_0] [i_0] [i_1] [i_2]) ? (arr_13 [i_0] [4] [i_2]) : (arr_4 [i_2] [i_1] [i_0])))))));
                    var_19 = (min(var_19, var_10));
                }
            }
        }
    }
    var_20 = (((3 ? 1 : 14384160391142451687)));
    #pragma endscop
}
