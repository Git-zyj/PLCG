/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175868
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
    var_13 = ((/* implicit */unsigned int) ((unsigned short) var_11));
    var_14 = ((/* implicit */signed char) ((unsigned char) (-(var_6))));
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) 2147483647)), (((((/* implicit */_Bool) var_3)) ? (14104810418330407767ULL) : ((~(4341933655379143849ULL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_8 [i_1] [2ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((4294967295U) << (((((/* implicit */int) (unsigned short)143)) - (128)))))))) ? ((-(4341933655379143854ULL))) : (14104810418330407767ULL)));
                var_16 = ((/* implicit */unsigned short) arr_3 [i_0]);
            }
        } 
    } 
}
