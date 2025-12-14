/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18316
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
    var_15 += ((/* implicit */unsigned long long int) ((short) min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), ((!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_2] [i_2] [i_2 - 1])))))));
                    arr_6 [i_2] [18U] [i_1] [i_2 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2]))))) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0])), (arr_4 [i_0 - 2] [i_0 - 2] [2])))))))) ? (((/* implicit */unsigned long long int) max((2798050123U), (((/* implicit */unsigned int) ((unsigned char) (short)5074)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))))) ? (max((((/* implicit */unsigned long long int) arr_5 [8U] [i_1] [i_1])), (arr_1 [(unsigned char)1]))) : (arr_1 [i_1]))));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) arr_3 [(short)1])))))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_9);
    var_19 ^= ((/* implicit */long long int) var_6);
}
