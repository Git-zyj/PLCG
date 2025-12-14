/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] [i_1] = ((((-(arr_2 [i_1]))) == ((241 ? (0 + 936750718) : ((-(arr_12 [i_4] [i_3] [i_2] [i_0])))))));
                                var_18 = ((~(((((7 ? var_10 : 1))) ? ((max(241, 4852))) : 1))));
                                arr_14 [i_4] [i_0] [i_2] [1] [i_0] [i_0] = (max(7, 0));
                                arr_15 [15] [i_3] [i_2] [i_1] [i_0] = ((((min(-228211287, 0))) && 1));
                            }
                        }
                    }
                }
                var_19 = (((min((arr_6 [i_1]), 1)) <= (248 << 1)));
                arr_16 [i_0] [i_1] [i_1] = (min(-19803, (((arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) ? (max((arr_3 [4]), -1)) : (arr_4 [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
