/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107780
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
    var_16 = ((/* implicit */_Bool) max((var_16), (((_Bool) -1264806904))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 &= ((/* implicit */short) ((_Bool) min(((short)-4542), ((short)-4145))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((_Bool) ((((/* implicit */int) min((var_8), (((/* implicit */unsigned char) (signed char)-22))))) ^ (((/* implicit */int) (_Bool)0)))))));
                var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65527)) ? (-1264806904) : (((/* implicit */int) var_4)))) >= (((((/* implicit */_Bool) 6773645060771443245ULL)) ? (((/* implicit */int) var_1)) : (6))))))));
            }
        } 
    } 
}
