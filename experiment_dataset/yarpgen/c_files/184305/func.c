/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184305
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((var_0) ? (-600067956) : (((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0] [i_0])))));
                var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) -7851756877629638565LL)), (14750038559482595973ULL)));
                var_12 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) ((524272U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)15011)))))), (((((/* implicit */_Bool) -600067959)) ? (3865601682U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))))))), (((/* implicit */unsigned int) (_Bool)1))));
            }
        } 
    } 
    var_13 &= ((/* implicit */short) ((((((/* implicit */int) var_0)) >= (((((/* implicit */int) var_5)) + (((/* implicit */int) (short)(-32767 - 1))))))) ? (var_8) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2002033491)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) : (var_3)))))))));
    var_14 = ((/* implicit */long long int) ((var_9) && (((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)47752)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (short)23714))))))))));
    var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) + (max((((/* implicit */unsigned long long int) (short)-23723)), (0ULL)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)9373))))));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (max((max((((/* implicit */unsigned long long int) 8436704475965608628LL)), (7906727446435499905ULL))), (18188797578584064334ULL)))));
}
