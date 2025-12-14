/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133306
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (((((/* implicit */_Bool) ((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) (short)-16315)) ? (var_2) : (var_1))) : (var_15)))));
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_5)) : (2147483647)))))), (var_3)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (~(var_18))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (11955870179557453833ULL)));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-2147483642)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-7425)))) : (((long long int) var_15))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_22 -= arr_4 [i_2];
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_7 [i_0] [i_0] [i_2] [i_2]))));
                    arr_11 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) (((+(arr_0 [i_0]))) << (((max((arr_0 [i_0]), (arr_0 [i_0]))) - (1150635813U)))))) : (((/* implicit */signed char) (((+(arr_0 [i_0]))) << (((((max((arr_0 [i_0]), (arr_0 [i_0]))) - (1150635813U))) - (1166693602U))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */int) var_0);
}
