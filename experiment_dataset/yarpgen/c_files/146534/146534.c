/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_8, ((var_7 ? var_3 : ((1 ? 3891544304 : 1))))));
    var_13 = (!var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = ((4294967295 ? (((3891544304 ? 3891544296 : 1))) : ((1 ? -1786104376232840162 : -10707))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = ((((min(247944136, 0))) ? -214175817 : 403422991));
                                var_15 = (max(var_15, -1969722997114124300));
                                var_16 = ((((max(-3758208236033389037, -1))) ? ((min(2147483647, -1))) : -2203097225));
                                arr_15 [i_0] [10] [1] [1] [1] [i_3] [i_4] = (min(((-9039183008652339154 ? -247759537 : 7740946886277501800)), ((max(9039183008652339140, 3891544288)))));
                                var_17 = (max(var_17, ((((((3891544299 / (max(1, 3758208236033389047))))) && ((min(((1557494917 ? 1073741824 : -7579197286414829297)), -2569600321829753639))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
