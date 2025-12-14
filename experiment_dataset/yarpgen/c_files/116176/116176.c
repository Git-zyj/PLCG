/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_15 = (((((((!(arr_3 [i_0 + 1])))))) && (((65535 ? 835 : 65535)))));
                    arr_6 [i_1 + 1] [i_0] = ((((-var_5 * (var_7 - var_6))) << 7));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_16 += (arr_7 [i_4]);
                arr_12 [i_3 - 1] [i_4] = (arr_11 [i_4]);
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_17 |= (arr_14 [i_3] [i_5 + 2]);
                            arr_18 [14] [i_6] [i_5] [i_6] [i_3] = (max(843, 62));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
