/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_7;
    var_19 += var_0;
    var_20 = (((var_15 == ((min(58563, var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 += (((((((1851126358 + (arr_0 [7])))) || (arr_0 [7]))) ? (arr_1 [i_1 - 1] [i_1]) : ((((-316841988 <= 6711) ? (arr_1 [1] [i_1 - 1]) : ((var_16 ? (arr_3 [i_0] [i_1] [i_1 - 1]) : (arr_3 [i_0] [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_1] [i_1] [i_0] = -1381078170760075156;
                            arr_10 [i_1] [2] [7] [i_3] [i_3] = ((((min(-16777216, (arr_5 [i_1] [1])))) ? ((47481 ? 18079 : (min((arr_1 [i_2] [1]), var_6)))) : ((max((arr_8 [i_1] [i_1 - 1] [2] [i_1]), 47457)))));
                        }
                    }
                }
                arr_11 [i_1] [i_1] = (-588701972939814392 / var_14);
            }
        }
    }
    #pragma endscop
}
