/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146293
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
    var_16 = ((/* implicit */signed char) var_15);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)235)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((((/* implicit */int) arr_7 [i_0] [i_0])) - (((/* implicit */int) arr_7 [i_0] [i_0])))) : (((/* implicit */int) ((var_13) < (((/* implicit */int) (short)-24900)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) max((var_0), (((/* implicit */unsigned char) arr_3 [i_0])))))))) : (-8536806827213621722LL)));
                arr_8 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)17681)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (arr_6 [i_0])))) ? ((~(6602530270275538882ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) var_3))));
                arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((int) (unsigned short)29473)), (((/* implicit */int) min(((unsigned short)29442), (((/* implicit */unsigned short) (_Bool)0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)-73), (((/* implicit */signed char) (_Bool)1))))) || (((/* implicit */_Bool) arr_5 [i_0] [i_0])))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (728179479142770055LL)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (signed char)119);
}
