/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160802
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
    var_15 = 2147483647;
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2];
                    arr_9 [i_0 - 2] [i_1 + 1] [i_2] = ((unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3088)) ? (((/* implicit */int) (unsigned char)255)) : ((-2147483647 - 1))))) > (min((4329327034368ULL), (6868888181538486590ULL)))));
                    var_16 = ((/* implicit */long long int) ((((unsigned long long int) ((_Bool) -8740321241103011345LL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_1 - 1])))));
                    var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? ((~(927573497113509530ULL))) : ((-(11514169490446306213ULL)))));
                }
            } 
        } 
    } 
    var_18 = (-(var_10));
    var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((unsigned char) min((var_14), (((/* implicit */unsigned int) var_12)))))) : ((~((~(-2147483647)))))));
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)-3093)) / (2147483647)))))), (((unsigned long long int) (~(var_5))))));
}
