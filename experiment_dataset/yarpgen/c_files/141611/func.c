/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141611
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
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (+(-1745457838)))) - (var_6))) * (((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (7172661480959157615ULL))) / (((/* implicit */unsigned long long int) (+(-6108734207463358787LL))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)32767)) - (32753))))))));
                arr_6 [i_1] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((1797801849253170580ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32739)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)131)) ? (5081693309712287006LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-32739)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)171))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) (short)-2924))))), (-1LL)))));
                var_17 = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) >= (18446744073709551615ULL))))) | ((~(4294967292U))))));
            }
        } 
    } 
}
