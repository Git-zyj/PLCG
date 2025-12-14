/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123305
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
    for (short i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 4] [i_1]))) : (((var_7) ^ (((/* implicit */unsigned long long int) arr_2 [i_1]))))))) ? (((((/* implicit */_Bool) min((arr_4 [i_1] [(signed char)2]), (((/* implicit */int) var_5))))) ? (((arr_1 [i_0]) << (((arr_1 [i_1]) - (16855630429097697195ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((-1) + (2147483647))) << (((((((/* implicit */int) (short)-1)) + (32))) - (31))))) : (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_5 [i_0 + 1] [i_1]))))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+((~(var_13)))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) max((var_6), (var_6)));
    var_15 = ((/* implicit */unsigned int) var_8);
    var_16 = ((((/* implicit */_Bool) var_6)) ? ((((~(var_3))) | (((/* implicit */long long int) (~(-1)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-16657)))))))));
    var_17 |= ((/* implicit */unsigned char) ((max((((/* implicit */long long int) var_4)), ((-(-3158694238156097035LL))))) == ((+(1436130400873648011LL)))));
}
