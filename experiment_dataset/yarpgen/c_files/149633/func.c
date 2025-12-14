/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149633
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
    var_15 = ((/* implicit */unsigned short) 17442625412285255121ULL);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) (~(var_13)));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_3 [i_2] [i_1 + 1]))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) >= (((/* implicit */int) max((arr_2 [i_1] [i_1]), ((short)27345))))))))));
                }
            } 
        } 
    } 
}
