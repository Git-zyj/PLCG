/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174458
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
    var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)111))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) -1857780965)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)69)) ? (5033611401744670230ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 10ULL))))) : (((/* implicit */int) (unsigned char)186))))));
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) 4194288U))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) 1065151889408ULL);
            }
        } 
    } 
}
