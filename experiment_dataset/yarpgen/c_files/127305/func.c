/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127305
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)795))) != (var_9))))) >= (((var_10) | (((/* implicit */unsigned long long int) var_0))))))) >> (((max((min((((/* implicit */unsigned int) (unsigned char)202)), (2346681484U))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)32441)) > (var_18)))))) - (181U)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((min((max((((/* implicit */int) (unsigned short)59144)), (arr_6 [i_0] [i_0] [i_1]))), (((((/* implicit */int) arr_4 [i_0])) >> (((var_2) - (1629288798))))))), (((((arr_0 [i_0]) | (((/* implicit */int) (unsigned char)149)))) - (((/* implicit */int) ((arr_6 [i_0] [i_0] [i_1]) <= (var_18))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    arr_10 [i_0 - 1] [i_2] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)7)), (2095040007)))), (((max((36028797018963964LL), (((/* implicit */long long int) (unsigned char)7)))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])) || (((/* implicit */_Bool) var_9))))))))));
                    arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_13)))) / (max((arr_9 [i_0] [i_1] [i_2]), (((/* implicit */int) arr_1 [i_1])))))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((0LL) - (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))) <= (max((1119057849402419898ULL), (((/* implicit */unsigned long long int) var_16)))))))));
                    arr_12 [i_0 - 1] [i_1] [i_2] = ((/* implicit */short) ((max((((var_15) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) != (arr_2 [i_2])))))) * (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202))) ^ (var_7))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_19)) - (10399))))))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)32442)) >= (((/* implicit */int) var_5))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_19)))))))) > (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)36719)) && (((/* implicit */_Bool) (short)32432))))) / (min((((/* implicit */int) var_1)), (var_8)))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_16)) > (((/* implicit */int) var_1))))) | (((((/* implicit */int) var_14)) ^ (var_2)))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_14)))))) * (min((((/* implicit */unsigned long long int) var_19)), (var_10)))))));
}
