/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153659
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_10 ^= ((/* implicit */_Bool) arr_1 [i_1]);
                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((((var_3) >> (((/* implicit */int) var_7)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)17]))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_0 [20]))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_4))))))))));
                arr_5 [17LL] [i_0] = ((/* implicit */short) ((((((arr_1 [i_0]) + (((/* implicit */long long int) arr_4 [i_0] [i_0])))) / (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) var_0)))))) | (((/* implicit */long long int) min(((-(arr_4 [i_0] [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))))))));
                var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_4))))))));
            }
        } 
    } 
    var_13 = ((((/* implicit */_Bool) ((((unsigned int) (unsigned short)43196)) * (var_0)))) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2))) / (var_9))) : (((((/* implicit */long long int) min((1728017324U), (1875421442U)))) * (max((var_2), (((/* implicit */long long int) -1463761240)))))));
}
