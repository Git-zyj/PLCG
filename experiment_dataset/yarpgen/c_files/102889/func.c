/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102889
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [3ULL] [i_1] = ((/* implicit */unsigned char) min((220465253), ((~(((/* implicit */int) (unsigned char)50))))));
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((220465255) << (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) ? (((((/* implicit */_Bool) ((-220465277) / (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) >= (((/* implicit */int) (short)29441))))) : (max((((/* implicit */int) (short)-8708)), (-475235586))))) : (((/* implicit */int) (short)-2007))));
                var_19 = ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (max((((/* implicit */unsigned int) var_18)), (var_12)))));
    var_21 = ((/* implicit */unsigned int) -220465255);
}
