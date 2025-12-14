/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164978
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_8) > (((/* implicit */long long int) arr_2 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((var_12) ? (arr_3 [(signed char)7]) : (((/* implicit */int) var_4))));
        arr_5 [i_0] = ((/* implicit */unsigned char) var_12);
    }
    for (int i_1 = 4; i_1 < 23; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(short)8] [i_1 - 4])))))) ? (((((/* implicit */unsigned long long int) arr_6 [i_1])) * (var_2))) : (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) arr_6 [i_1]))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_6 [i_1]))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 23; i_2 += 2) 
        {
            var_14 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (var_7))) << (((((((/* implicit */long long int) var_11)) ^ (arr_9 [i_2]))) - (1354013679893485665LL)))));
            var_15 = ((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2]))))))));
        }
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1]))) < (var_2)));
    }
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_4))))), (var_7)))), (((((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) var_9))))) | (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
}
