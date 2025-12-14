/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 |= ((!(arr_4 [i_0] [i_0])));
                var_15 = ((~(arr_1 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 = (((((arr_7 [i_2] [i_2 - 2] [i_2]) || ((max(var_0, var_9))))) ? -19990 : (((3 * (((19990 <= (arr_4 [i_0] [i_0])))))))));
                            var_17 = (((((((15 >= 19990) && (((-1 ? 18014398509481728 : -19990))))))) <= (min((min(18014398509481759, (arr_2 [i_0]))), ((15 ? 17557826306048 : (arr_6 [i_0] [i_1] [i_0] [i_3])))))));
                            var_18 = (max(var_18, ((((~17557826306048) >= (((var_12 >= var_7) ? ((32767 ? 19990 : 0)) : (9868 > var_13))))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (17557826306048 <= 18014398509481731);
    var_20 = var_11;
    var_21 = -19990;
    #pragma endscop
}
