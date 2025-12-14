/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_3 - var_4);
    var_13 = ((var_10 ? ((((1 <= ((-680075578 ? -4392438791679724863 : 0)))))) : (((((var_0 ? var_8 : 572019332))) ? var_3 : ((5048194374252450835 ? 17171 : -4470868095248092822))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_14 = ((((arr_1 [i_1] [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 *= (((((-1397834676 ? (arr_8 [i_0] [i_2] [i_3]) : 572019332))) ? (((-1666 ? 2867611816 : 65524))) : (1 >= 1125899906842623)));
                            var_16 -= ((((((860833452 ? (arr_1 [i_0] [i_0]) : (arr_7 [7] [3] [i_1] [4])))) ? (arr_2 [i_3] [i_3]) : (arr_10 [i_3] [i_1 + 2] [i_1]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
