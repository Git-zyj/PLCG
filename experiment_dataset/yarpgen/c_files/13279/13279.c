/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 58;
    var_11 = 10489486936118731153;
    var_12 = (((~178) ? 158 : (((!(!var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (77 >= 15360);
                    var_14 = (min(var_14, (((((-(arr_6 [8] [i_2]))) << (((arr_5 [1]) - 1220567860)))))));
                }
            }
        }
    }
    #pragma endscop
}
