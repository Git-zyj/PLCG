/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111395
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
    var_10 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((-5627876274907818259LL) & (((/* implicit */long long int) 3816580282U))))) ^ (var_6)));
                var_12 = ((/* implicit */unsigned long long int) ((((-5627876274907818259LL) ^ (((/* implicit */long long int) arr_0 [i_0 + 1])))) > (((/* implicit */long long int) min((arr_2 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned int) var_9)))))));
                var_13 = ((/* implicit */long long int) (+((+(var_6)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (short)18424);
}
