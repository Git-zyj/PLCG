/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110217
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
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_1]))))) != (max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_2 [i_1]))))))), (((((/* implicit */_Bool) (+(arr_0 [i_2])))) ? (((((/* implicit */_Bool) arr_3 [(unsigned char)23] [(unsigned char)23] [1ULL])) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_2] [i_2])))) : ((+(((/* implicit */int) arr_5 [i_2 - 2] [i_1 - 1] [i_0]))))))));
                    var_12 = ((/* implicit */unsigned long long int) min(((+(((((((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_2])) + (2147483647))) << (((((/* implicit */int) arr_2 [i_0 - 1])) - (240))))))), (min((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_2] [i_0] [i_0])), (arr_4 [i_0])))), ((~(((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned short)19]))))))));
                    arr_7 [10ULL] [i_2] [i_2] [i_0] = ((/* implicit */int) ((signed char) ((unsigned long long int) ((short) arr_5 [(unsigned short)12] [i_1 - 1] [i_2 + 1]))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((signed char) (-(min((var_9), (((/* implicit */unsigned int) var_5))))))))));
    var_14 = ((/* implicit */short) min(((~((+(((/* implicit */int) var_0)))))), (((/* implicit */int) ((signed char) ((((/* implicit */int) var_4)) << (((var_9) - (3248652318U)))))))));
    var_15 = ((/* implicit */long long int) var_10);
}
