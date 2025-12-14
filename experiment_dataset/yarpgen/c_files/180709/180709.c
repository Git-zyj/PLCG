/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 &= ((-77 ? 1 : -71));
                var_12 = (((((max(-77, (var_6 < -73))))) != var_8));
            }
        }
    }
    var_13 = (max(-118, 15796270849584181838));
    var_14 = (max((((12344624675056594373 / -24451) * (((var_7 >> (var_8 - 8435328685668744898)))))), 3917407663702594385));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_15 = (max(var_15, (((193 ? ((max(((max(-81, var_0))), (arr_9 [i_2] [i_3])))) : (((-1 + 2147483647) >> (-32754 + 32780))))))));
                arr_10 [i_3] [i_3] = (max(9096208572401056504, -18));
                arr_11 [18] [18] |= -8337;
            }
        }
    }
    #pragma endscop
}
