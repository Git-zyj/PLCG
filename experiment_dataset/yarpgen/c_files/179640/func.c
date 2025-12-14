/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179640
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (_Bool)0))) & (((/* implicit */int) (unsigned char)240)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) >= (arr_7 [i_0] [(short)9] [i_0] [i_2]))))) * (((((/* implicit */_Bool) var_5)) ? (var_7) : (arr_4 [(unsigned char)15] [i_1]))))), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned char)10)))))))))));
                    arr_9 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) (signed char)127)))));
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (3772741354U)));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_5))));
}
