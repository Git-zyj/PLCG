/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117126
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
    var_11 = ((/* implicit */unsigned char) ((var_4) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (~(var_2)))) : ((+(var_7))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 = 9223372036854775803LL;
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [i_0]))));
                    var_14 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 2]))), (((/* implicit */unsigned int) ((_Bool) arr_1 [i_0 - 3])))));
                    var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_2]))) ? (max((arr_0 [i_0 - 3] [i_2]), (((/* implicit */unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) ((arr_2 [i_0 - 1]) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                    arr_6 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) max((((unsigned int) ((((/* implicit */_Bool) 3501401715U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (2U)))), (((/* implicit */unsigned int) (short)-1))));
                }
            } 
        } 
    } 
}
