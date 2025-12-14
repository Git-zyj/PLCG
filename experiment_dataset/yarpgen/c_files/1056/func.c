/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1056
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
    var_13 = var_12;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) (((~(1677689388U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                var_15 *= ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (short)-6733)) != (((/* implicit */int) arr_1 [i_0 - 1]))))), (((((/* implicit */_Bool) max((1414590772), (1414590772)))) ? ((~(-530010072))) : (((/* implicit */int) arr_4 [i_1 + 1] [i_0 + 1]))))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((1391889368), (((/* implicit */int) (signed char)-90))))) ? (((((/* implicit */_Bool) 12233252481111813777ULL)) ? (-1391889375) : (1391889375))) : (((/* implicit */int) min((arr_5 [i_1] [i_1 + 1] [i_1]), (((/* implicit */unsigned char) arr_2 [i_1] [i_1 - 2])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        for (long long int i_3 = 3; i_3 < 20; i_3 += 4) 
        {
            for (unsigned int i_4 = 1; i_4 < 20; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */long long int) min(((-(var_10))), ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)58793))))))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_3 + 2] [i_4]))) & (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-25923)))))))));
                    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)55)) << (((530010081) - (530010066)))))))) ? (((arr_9 [i_2 + 2]) ? (((/* implicit */int) arr_4 [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) max((arr_2 [i_2] [(unsigned short)15]), ((signed char)-20)))))) : (((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) (short)25935);
}
