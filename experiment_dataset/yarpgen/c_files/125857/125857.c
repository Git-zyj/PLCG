/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((((255 != ((194 ? var_7 : 61))))) + ((249 ? 61 : 52))));
                var_16 = (min(var_16, (((197 ? 192 : 117)))));
                arr_8 [i_0] [i_0] = ((var_3 ? ((~((var_1 << (95 - 93))))) : (max(((var_7 ? 226 : 226)), ((161 << (var_13 - 235)))))));
            }
        }
    }
    var_17 -= ((226 ? 214 : 62));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            {
                arr_14 [16] = (((37 ^ 0) ? (var_9 - var_6) : (((((194 ? var_15 : 226)) != (var_5 % var_5))))));
                var_18 = (((207 + 255) != (190 <= var_12)));
                arr_15 [i_2] = ((-(((((var_13 ? 0 : 160))) ? 79 : ((var_8 ? var_7 : 199))))));
            }
        }
    }
    var_19 &= 160;
    #pragma endscop
}
