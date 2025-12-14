/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113587
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
    var_11 = ((/* implicit */unsigned char) min((var_4), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (((~(((/* implicit */int) var_0)))) <= (((/* implicit */int) arr_2 [i_0] [(short)13] [i_2 + 1]))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_10))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (18446744073709551615ULL))))))));
                    var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) 3340483573U)), (((arr_0 [i_0]) * (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (0U) : (((/* implicit */unsigned int) -233631429)))))))));
                    arr_6 [6] [i_1] [i_1] = ((/* implicit */int) ((((((_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((0LL) % (-1LL)))))) && (((/* implicit */_Bool) -13LL))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(-7126149681853357055LL))) % (((((/* implicit */_Bool) arr_2 [i_0] [0] [(short)3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)8] [i_1] [i_2]))) : (-28LL)))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)0))))))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_5))))))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(9081752009012725788LL)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_5 [i_2 - 1] [i_2] [i_2])))))));
                }
            } 
        } 
    } 
}
