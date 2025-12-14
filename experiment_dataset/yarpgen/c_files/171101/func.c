/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171101
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
    var_12 ^= ((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0))))) - (4211LL)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_4 [14ULL] [(unsigned char)20] [i_0])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)14] [i_0]))))))) != (((/* implicit */long long int) (~(((/* implicit */int) min(((signed char)24), ((signed char)41))))))))))));
                    var_14 = ((/* implicit */unsigned char) var_8);
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) arr_2 [i_1] [i_1] [i_1]));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_4);
}
