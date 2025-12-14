/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152620
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)25151)) : (var_12)));
    var_14 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24312)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25151))) : (1024966546071614298LL)))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_6))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1258)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_15 = var_4;
                    arr_7 [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) max(((short)20875), (((/* implicit */short) var_3))))), (((((/* implicit */_Bool) var_1)) ? (arr_6 [i_2] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_2])))))));
                    var_16 = ((/* implicit */unsigned char) var_4);
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_1 [i_1]) : (arr_4 [i_2])))))))) : (min((((((/* implicit */long long int) ((/* implicit */int) var_1))) + (arr_2 [i_2]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))));
                }
            } 
        } 
    } 
}
