/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173887
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
    var_14 |= ((((/* implicit */int) var_9)) / (((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) var_9))))) != (((7203959186013545163ULL) >> (((-214224975) + (214225020)))))))));
    var_15 = (((-((~(((/* implicit */int) var_10)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_3)))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) var_8))))))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((((/* implicit */int) var_11)) | (((/* implicit */int) var_11))))))) - ((-(var_3)))));
                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)24205))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (var_12)))))) << ((((~(((var_5) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))) + (198)))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-3))));
}
