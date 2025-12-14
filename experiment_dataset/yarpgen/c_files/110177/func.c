/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110177
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
    var_12 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (max((min((var_1), (((/* implicit */long long int) var_5)))), (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 &= ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
                    var_14 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_1 + 1])) : ((~(((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))))))) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (-729896731) : (((/* implicit */int) arr_4 [i_0] [i_1] [3U]))))) : (((((/* implicit */_Bool) arr_0 [13U] [i_1 - 2])) ? (10295873112335376104ULL) : (arr_0 [i_0] [2])))))));
                    var_15 = ((((((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0 + 1] [i_2])) << (((((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0 + 1] [i_1 - 2])) - (36))))) >> (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0 - 1])) != (((/* implicit */int) arr_4 [i_0 - 1] [11] [i_0 + 1]))))));
                    var_16 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 1]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((long long int) (unsigned char)0));
    var_18 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned short) var_3)), (var_10))))) : (((/* implicit */int) var_10)));
}
