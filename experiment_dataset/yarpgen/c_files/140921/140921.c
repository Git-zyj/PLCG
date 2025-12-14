/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (arr_6 [i_4])));
                                var_18 = (((((-32767 ? (((max(-32743, -32767)))) : ((66571993088 ? 1 : (arr_1 [i_0] [i_0])))))) ? (max(-4713952922061161392, ((-66571993091 ? 17310969912344029806 : (arr_5 [i_0]))))) : ((min((((arr_4 [i_0] [i_1] [i_0]) ? 68711088128 : 66571993088)), (6773449516849891504 ^ -6773449516849891504))))));
                            }
                        }
                    }
                    arr_14 [i_0] = 3579516870448655565;
                    var_19 = (max(-2725994745715939115, 1572590290));
                }
            }
        }
    }
    var_20 |= var_0;
    var_21 |= (((1135774161365521807 && -18071) ? var_13 : var_14));
    var_22 = (((((var_1 + (((min(var_6, var_12))))))) ? (((14867227203260896048 ? (var_3 <= var_7) : var_1))) : ((((min(-5591195328383471911, var_4))) ? -68711088129 : (((max(var_9, 15907))))))));
    #pragma endscop
}
