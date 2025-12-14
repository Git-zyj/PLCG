/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = 21;
                var_17 = (max(var_17, ((min((~-5882993066166876695), (((-120 <= (arr_3 [i_0] [i_1])))))))));
                var_18 = (min(var_18, (((((min(((-48 ? 0 : (arr_2 [i_1]))), 2147483647))) / (((arr_4 [i_0]) | 21)))))));
            }
        }
    }
    var_19 -= 4294967275;
    var_20 = (min(((min(4294967274, 4294967277))), (((var_0 ? var_7 : 0)))));
    var_21 = ((((min((31 <= -10170), 23))) == var_13));
    var_22 ^= var_8;
    #pragma endscop
}
