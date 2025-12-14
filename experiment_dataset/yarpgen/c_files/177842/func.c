/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177842
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 7; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)137)));
                arr_6 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)33691))))));
                arr_7 [i_1 + 1] = ((/* implicit */_Bool) ((signed char) ((_Bool) 2868915078656320980ULL)));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned char)24))) && (((/* implicit */_Bool) var_6)))))) + (var_7)));
    var_16 = ((/* implicit */int) ((var_7) >= (var_7)));
}
