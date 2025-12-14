/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189449
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)256)) ? (((/* implicit */int) (unsigned short)65264)) : (((/* implicit */int) (unsigned short)65264))))), (((((/* implicit */_Bool) var_13)) ? (325098594U) : (((/* implicit */unsigned int) 1792926918))))))), (min((max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_14)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 1769124797U)) : (arr_1 [i_0] [i_0])))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) 18446744073709551615ULL))));
        var_18 = ((/* implicit */signed char) ((min(((~(arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) / (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (arr_0 [i_0] [5ULL]))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 3; i_1 < 9; i_1 += 4) 
    {
        for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            for (int i_3 = 3; i_3 < 11; i_3 += 1) 
            {
                {
                    var_19 = (i_1 % 2 == zero) ? (((/* implicit */short) (((((+(arr_3 [i_1 + 1]))) + (2147483647))) << ((((((~(((/* implicit */int) arr_4 [i_1])))) + (29))) - (28)))))) : (((/* implicit */short) (((((+(arr_3 [i_1 + 1]))) + (2147483647))) << ((((((((((~(((/* implicit */int) arr_4 [i_1])))) + (29))) - (28))) + (6))) - (5))))));
                    arr_13 [i_1] = ((/* implicit */unsigned int) min(((+(max((5097804016756247115ULL), (((/* implicit */unsigned long long int) var_15)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((((var_15) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1))))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
    } 
}
