/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 7;i_2 += 1) /* same iter space */
                {
                    var_19 = (((!var_15) ? var_3 : (arr_0 [i_0])));
                    var_20 = (arr_4 [i_0] [i_1]);
                    arr_6 [i_0] [i_1] [i_2 + 3] = ((!(~var_18)));
                }
                for (int i_3 = 1; i_3 < 7;i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [i_1] [i_1] = (!var_8);
                    arr_11 [i_1] = (((arr_2 [i_0] [i_1] [i_1]) ? ((1978947093 ? 868456634 : 28)) : var_6));
                    arr_12 [i_0] [i_1] [i_3] [i_1] = (((((~(~1978947093)))) ? (((var_9 ? (arr_7 [i_3 + 1] [i_3 + 2] [i_3 + 3]) : (arr_7 [i_3 + 3] [i_3 + 3] [i_3 + 1])))) : (max(((max((arr_3 [i_1]), (arr_3 [i_1])))), -2826962408459409305))));
                }
                var_21 = ((((max(var_3, (min(var_11, (arr_5 [i_0] [i_1] [i_0])))))) ? 0 : (((~((~(arr_5 [i_0] [i_1] [i_0]))))))));
                var_22 = ((!((min(var_3, ((var_3 ? 1382522805 : 1978947093)))))));
            }
        }
    }
    var_23 = var_2;
    var_24 = min(var_3, var_5);
    #pragma endscop
}
