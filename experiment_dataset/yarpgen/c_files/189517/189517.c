/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_6 [1] [2] [i_2] = (((((-(arr_5 [i_0] [i_2 - 1] [i_0] [i_0])))) && (((0 ? 255 : (arr_5 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                    arr_7 [i_2] [i_2 + 1] [i_1] [i_0 - 1] = ((((!((max((arr_2 [i_1] [i_2 - 1]), var_4))))) ? -2089230240 : (((-2089230233 ? -2089230240 : 27911)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                var_13 = (max(((((arr_12 [i_3] [i_3]) > (arr_9 [i_3] [i_4])))), (min(5922, (arr_9 [i_3] [i_4])))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_14 = ((!(!var_2)));
                            arr_18 [i_3] [18] [18] [i_6] = ((!(((-1096661651530050253 ? 19123 : 76)))));
                            arr_19 [i_3] [i_4] [i_5] [i_6] = max((((((var_10 ? (arr_12 [i_3] [i_3]) : 1))) ? (min(var_0, -2089230225)) : var_7)), ((~(arr_9 [i_4] [i_5]))));
                        }
                    }
                }
            }
        }
    }
    var_15 = ((((var_5 && (2089230240 / var_2))) ? (var_4 != var_8) : (max((-19137 & 27), ((max(12879, 127)))))));
    #pragma endscop
}
