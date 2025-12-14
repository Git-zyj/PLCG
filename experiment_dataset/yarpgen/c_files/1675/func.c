/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1675
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned char) (~((((_Bool)1) ? ((+(((/* implicit */int) (unsigned short)38225)))) : (((((/* implicit */_Bool) (unsigned short)38225)) ? (((/* implicit */int) (unsigned short)7144)) : (((/* implicit */int) (unsigned char)96))))))));
                    arr_11 [i_1] = ((/* implicit */unsigned int) (~(-1526471164)));
                    arr_12 [i_0 - 1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) arr_1 [i_0 - 1] [(unsigned short)1]);
                    var_13 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)96))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) (((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54436))))))) + (((/* implicit */int) var_12))));
}
