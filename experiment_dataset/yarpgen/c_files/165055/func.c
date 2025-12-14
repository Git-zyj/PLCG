/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165055
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
    var_10 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_3) : (((((/* implicit */_Bool) -2137207270)) ? (((/* implicit */long long int) -1)) : (var_2)))))) ? (var_8) : (((((((/* implicit */unsigned int) var_5)) ^ (var_1))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_4))))))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)0))));
                var_12 = ((/* implicit */short) var_2);
            }
        } 
    } 
    var_13 ^= ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    for (signed char i_2 = 3; i_2 < 20; i_2 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)2120)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) : (2977573995U)))) >= (((long long int) arr_8 [i_2] [i_2 - 2]))))) : (((/* implicit */int) arr_9 [i_2]))));
        var_15 = ((/* implicit */short) max((var_15), (arr_6 [i_2])));
    }
}
