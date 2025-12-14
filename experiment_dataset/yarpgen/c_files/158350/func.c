/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158350
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 6; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_11 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((15946489929771515415ULL), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (var_7))))))) ? (((((/* implicit */int) ((unsigned char) var_9))) & (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_6))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)127)) && (((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_6))))))))));
                    arr_7 [i_0] [i_1 - 2] [(unsigned char)2] |= ((/* implicit */unsigned char) max((((/* implicit */short) (_Bool)1)), (((short) 4294967283U))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) var_8)), (9714796689588197520ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_2)))), ((!(((/* implicit */_Bool) var_4))))))))));
}
