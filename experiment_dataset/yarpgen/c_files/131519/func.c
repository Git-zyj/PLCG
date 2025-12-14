/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131519
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) min(((unsigned char)73), ((unsigned char)45)))), (((((/* implicit */int) var_3)) / (((/* implicit */int) (unsigned short)42154))))))) : (((unsigned long long int) (+(((/* implicit */int) (unsigned char)193)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */int) (short)29290)), ((~(((/* implicit */int) (short)-9653))))))) > (((((/* implicit */_Bool) (unsigned char)197)) ? (140600049401856LL) : (-4267091439101468841LL)))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0]);
            }
        } 
    } 
    var_21 = var_12;
    var_22 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) max((((/* implicit */short) var_16)), (var_2)))), (max((-7578065163487120847LL), (2311890503276285193LL))))), (((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)197)))))))));
    var_23 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)42154))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) min(((short)15272), (((/* implicit */short) var_1)))))))) >> (((((var_15) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))) / (1085340369812617612LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
}
