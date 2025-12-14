/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113184
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) (signed char)-23)), (5694175913812626325ULL))))) + (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1619604721)) ? (((/* implicit */int) (unsigned short)25)) : (((/* implicit */int) (signed char)-19))))))));
                var_17 += ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)13)) | (((/* implicit */int) (signed char)-9))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_1);
    var_19 *= ((/* implicit */unsigned short) (~(var_11)));
}
