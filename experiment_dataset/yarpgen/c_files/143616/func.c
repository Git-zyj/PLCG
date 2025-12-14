/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143616
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
    var_13 = ((/* implicit */_Bool) var_2);
    var_14 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (3ULL) : (var_8)))) ? (18446744073709551611ULL) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_4)) : (18446744073709551611ULL))))));
    var_15 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31269)) ? (((/* implicit */unsigned long long int) -1496737873)) : (13368698030045615447ULL))))));
                arr_7 [i_1] [i_0] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 14972744544110431245ULL)))) / (arr_3 [i_0] [0])));
                var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) min(((+(var_9))), (((/* implicit */unsigned int) min((((/* implicit */short) (signed char)-22)), ((short)-5777))))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_2 [16LL] [i_1])) ? (arr_4 [i_0 + 1]) : (((/* implicit */long long int) 1945927690)))) : (min((var_4), (arr_4 [i_1])))))));
            }
        } 
    } 
}
