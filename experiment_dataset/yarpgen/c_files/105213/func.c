/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105213
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
    var_10 = ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_2))))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((var_6), (var_5)))))))));
    var_11 += (_Bool)1;
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */int) ((var_1) == (((/* implicit */long long int) ((/* implicit */int) var_8))))))))) ^ (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned int) var_9)) : (max((var_3), (((/* implicit */unsigned int) var_5))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) ((unsigned long long int) min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) <= (500545277U)))))));
                var_13 *= ((/* implicit */short) var_0);
                var_14 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((long long int) arr_2 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [19]))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(unsigned char)11])) && (((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_1])))))))));
                var_15 = ((/* implicit */long long int) (((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)16384)))) | (max((var_7), (((/* implicit */int) (_Bool)1)))))) <= (((int) var_9))));
            }
        } 
    } 
    var_16 = var_7;
}
