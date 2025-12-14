/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189315
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
    var_14 ^= ((/* implicit */long long int) ((4162470352U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-22666)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_9 [(unsigned short)15] [(unsigned short)15])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))), (((9223372036854775807LL) - (9223372036854775807LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (_Bool)1)))))))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)6)) ? (3627706625195050978ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25876))))), (((/* implicit */unsigned long long int) (!(var_9))))))) ? ((+(((long long int) var_0)))) : (max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((9223372036854775807LL) - (9223372036854775802LL)))))), (((((/* implicit */_Bool) -910855486)) ? (((/* implicit */long long int) 1181914831)) : (8965770374639703058LL)))))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((short) max((max(((unsigned char)145), (((/* implicit */unsigned char) arr_9 [i_0] [i_1])))), (((/* implicit */unsigned char) var_2))))))));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */short) (((_Bool)0) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (-8228897200485808575LL)))) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25427))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
}
