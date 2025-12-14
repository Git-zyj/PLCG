/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = -833575072;
                var_11 = (max(((~((17543394020700009778 ? 17543394020700009778 : (arr_0 [16]))))), (~-833575081)));
                var_12 = ((+((+((12939248475384449175 ? (arr_3 [i_0]) : (arr_2 [i_0])))))));
                var_13 = (max(var_13, ((max((((-var_4 <= (((1376425099 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_1]))))))), -1757451499)))));
                arr_4 [i_0] [i_1] [i_1] = (max((arr_0 [i_1]), (((arr_2 [i_0]) ? -833575081 : (arr_2 [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_2] [i_2] [i_4 + 2] = ((var_3 == (!-1055113063)));
                    arr_14 [i_2 - 1] [i_2] [i_2 - 1] = ((17543394020700009778 << (-76 + 137)));
                }
            }
        }
    }
    #pragma endscop
}
