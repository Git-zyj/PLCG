/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126471
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
    var_20 *= ((/* implicit */unsigned short) var_18);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned char) ((var_19) & (min((max((-420273175286014266LL), (var_9))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))));
                arr_5 [i_0] = ((/* implicit */long long int) ((var_4) & (((/* implicit */unsigned int) arr_2 [i_0]))));
                arr_6 [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) 3310502667U)) ? (var_8) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) min((3310502671U), (((((/* implicit */_Bool) var_18)) ? (1274419567U) : (var_5))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)127))) - (min((((/* implicit */unsigned long long int) (short)0)), (arr_3 [i_0] [i_0] [i_0]))))) * (max((17014605360572158527ULL), (((/* implicit */unsigned long long int) (unsigned char)204))))));
                var_21 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))) >> (((((((/* implicit */_Bool) arr_1 [(short)9])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_6)))) + (31))));
            }
        } 
    } 
}
