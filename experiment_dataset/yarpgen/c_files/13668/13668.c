/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_4, (4922106977400901976 / -1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((((0 || 0) ? ((((arr_2 [i_1] [i_0]) & (arr_2 [i_0] [i_1])))) : (1 | 255))))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_15 = ((((var_0 ? 1023 : (((arr_0 [i_2 + 1]) ? 126 : var_12))))) ? (arr_5 [i_2] [i_2 + 1] [i_2 + 1]) : (((((970483561 ? 1325039747 : (arr_3 [14])))) ? (arr_5 [i_2 - 1] [i_2 + 1] [i_2 - 1]) : ((4280746142823827362 ? var_7 : var_9)))));
                    arr_10 [i_0] [i_2] [i_0] [i_0] = (((-2115062305 >= 61571) || (177 >= -359902968)));
                    arr_11 [i_0] &= ((((((arr_5 [i_0] [i_1] [i_2 + 1]) - (arr_6 [i_1] [i_1] [i_1])))) ? (min(40, ((6428981809012643883 >> (-3986619074381152696 + 3986619074381152739))))) : ((((((53785 ? 753692261 : var_5))) ? (arr_6 [i_2 - 1] [i_2 - 1] [i_1]) : (min(var_6, 0)))))));
                    var_16 = ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : 84))) ? (((arr_7 [i_2] [i_2 - 1]) | (arr_7 [i_2] [i_2 + 1]))) : ((var_4 ? (arr_3 [i_2 - 1]) : var_8))));
                    var_17 = 161;
                }
                arr_12 [i_0] [1] = (!2668998160417426101);
                arr_13 [i_0] [9] = ((0 ? ((8346414749129224388 ? -3361454751465501302 : (15230 < 0))) : -699566164));
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}
