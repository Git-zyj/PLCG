/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128345
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
    var_13 -= (~((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (var_6) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_0] [i_1] [i_2]), (var_2)))))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_2]))))))) & (max((arr_7 [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) arr_1 [i_0]))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_2])) : (((/* implicit */int) var_1))))), (max((((/* implicit */long long int) var_1)), (-8696790136277616502LL)))))));
                    var_14 = ((/* implicit */int) -8696790136277616502LL);
                    var_15 = ((/* implicit */int) ((unsigned char) var_3));
                    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_4)))))) >> (((((((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_0] [i_0] [i_0] [i_2]), (((/* implicit */short) arr_6 [i_0] [i_0] [i_0] [i_0])))))) ^ (arr_2 [i_1 + 1] [i_1 + 1]))) + (554335937523859095LL)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_7);
}
