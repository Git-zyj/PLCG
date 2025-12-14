/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152918
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_14 += ((/* implicit */long long int) (((_Bool)1) ? ((-(((/* implicit */int) (signed char)95)))) : (((/* implicit */int) ((_Bool) (_Bool)0)))));
                    var_15 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)448)))))));
                    arr_8 [i_2] = ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) var_12);
    var_17 = ((/* implicit */int) min((((/* implicit */short) ((min((var_12), (131071LL))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (_Bool)1))))))))), ((short)-12145)));
    var_18 = ((/* implicit */_Bool) (short)(-32767 - 1));
    var_19 = ((/* implicit */_Bool) ((signed char) ((unsigned int) min((var_1), (((/* implicit */int) var_2))))));
}
