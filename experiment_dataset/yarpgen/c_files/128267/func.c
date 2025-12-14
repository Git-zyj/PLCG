/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128267
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57042)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)31))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))) : (max((var_6), (((/* implicit */unsigned long long int) var_5))))));
                    arr_7 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_3 [i_1]), (arr_3 [i_2])))) ? (max((var_7), (((/* implicit */unsigned long long int) 2639814517U)))) : (((((/* implicit */_Bool) (unsigned char)244)) ? (8191ULL) : (var_1)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) var_4))))));
}
