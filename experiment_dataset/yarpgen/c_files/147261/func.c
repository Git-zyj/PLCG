/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147261
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)11299)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58183))) : (-7249599969184699361LL)));
    var_21 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [(unsigned char)8] [i_0] = ((/* implicit */unsigned short) ((((_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((unsigned int) (unsigned short)1985))) : (min((arr_3 [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))));
                var_22 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
                var_23 += ((/* implicit */unsigned int) max((10069356101657507749ULL), (((/* implicit */unsigned long long int) (unsigned short)63578))));
                var_24 |= ((/* implicit */unsigned short) ((_Bool) (+(((((/* implicit */_Bool) arr_3 [4])) ? (arr_0 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63555))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_19);
    var_26 = ((/* implicit */unsigned char) var_14);
}
