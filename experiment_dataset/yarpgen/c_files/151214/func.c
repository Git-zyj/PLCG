/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151214
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((arr_0 [15ULL] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_15 ^= ((/* implicit */signed char) max((((/* implicit */unsigned short) (unsigned char)147)), (min((((/* implicit */unsigned short) ((10591294599830089522ULL) != (7099782703717858969ULL)))), (var_2)))));
                        var_16 ^= ((/* implicit */unsigned long long int) arr_12 [(unsigned short)14] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3] [i_3]);
                    }
                } 
            } 
        } 
    }
    var_17 |= ((/* implicit */signed char) min((((/* implicit */long long int) (+((+(var_8)))))), (var_12)));
    var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) (-(var_1))))), (var_9)));
}
