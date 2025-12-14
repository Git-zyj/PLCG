/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 ? var_9 : 5106));
    var_13 = (max(var_13, (((((((!(~var_6))))) > (((((var_8 << (((-11007 + 11042) - 35))))) ? (-5707355027780929816 >= 20074) : var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((var_9 ? 94077544381952079 : (((((arr_4 [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_0])))))));
                var_14 = (!8638799679038417287);
                arr_6 [i_0] = ((var_0 <= 58456) ? (arr_4 [i_1 + 1] [i_0] [i_1 + 2]) : (arr_4 [i_1 + 1] [i_0] [i_1 + 1]));
            }
        }
    }
    #pragma endscop
}
