/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((((+(((arr_5 [i_0]) ? -4217313120585020782 : -2030957404))))) ? ((127 ? 255 : 10603501464663619035)) : -4217313120585020782));
                arr_7 [i_1] [i_1] [i_1] = var_0;
            }
        }
    }
    var_14 = var_0;
    var_15 = ((var_9 != ((((4217313120585020764 > 252) ^ ((0 ? 1443383992 : 234)))))));
    var_16 = ((22 ? 15 : (((((-2030957404 ? -4081 : 11770436721558973115)) > (((4092 ? 32767 : 18014389919547392))))))));
    #pragma endscop
}
