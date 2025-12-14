/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_14 = (max(var_14, ((((arr_3 [i_1]) ? 4 : (arr_0 [i_2] [i_0]))))));
                    arr_6 [i_0 + 1] [i_1] [3] [i_2] = (((min((arr_5 [i_0 - 1] [i_1 + 2]), var_5))) ? (((((11069 ? 4294967276 : 1))))) : ((1 - (max((arr_1 [i_0]), var_6)))));
                }
                var_15 = ((-((65522 ? ((max((arr_0 [i_0] [i_1]), (arr_5 [0] [i_1])))) : (arr_0 [i_0] [i_0])))));
            }
        }
    }
    var_16 = (min((((((4 ? var_8 : 3))) + 6815151789819442344)), ((min((max(var_9, var_4)), var_2)))));
    #pragma endscop
}
