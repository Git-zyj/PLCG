/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [i_0] [i_2] [i_2] = ((~(!4123156210450041313)));
                    var_19 = (min(var_19, (arr_2 [i_2] [20] [20])));
                    arr_7 [i_2] [i_2] [i_0] = 1;
                    var_20 |= ((!((min((-1998747393 / 1), (65535 / var_15))))));
                }
                arr_8 [i_0] [i_0] = (((!138) < ((min((arr_3 [i_0]), (65534 >= var_5))))));
            }
        }
    }
    #pragma endscop
}
