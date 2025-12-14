/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((((min(var_16, var_9)))) != (((523264 - var_16) ? -8991631402381371252 : (((min(51671, 119))))))));
    var_21 = (((min(43799, ((29786 ? -108 : 2154618552194724961))))) ? (((98 >= (29782 - 1)))) : (max(((21732 ? var_3 : 127)), 0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (max(((max((-18695 < 2154618552194724961), -122))), -var_16));
                    var_23 ^= 43799;
                    var_24 = (127 - ((min(1, 21737))));
                    var_25 = (((+-21738) > var_6));
                }
            }
        }
    }
    var_26 |= (((((1 ? (((43799 ? 93 : 35760))) : (max(var_13, var_15))))) == (min((((63 ? var_18 : 14647))), var_11))));
    #pragma endscop
}
