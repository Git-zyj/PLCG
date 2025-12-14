/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = 15307;
                var_13 = (((min(var_1, (var_1 || 255))) >= 0));

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_14 = var_8;
                    var_15 = (((((((var_10 ? 24838 : 108)) + -1356740412))) ? -1 : (((17244438988021946633 / 238) ? (max(9947644434782716624, 65535)) : (((var_5 ? var_7 : var_8)))))));
                    var_16 += -599242762;
                    arr_8 [0] [i_1] [i_0 + 1] = ((0 ? ((-(max(33595, (arr_6 [i_1] [i_1]))))) : ((((max(62754, var_10)))))));
                }
            }
        }
    }
    var_17 = (max(var_17, ((((((-17914504501358693481 || (var_4 + var_3)))) / (min(var_2, ((min(var_9, var_7))))))))));
    var_18 += 209;
    #pragma endscop
}
