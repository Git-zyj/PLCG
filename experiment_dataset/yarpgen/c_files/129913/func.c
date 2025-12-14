/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129913
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_8 [i_0 - 1] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_12);
                        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (!((!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (var_10))))))))));
                        arr_9 [i_0] [i_0] [i_2] [15ULL] [15ULL] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_8)))) ? (((var_5) | (var_12))) : (var_4)))) : ((((!(((/* implicit */_Bool) var_10)))) ? (var_3) : (((/* implicit */long long int) var_8))))));
                        var_15 = ((/* implicit */short) var_0);
                    }
                } 
            } 
        } 
        arr_10 [(signed char)2] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_11)))))) || (((((/* implicit */unsigned int) ((/* implicit */int) ((var_13) >= (var_1))))) >= (((((/* implicit */_Bool) var_7)) ? (var_8) : (var_5)))))));
    }
    var_16 = ((/* implicit */unsigned long long int) var_0);
    var_17 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_6))) == (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) ? (((var_10) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_12) : (var_4)))))) : (var_13)));
}
