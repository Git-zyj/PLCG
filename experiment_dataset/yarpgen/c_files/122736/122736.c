/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((((arr_3 [i_0] [i_0] [i_1]) ? (!var_13) : (arr_5 [8] [3])))) > ((~((var_7 ? 3064091562922379757 : (arr_3 [i_0] [i_0] [8])))))));
                var_18 = (3064091562922379757 && -3064091562922379757);
            }
        }
    }
    var_19 |= -var_4;
    #pragma endscop
}
