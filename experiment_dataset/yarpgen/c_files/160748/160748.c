/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = (((((~(arr_2 [i_0 + 1] [i_2 - 1])))) ? ((-(arr_3 [i_2 - 1]))) : (arr_4 [i_0])));
                    var_15 = var_0;
                    var_16 = (max(var_16, (((((15041048322099768871 * (((max(var_13, -18307)))))) << (((((arr_2 [i_2] [12]) ? ((max(20, 253))) : (!18387))) - 245)))))));
                }
            }
        }
    }
    var_17 -= ((!((max((min(var_7, var_9)), ((((-30 + 9223372036854775807) << (((var_5 + 30831) - 19))))))))));
    var_18 = ((((~43321) > ((max(11557, 65509))))));
    #pragma endscop
}
