/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_8 ? var_6 : var_1);
    var_18 |= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (((((-597062906 ? 9769469923980223483 : (arr_3 [i_0] [i_1])))) ? -12351 : var_10));
                var_20 = ((((((217 || ((max(6271883991090888774, 115))))))) / (((arr_0 [i_0] [0]) | ((((arr_1 [i_0]) ? 1 : -3336840064763197871)))))));
            }
        }
    }
    var_21 = (max(var_21, 1));
    var_22 = ((((((~1) ? ((min(15663, 1))) : var_1))) ? (((var_8 & var_1) | (~var_15))) : -var_9));
    #pragma endscop
}
