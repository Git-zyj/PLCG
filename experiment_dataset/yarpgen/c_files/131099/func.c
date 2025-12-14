/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131099
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
    for (short i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 = max((5988005890316728550ULL), (((/* implicit */unsigned long long int) (unsigned short)65517)));
                arr_5 [i_1 - 3] [i_1] [4LL] = ((/* implicit */unsigned char) (unsigned short)19);
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 281474976710655LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 517138482733546162ULL)))) : (-281474976710655LL)));
                arr_6 [i_0 - 4] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 + 1])) && (((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 3]))))), (((unsigned long long int) arr_3 [i_0 - 2] [i_0 - 4]))));
            }
        } 
    } 
    var_21 &= ((/* implicit */short) (((-(var_16))) / (((/* implicit */unsigned long long int) -281474976710655LL))));
}
