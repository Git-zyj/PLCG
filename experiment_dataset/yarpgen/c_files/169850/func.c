/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169850
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
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_0] [i_2]);
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_4);
}
