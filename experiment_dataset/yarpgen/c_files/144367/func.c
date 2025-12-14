/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144367
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
    var_15 = ((/* implicit */signed char) ((_Bool) (short)-268));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70)))))) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (var_8))) + (4287083157553148121LL)))))) & (var_11)));
                var_17 -= ((/* implicit */unsigned short) var_7);
                var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_3 [i_1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (0ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7442)))));
                arr_4 [i_0] = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) (signed char)-8)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58094))) & (5875019544817699871ULL)))))));
            }
        } 
    } 
    var_19 = var_10;
}
