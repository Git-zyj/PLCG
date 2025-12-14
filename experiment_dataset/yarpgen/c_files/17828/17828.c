/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((93 ? (-123 + -96) : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(((arr_9 [i_1 - 2] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (arr_4 [i_1 + 1] [i_2 + 1] [i_1 + 1] [i_2 + 1]) : -88))));
                            var_13 *= (((((76 >= var_0) && (arr_2 [i_0] [i_0]))) ? (((11555 ? -92 : 192))) : ((63 ? -72 : var_3))));
                            var_14 = ((~(min(((var_0 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : var_9)), (((var_3 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : 53990)))))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_0] = (max((((var_10 && (arr_4 [i_0] [i_0] [i_0] [i_1 - 1])))), var_8));
            }
        }
    }
    #pragma endscop
}
