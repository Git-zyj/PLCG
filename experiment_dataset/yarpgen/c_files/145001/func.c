/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145001
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
    var_19 = ((/* implicit */unsigned char) ((min((18250740349690339687ULL), (((/* implicit */unsigned long long int) ((short) 1819318236U))))) | ((~(max((196003724019211915ULL), (var_8)))))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_6)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (((((var_8) + (((/* implicit */unsigned long long int) var_2)))) >> (((((/* implicit */int) var_14)) + (97)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned char) (((+(arr_1 [i_0]))) / (((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_4 [i_0]) < (arr_4 [i_1])))))))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((18250740349690339696ULL) * (((/* implicit */unsigned long long int) (+((+(arr_0 [i_0] [i_0])))))))))));
                var_23 ^= ((/* implicit */unsigned char) arr_2 [i_1] [i_1] [i_1]);
                var_24 = ((/* implicit */short) ((((/* implicit */int) ((arr_1 [i_0]) <= (arr_1 [i_1])))) <= (((/* implicit */int) ((short) arr_1 [i_0])))));
            }
        } 
    } 
}
