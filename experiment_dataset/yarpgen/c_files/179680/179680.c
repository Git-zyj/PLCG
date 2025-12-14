/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] |= var_4;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = ((((-(~18446744073709551615))) >> (((arr_0 [i_1]) & var_4))));
            arr_7 [i_0] = 2603;
        }
        arr_8 [i_0] [i_0] = (((0 | (0 - -32766))));
        arr_9 [i_0] = ((-(((!(arr_5 [i_0]))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {

                for (int i_4 = 4; i_4 < 16;i_4 += 1)
                {
                    var_13 = 4024187891;
                    arr_17 [i_4] [i_2] [i_4] [i_2] = (((arr_11 [i_2]) ? ((-(arr_4 [16] [i_4]))) : 32765));
                    var_14 ^= (arr_14 [16] [16]);
                }
                arr_18 [i_2] = (min(-1, (~-1772475597)));
                arr_19 [i_2] = ((-((max((arr_11 [i_2]), (arr_11 [i_2]))))));
                var_15 = (((((((1772475596 >> (arr_0 [i_2]))) / 22214))) - (max(-72, 18446744073709551615))));
            }
        }
    }
    #pragma endscop
}
