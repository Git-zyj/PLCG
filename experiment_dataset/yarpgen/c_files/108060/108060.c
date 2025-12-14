/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = max(3216164809791331556, (((arr_2 [i_0] [i_0]) ? var_10 : var_0)));
                var_11 = 3216164809791331557;
            }
        }
    }
    var_12 = (max((max((max(3216164809791331550, 15230579263918220057)), (15230579263918220069 > var_8))), var_0));
    var_13 = var_9;
    var_14 = (((((var_8 / 58700) == ((-9177269433128106796 ? 15230579263918220065 : var_4)))) ? var_3 : var_9));
    #pragma endscop
}
