/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167903
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)-683)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) >= (((arr_0 [i_0] [i_0]) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (1586550597U))))))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(3678132573U))), (arr_4 [i_1])))) ? ((+(((((/* implicit */_Bool) var_11)) ? (14427379591168857093ULL) : (((/* implicit */unsigned long long int) arr_4 [9LL])))))) : (((/* implicit */unsigned long long int) (+(arr_4 [i_1]))))));
        var_22 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1]))) ? ((-9223372036854775807LL - 1LL)) : (((var_3) | (((/* implicit */long long int) 3678132573U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3438))) / (4294967291U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) ^ (arr_4 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [7U] [i_1]), (arr_2 [16ULL] [i_1])))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])) : (5575890642844602059ULL))) : (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    arr_10 [i_1] [i_2] [17ULL] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((arr_4 [5U]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48514)))))) - (((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned long long int) 1957774140U)) : (arr_8 [i_2] [i_2] [i_3] [i_3]))))) - (((((/* implicit */_Bool) ((arr_6 [i_1] [i_1]) | (((/* implicit */unsigned int) arr_2 [i_3] [i_2]))))) ? (var_2) : (((/* implicit */unsigned long long int) (+(2247465631U))))))));
                    var_24 |= ((/* implicit */_Bool) ((6951322432860957888LL) % (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 616834723U)) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16380)))))))));
                }
            } 
        } 
        var_25 = ((min((arr_8 [i_1] [i_1] [i_1] [i_1]), (arr_8 [i_1] [i_1] [i_1] [i_1]))) <= (((/* implicit */unsigned long long int) var_12)));
    }
    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) 
    {
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3678132586U) | (((/* implicit */unsigned int) arr_7 [i_4 - 1]))))) ? (((((((/* implicit */int) arr_3 [i_4])) <= (((/* implicit */int) var_10)))) ? (((long long int) -7344632463137385799LL)) : (((/* implicit */long long int) min((arr_7 [i_4 - 1]), (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_4 + 1] [i_4] [i_4 + 1])) ? (((/* implicit */int) arr_13 [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) (signed char)4)))))));
        var_27 = ((arr_8 [(_Bool)1] [i_4] [i_4] [i_4]) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))));
    }
    var_28 *= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_13))))) <= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (var_12))))) ? (((min((((/* implicit */unsigned long long int) var_4)), (var_2))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1)))))))));
}
