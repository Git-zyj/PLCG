/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149975
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
    var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 12301013796667505847ULL)) ? (12887300684473604192ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))))), (min((var_3), (((/* implicit */unsigned long long int) var_7))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [(unsigned short)8] [i_1] = ((/* implicit */signed char) ((((((/* implicit */long long int) 1203538083U)) - (arr_3 [i_1 + 1]))) != (((/* implicit */long long int) ((/* implicit */int) (((-(arr_2 [i_0]))) > (((/* implicit */unsigned long long int) arr_1 [i_1 - 2] [i_1 + 2]))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(var_0)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((int) (_Bool)0))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))));
            }
        } 
    } 
}
