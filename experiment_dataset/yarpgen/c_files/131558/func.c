/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131558
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
    var_11 = ((((/* implicit */_Bool) var_0)) ? (min((((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_1))), (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) -3398730014633782034LL)) ? (3398730014633782032LL) : (-3398730014633782034LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_8), (var_5))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((-3398730014633782034LL), (((/* implicit */long long int) (unsigned short)65535))))) ? (9223372036854775807LL) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((unsigned short) max((((/* implicit */long long int) arr_5 [(unsigned short)13] [(_Bool)1])), (-9223372036854775807LL))))))))));
                        var_13 = ((/* implicit */_Bool) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-3398730014633782042LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) - (38096)))));
                        var_14 = ((/* implicit */_Bool) ((unsigned short) min((arr_0 [i_0]), (arr_0 [i_0]))));
                    }
                    var_15 ^= ((_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_0 [i_2]) : (arr_1 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_8), (arr_9 [(unsigned short)10] [i_2] [i_2] [(unsigned short)10]))))) : (min((var_2), ((-9223372036854775807LL - 1LL))))));
                }
            } 
        } 
    } 
}
