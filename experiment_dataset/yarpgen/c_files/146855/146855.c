/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((!var_7), ((((max(var_11, 3299579718))) ? ((var_1 ? var_4 : 1915895428)) : (-69 == 33554428))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = (((min(((4818683574775483918 & (arr_9 [i_2] [i_1] [i_2] [i_2]))), ((((arr_7 [i_0] [i_1]) ? -84 : 2158578623))))) << (var_4 - 260938321)));
                    arr_11 [i_0] [i_1] [i_2] [i_2] &= (min(((((max(-84, (arr_4 [i_0])))) ? -10 : 54)), (max(((var_11 ? var_6 : var_4)), ((max(255, (arr_7 [i_2] [i_0]))))))));
                    var_18 -= var_4;
                }
            }
        }
    }
    #pragma endscop
}
