/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113609
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
    var_17 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) 4165560947583464754ULL);
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */int) (unsigned char)45);
                var_19 = ((/* implicit */unsigned short) var_0);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) ((((2147483647LL) != (((/* implicit */long long int) var_16)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (0ULL) : (0ULL))))))) : (((/* implicit */int) ((((0LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-36))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned char)4)))))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (var_11)));
}
