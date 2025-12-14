/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171852
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) ((((unsigned long long int) (~(((/* implicit */int) (short)-1))))) >> (((max((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1] [i_1])) >> (((((/* implicit */int) arr_11 [i_0] [i_1] [i_2])) - (32083)))))), (max((((/* implicit */unsigned int) (short)-3764)), (arr_8 [i_1] [i_1] [i_1] [i_1]))))) - (4294963511U)))));
                    var_11 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0])) >> (((((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) - (13509)))));
                    arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) + (((/* implicit */int) ((arr_2 [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0])) && (var_2))))))))));
                    var_12 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-3741)), (var_5)))) ? (((unsigned long long int) (short)3760)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_11 [i_1] [i_1] [i_2]), (arr_11 [i_2] [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) - (((/* implicit */int) (_Bool)1))))) && ((!(((/* implicit */_Bool) 14261799392658817724ULL))))));
}
