/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148257
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
    var_12 = ((/* implicit */long long int) max((var_12), (min((((/* implicit */long long int) var_10)), (((((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (var_11))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */long long int) var_3)), (var_0)))))))));
    var_13 = ((/* implicit */unsigned char) ((long long int) var_11));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)5356)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3)))))));
                arr_6 [(unsigned short)7] &= ((/* implicit */_Bool) arr_2 [i_0]);
                var_14 &= ((/* implicit */unsigned long long int) arr_3 [16U]);
                arr_7 [i_1] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 1883246944U)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [(unsigned short)17]))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) == (((/* implicit */int) (_Bool)0)))))) - (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : (((arr_2 [i_0]) * (arr_2 [i_0])))));
            }
        } 
    } 
}
