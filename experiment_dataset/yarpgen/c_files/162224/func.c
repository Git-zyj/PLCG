/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162224
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 13664220260585563838ULL)) ? (((((/* implicit */_Bool) ((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (12285857620928941153ULL) : (((/* implicit */unsigned long long int) 913567075U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) var_12);
                    arr_7 [i_2] [i_1] [i_1] [(unsigned short)11] = ((/* implicit */long long int) var_4);
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (-4507962004889475320LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))) | (((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) arr_3 [i_1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-4507962004889475320LL)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1448609546U)) ? (((/* implicit */int) ((signed char) arr_5 [i_3]))) : (((((((/* implicit */int) arr_6 [i_3] [i_3])) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_3] [i_3])) + (137)))))));
        var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) * ((+(var_11))))), (var_11)));
    }
}
