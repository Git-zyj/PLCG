/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135716
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
    var_10 = ((/* implicit */unsigned int) var_6);
    var_11 = ((/* implicit */unsigned char) min((var_11), (var_3)));
    var_12 = ((/* implicit */long long int) min((min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (0ULL)))), ((short)(-32767 - 1)))), (((/* implicit */short) var_3))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((206434647) <= (((/* implicit */int) (short)32767))))), ((-(((((/* implicit */_Bool) 13292738432419137411ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34071))) : (623456641U)))))));
                    arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((562949953421311LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229)))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -1357971102)) <= (-2130537593429730019LL))))) * (((((/* implicit */_Bool) 0ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) 0U))))))));
                    arr_11 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (669732704U) : (0U)))), (((((/* implicit */_Bool) -2130537593429730019LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) : (0ULL)))));
                }
            } 
        } 
    } 
}
