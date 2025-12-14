/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159105
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_7 [(_Bool)1] [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) ((((-2147483639) + (2147483647))) >> (((((-2147483639) - (-2147483630))) + (39)))))) ? (1540985053U) : (1540985054U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) var_3)))))));
                    arr_9 [i_0] [i_0] [9U] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) arr_1 [i_0 + 3] [i_0 + 3])), (arr_7 [i_0] [i_0 + 2] [10ULL]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (((((/* implicit */_Bool) (short)-17900)) ? (-4138275142888746654LL) : (var_7)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) var_17);
    var_20 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)22132))) : (2788068876U))), (((((/* implicit */_Bool) (unsigned char)1)) ? (var_11) : (((/* implicit */unsigned int) var_16)))))) != (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483633)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))), (var_11)))));
}
