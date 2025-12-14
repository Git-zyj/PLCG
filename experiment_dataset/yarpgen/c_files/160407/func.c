/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160407
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
    var_19 = max(((-(((/* implicit */int) (signed char)11)))), (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)32)) : (-2079864646))) <= (((int) 10672451088873824073ULL))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-20)) ? (var_5) : (((/* implicit */int) arr_0 [(unsigned char)17]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_10))) : (((/* implicit */long long int) ((int) var_15)))));
                                var_23 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_2] [i_2] [5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9))) ^ (((/* implicit */long long int) (-(2484006522U))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))) : (arr_3 [i_0] [i_0])));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((int) (~(var_4))))) : ((+(var_0)))));
}
