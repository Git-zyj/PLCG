/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (var_11 > var_5);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (min(var_17, 36024398972452864));
                arr_6 [i_0] = ((44856 ? (((((var_2 ? var_8 : var_1))) ? ((36024398972452864 ? 8633182017143738603 : 1687393279)) : 18410719674737098752)) : (var_8 && 32767)));
                var_18 = (((((-(arr_1 [i_0 - 2])))) ? (~32767) : (0 >= -1824347306)));
            }
        }
    }
    var_19 = ((-89 ? 192315865 : (((1687393279 != -1731619131) - -89))));
    var_20 = (((((var_7 ? ((536870880 ? 0 : 1162600168)) : ((1379125847 ? 2048115415 : -1731619131))))) ? var_14 : ((((((-32767 - 1) ? 3272694035 : var_3)) < var_12)))));
    #pragma endscop
}
