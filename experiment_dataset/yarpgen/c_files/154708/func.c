/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154708
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
    var_16 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)30888)) >> (((3567931034U) - (3567931003U)))))) < (((((/* implicit */unsigned long long int) -157752149115970740LL)) % (((((/* implicit */_Bool) (unsigned short)34643)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (3247575327561969579ULL)))))));
                var_18 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))) | (1187868678021178654ULL))) << (((max((7742528860536030100ULL), (((/* implicit */unsigned long long int) 4126941643U)))) - (7742528860536030060ULL)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((var_12) & (((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) (unsigned short)29850)) : (((/* implicit */int) (signed char)9)))))))));
}
