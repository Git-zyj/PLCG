/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 = 96;
                            arr_12 [i_0] [i_1] = (max((((((var_12 != (arr_5 [i_0] [i_2 - 4] [i_0])))) | (((arr_11 [i_0]) ? 7397 : var_13)))), (arr_5 [i_3 - 1] [i_3 - 1] [i_0])));
                        }
                    }
                }
                var_15 = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                var_16 = (min(var_16, ((((arr_11 [i_1]) ? (((58143 && -9093167487401140139) ? ((((arr_7 [i_0] [i_1] [0] [i_0]) >= (arr_6 [i_1])))) : ((((arr_11 [i_1]) || var_7))))) : (((var_11 ? 58140 : (arr_0 [i_0])))))))));
            }
        }
    }
    var_17 ^= ((var_2 == var_1) % -var_5);
    var_18 += ((((max(var_0, 1))) * ((max(var_3, (7397 > var_3))))));
    #pragma endscop
}
