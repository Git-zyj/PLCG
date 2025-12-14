/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180308
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
    var_15 = ((/* implicit */unsigned short) min((var_0), (var_2)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned char) -816652214);
                    var_16 = ((/* implicit */short) var_11);
                }
            } 
        } 
    } 
    var_17 ^= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 8484769676226632382LL)) ? (((/* implicit */int) var_0)) : (-816652188))), (((((/* implicit */int) (unsigned short)31941)) << (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((unsigned short) 1330370483))) : (((int) ((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533)))))));
}
