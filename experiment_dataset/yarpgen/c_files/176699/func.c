/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176699
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)60)))))));
                    arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)48)) && (((/* implicit */_Bool) (signed char)-48))));
                    arr_8 [i_0 + 1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)58)))))) ^ (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_6 [(signed char)7] [(signed char)7] [8LL] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 33776997205278720ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) <= (max((arr_6 [i_0 + 1] [(_Bool)1] [(short)9] [i_2]), (((/* implicit */unsigned long long int) var_8))))))), (arr_2 [i_2]))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [3ULL] [3ULL]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) max((min((max((15863894452990910574ULL), (((/* implicit */unsigned long long int) 4198907479U)))), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (((+(-2990693778051246629LL))) - (((((/* implicit */_Bool) var_4)) ? (-2990693778051246629LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
    var_18 += ((/* implicit */int) (((_Bool)0) ? (((/* implicit */long long int) 4198907493U)) : (((((/* implicit */_Bool) (~(2147483647)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22769))) : (-2990693778051246641LL)))));
}
