/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136801
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
    var_15 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)128))))), (var_4)))));
    var_16 = min((((/* implicit */unsigned long long int) var_6)), ((-(min((((/* implicit */unsigned long long int) (unsigned char)255)), (var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) (unsigned short)65527);
                arr_5 [i_0] |= ((/* implicit */unsigned short) arr_4 [i_0] [i_1]);
                var_18 *= ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((((/* implicit */_Bool) 2053410965)) ? (-1744849707) : (1744849707))) : (-4194304))), ((+(((/* implicit */int) (_Bool)1))))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((int) (-(((/* implicit */int) (unsigned short)1023))))), (((/* implicit */int) var_13)))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(short)4] [(short)4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? (-1744849709) : ((~(1682063394))))) : (min((((/* implicit */int) (_Bool)1)), (1744849730)))));
            }
        } 
    } 
}
