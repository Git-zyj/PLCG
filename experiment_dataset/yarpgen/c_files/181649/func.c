/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181649
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
    var_14 -= ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] |= ((/* implicit */short) var_12);
                    var_15 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_9))) - ((+(((/* implicit */int) (unsigned char)32))))));
                    arr_9 [(short)20] [i_1] [i_1] [i_0] = max(((unsigned char)126), (((/* implicit */unsigned char) (signed char)-39)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min(((~(((/* implicit */int) (short)32754)))), (((/* implicit */int) var_2)))))));
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)4471))));
    var_18 = ((/* implicit */unsigned int) var_0);
}
