/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14437
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65527))))) ? (((unsigned long long int) max((var_8), (((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (var_14)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : (((var_10) >> (((var_10) - (817041349U))))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                    arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) var_1));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_7)) + ((~(((/* implicit */int) (unsigned short)65520))))))));
}
