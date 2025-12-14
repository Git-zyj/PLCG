/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -61;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = 748080562;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 &= (((((-61 - (arr_3 [i_3] [i_1] [i_0]))) - 32756)) - -var_2);
                            arr_11 [i_0] [8] [i_1] [i_2] [i_0] = (arr_2 [1]);
                            arr_12 [i_3] [i_2] [i_0] [i_1] [i_0] = ((!((min(0, var_1)))));
                        }
                    }
                }
                arr_13 [i_0] [i_1] = (((((arr_1 [i_0]) <= 290508533)) ? ((min(1, 61))) : ((((~4) > ((((arr_4 [3] [i_0] [i_1]) != var_8))))))));
                arr_14 [i_0] [1] [i_0] = (max(((((min(9754742131320938665, (arr_3 [i_1] [i_0] [i_0 + 1])))) ? 8692001942388612966 : ((max((arr_10 [i_0] [0] [i_0] [i_1]), (arr_1 [i_0])))))), ((((arr_1 [i_0]) ? (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (arr_0 [i_0]))))));
                var_15 ^= -43;
            }
        }
    }
    #pragma endscop
}
