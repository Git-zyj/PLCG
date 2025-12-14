/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157982
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
    var_18 = ((/* implicit */unsigned char) (signed char)-41);
    var_19 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (arr_1 [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_13)) : (var_1)))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) min((var_8), (((/* implicit */short) (signed char)-50))))) : (((((((/* implicit */int) (short)9065)) & (arr_1 [i_0]))) >> (((min((arr_3 [i_1 - 1] [i_0] [(signed char)10]), (arr_0 [i_0] [(signed char)19]))) + (1892754559)))))));
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */signed char) min((max((((/* implicit */short) (signed char)107)), (var_4))), (((/* implicit */short) arr_2 [i_1]))));
                var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_2 [i_0]))))));
            }
        } 
    } 
}
