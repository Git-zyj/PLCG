/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169200
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_4))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) 16431547170856525154ULL);
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((_Bool) max((((((/* implicit */_Bool) arr_0 [i_2 - 1])) || ((_Bool)1))), ((!(((/* implicit */_Bool) var_10))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_0);
}
