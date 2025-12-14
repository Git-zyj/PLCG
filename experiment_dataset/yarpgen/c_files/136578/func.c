/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136578
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) ((var_12) ? (min((var_11), (((/* implicit */unsigned int) (+(arr_3 [i_0] [i_0] [i_1])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
                arr_6 [i_0] [3] [(short)15] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [3ULL] [i_1])))))));
                var_14 &= ((/* implicit */signed char) ((min((max((var_9), (var_9))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [(signed char)8]))))))) / (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)17082)), (2761973674U))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) 4611686018427387903LL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) max((var_15), (var_0)));
}
