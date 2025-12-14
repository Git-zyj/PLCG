/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164662
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [(unsigned char)0] [(unsigned short)6] [i_1] = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) arr_3 [i_1])), ((-(((/* implicit */int) var_3)))))), (((/* implicit */int) ((((/* implicit */_Bool) max((142156651U), (((/* implicit */unsigned int) (short)24576))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (14940454896853239554ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((((/* implicit */int) (short)24578)), (1319927940)))))) ? ((~(max((3101119001U), (((/* implicit */unsigned int) (_Bool)1)))))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_8)), ((-(((/* implicit */int) (unsigned short)65535)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (short)-10984);
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)24572)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (short)-24555))));
}
