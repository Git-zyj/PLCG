/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_10 = ((~((((min((arr_2 [i_0]), -761784923))) ? 60 : (1099578027 - 3221225472)))));
                    var_11 = ((255 ? 60 : 255));
                    arr_7 [i_2] [i_0] = (+(((arr_5 [i_0 - 1] [i_1] [i_2 + 2] [i_2]) + (arr_5 [i_0] [i_1] [i_0] [i_2 + 1]))));
                }
                var_12 = (((arr_4 [i_0] [i_0] [i_0]) == var_9));
                arr_8 [1] [i_0] = (arr_4 [i_1] [i_0 + 2] [i_0 + 1]);
                var_13 += ((~((((var_5 > (arr_1 [i_0])))))));
            }
        }
    }
    var_14 = (max(var_14, 181));
    var_15 |= ((-var_0 <= ((min(var_5, 250)))));
    #pragma endscop
}
