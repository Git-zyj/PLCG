/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((min(var_6, ((57 ? 8191 : 18446744073709551615)))), var_0));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((((((var_11 - (arr_6 [i_0] [i_0] [i_2])))) != ((((((~(arr_3 [i_0] [i_0] [i_2])))) ? (arr_1 [i_2]) : (((arr_2 [i_0 - 2]) ? (arr_6 [i_0] [i_1] [i_2]) : (arr_6 [i_0] [i_1] [i_1])))))))))));
                    var_17 = (max(var_17, (((!((max((arr_3 [i_0] [i_0] [i_0 - 3]), (arr_2 [i_0 - 1])))))))));
                }
            }
        }
    }
    var_18 = (min(var_18, (~118)));
    var_19 = ((((var_4 / var_6) / var_8)));
    #pragma endscop
}
