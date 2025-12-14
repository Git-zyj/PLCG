/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((((((arr_3 [i_1 - 3] [i_2]) + (arr_1 [i_1 - 3] [i_1 - 3]))) + (((((-(arr_4 [5] [i_1] [i_2])))) - ((var_5 ? var_3 : 14933191925206809358)))))))));
                    arr_7 [i_1] = ((!(((((((arr_6 [i_0] [i_1] [i_2] [i_2]) ^ 1))) ? -58 : (((arr_3 [i_0] [i_1]) ? var_5 : var_11)))))));
                    arr_8 [i_1] [i_0] [i_0] = (max((((((min((arr_1 [i_0] [i_1 + 3]), 14933191925206809347))) ? (max(-55317597, (arr_0 [i_1]))) : -124))), ((-(arr_2 [i_1 - 2] [i_1 - 1] [i_1 - 2])))));
                }
            }
        }
    }
    var_18 = (((((((max(var_10, 42265))) & 55317607))) ? ((((!var_14) && (-127 - 1)))) : 1));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            {
                arr_13 [20] |= (((!(arr_6 [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_4 + 1]))));
                arr_14 [i_3] [i_4] [i_4] = ((((min(-4161536, var_0))) != (((max(5004812941952915807, (arr_10 [i_3]))) / (((var_2 ? (arr_0 [i_4]) : 15)))))));
            }
        }
    }
    #pragma endscop
}
