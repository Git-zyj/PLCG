/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136033
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (min((var_9), (((/* implicit */unsigned int) var_7))))))) ? (max((min((var_3), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) var_1))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)10150)) ? (((/* implicit */int) arr_2 [(unsigned short)2] [(unsigned short)2] [i_0])) : (var_8)))))) ? (((((/* implicit */_Bool) arr_4 [i_2 + 3])) ? (((/* implicit */int) ((_Bool) (unsigned short)44675))) : (837503220))) : (((/* implicit */int) (_Bool)1))));
                    var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_9)), ((((!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))) ? (((((/* implicit */_Bool) (unsigned short)26658)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1] [i_2]))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (arr_1 [i_0] [i_1])))))))));
                    arr_6 [i_1] = (_Bool)1;
                    var_14 = ((/* implicit */_Bool) max((arr_4 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_2 - 1])) - (((/* implicit */int) (unsigned short)4510)))))));
                }
            } 
        } 
    } 
    var_15 = ((int) var_1);
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned long long int) ((long long int) var_7))) : (((((/* implicit */_Bool) var_7)) ? (7762354235923107585ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-79)), (var_4))))));
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (signed char)79)))))), (var_4)));
}
