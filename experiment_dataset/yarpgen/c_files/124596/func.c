/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124596
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) | (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (2117378301499341371ULL)))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) (unsigned char)0))))) : (((/* implicit */int) min((var_3), ((unsigned short)65520))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 -= ((/* implicit */unsigned short) 10562669913537966085ULL);
                var_13 &= ((/* implicit */int) (signed char)-106);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 8860649840659831268ULL))) + (((/* implicit */int) ((signed char) var_6))))))));
                arr_7 [(unsigned short)2] [i_0] = ((/* implicit */long long int) 0ULL);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((long long int) 0)))));
    var_15 = ((/* implicit */long long int) var_7);
}
