/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15897
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
    var_20 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_15))), (var_4))) > (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_21 |= var_3;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [(signed char)2] = arr_7 [i_0] [i_0] [i_1];
                    var_22 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_2 [0] [i_0] [i_2])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (4312440853722840517LL) : (((/* implicit */long long int) var_12))))))) ? (min((((/* implicit */long long int) ((arr_2 [i_0] [i_1] [i_2]) + (((/* implicit */int) (unsigned char)195))))), (max((((/* implicit */long long int) -358590526)), (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -358590520)) ? (((/* implicit */long long int) 358590529)) : (arr_3 [i_2]))) >= (((/* implicit */long long int) ((((/* implicit */int) var_17)) * (((/* implicit */int) (signed char)121))))))))));
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (-(max((((/* implicit */long long int) arr_1 [i_0])), (min((-6866287658730246122LL), (var_18))))))))));
                    var_24 = ((/* implicit */unsigned int) ((min((6866287658730246092LL), (((((/* implicit */_Bool) 19U)) ? (((/* implicit */long long int) arr_2 [i_1] [i_1] [i_0])) : (var_14))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))))));
                    arr_9 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */long long int) 42U)) > (min((var_4), (var_11)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_6 [i_2] [i_0])))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_11))));
}
