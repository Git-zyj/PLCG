/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = var_0;
    var_17 = (((((var_2 >= var_0) ? var_8 : 7197))) & 1675048172502762791);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_1] [i_1] [i_0] = var_5;
                            arr_11 [i_0] [i_1] [i_1] [i_3] = ((((-(!var_13))) & (((((1 >> (var_8 - 1678214541)))) ? ((201 ? (arr_2 [i_3]) : -1)) : (7935190477204502964 >= -723515485)))));
                            var_18 += (arr_4 [i_0] [i_1]);
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_1] &= ((((arr_1 [i_0 + 1] [i_0 - 1]) ? (arr_1 [i_0 + 1] [i_0 - 1]) : var_12)));
            }
        }
    }
    #pragma endscop
}
