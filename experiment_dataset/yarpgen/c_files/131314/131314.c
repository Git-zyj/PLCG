/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (min(((max(6708937455953210836, 135))), (arr_2 [i_1] [i_1 + 1])));
                    arr_7 [22] [i_1] [i_2] [20] = (min(1, ((((((!(arr_3 [i_1]))))) / 17023831954361306161))));
                    var_19 = (((arr_0 [i_0]) & (max(var_13, (arr_1 [i_1 + 1] [i_1 + 1])))));
                    var_20 = ((((min(6708937455953210836, 16549))) ? ((min(17305, -4))) : ((-1990611738 ? 17600317004901941230 : 36341))));
                    var_21 = (((((((var_9 ? 1780712388 : 0))) ? ((16707434402815197677 ? 25 : 32766)) : ((-1576711399 / (arr_6 [i_1]))))) > var_3));
                }
            }
        }
    }
    var_22 = (min(351528129, 0));
    var_23 |= -var_17;
    var_24 = 3494572441;
    #pragma endscop
}
