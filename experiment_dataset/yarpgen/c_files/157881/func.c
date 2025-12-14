/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157881
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
    var_10 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned int) var_3)) | (arr_2 [i_0 - 1]))));
                arr_5 [i_0] = var_4;
                var_11 = ((/* implicit */unsigned char) ((((_Bool) ((var_0) - (((/* implicit */int) var_6))))) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-52)))) - ((+(((/* implicit */int) arr_1 [i_1] [i_1])))))) : (((int) (-(((/* implicit */int) (_Bool)0)))))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) var_2)))))) ? (((((18446744073709551615ULL) - (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))) / (((/* implicit */unsigned long long int) ((2082337463U) - (arr_2 [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8))))));
            }
        } 
    } 
}
