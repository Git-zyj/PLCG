/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146101
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
    var_19 = ((((/* implicit */_Bool) (~(var_10)))) ? (((((var_2) ? (1045373784925571705ULL) : (((/* implicit */unsigned long long int) var_14)))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))) : (((var_2) ? (max((((/* implicit */unsigned long long int) 4227932845U)), (12358012108616589775ULL))) : (((unsigned long long int) var_1)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_12))));
                    var_21 = ((/* implicit */unsigned int) arr_4 [i_0 + 2] [i_0 + 2]);
                    var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((17401370288783979910ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))) : (3137483162241606953ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (short)-23103)) ? (3137483162241606938ULL) : (((/* implicit */unsigned long long int) 67034450U))))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0])) : (((/* implicit */int) (short)23127))))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_13))))), (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_0 + 1])))));
    }
}
