/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137263
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0 - 1] [i_1 - 2] [i_2]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_9 [(unsigned short)15] [i_2] [i_1 - 2] [i_0] = ((/* implicit */unsigned short) (((~(var_7))) < (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 1] [i_2] [i_1 + 1])) - (((/* implicit */int) var_6)))))));
                        var_12 = ((/* implicit */_Bool) min((var_12), ((((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_1)) + (50))))) != (var_10)))));
                    }
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_7) < (((/* implicit */long long int) ((/* implicit */int) var_1))))))) != (((((/* implicit */long long int) arr_8 [i_0 - 1] [i_0 - 1] [(_Bool)1] [(_Bool)1])) ^ (var_10)))))))))));
                }
            } 
        } 
    } 
    var_14 += ((/* implicit */unsigned int) var_5);
    var_15 = ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_1)));
    var_16 = min((var_7), (((/* implicit */long long int) (((((~(((/* implicit */int) var_8)))) + (2147483647))) << (((((((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (954996995955275538LL))) - (16LL)))))));
}
