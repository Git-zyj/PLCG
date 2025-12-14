/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102918
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
    var_15 = ((((/* implicit */int) (unsigned char)148)) + (((/* implicit */int) min((max(((short)-15078), (((/* implicit */short) var_14)))), (((/* implicit */short) max((var_14), (var_3))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)15066)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (min((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)15077))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-15078)) : (((/* implicit */int) (short)15072)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) (~(arr_6 [i_1] [i_0])));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [(unsigned char)3])) ? (((/* implicit */unsigned long long int) min((arr_6 [i_0] [i_0]), (var_9)))) : (((unsigned long long int) arr_6 [i_0] [i_0])))));
                }
            } 
        } 
    } 
}
