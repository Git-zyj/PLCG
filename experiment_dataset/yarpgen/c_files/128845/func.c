/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128845
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) (unsigned short)45967))))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (((((((/* implicit */int) arr_3 [6U] [14U])) + (((/* implicit */int) (short)-32755)))) - (((/* implicit */int) var_17)))) : (((((/* implicit */int) (unsigned short)43860)) + (((/* implicit */int) (unsigned char)238))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned int) (((~(((/* implicit */int) (short)23511)))) > (((/* implicit */int) var_9))));
    var_22 = ((/* implicit */unsigned short) var_19);
}
