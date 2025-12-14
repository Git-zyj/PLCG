/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140764
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) min((max((((/* implicit */int) ((signed char) var_7))), (((((((/* implicit */int) var_5)) + (2147483647))) >> (((var_1) - (14198101995330417036ULL))))))), (((/* implicit */int) ((short) var_8))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [8]);
                var_11 = ((/* implicit */signed char) max((((((/* implicit */int) (short)-19404)) | (((var_2) & (((/* implicit */int) arr_5 [i_0 - 1] [1])))))), (((((/* implicit */_Bool) max((arr_1 [i_1] [i_1]), (((/* implicit */short) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [(short)8])) > (((/* implicit */int) arr_1 [i_1] [i_0 - 1]))))) : (((/* implicit */int) (short)27307))))));
            }
        } 
    } 
}
