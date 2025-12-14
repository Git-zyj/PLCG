/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143130
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
    var_17 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_1] [i_0] [i_0])) ? (arr_5 [i_2 + 2] [i_2 + 2] [i_0] [i_0]) : (arr_5 [i_2 + 2] [i_1] [i_0] [i_2 - 1])))));
                    var_18 ^= ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) - (var_5)))) ? (((((/* implicit */_Bool) (signed char)24)) ? (11135449246778227439ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((arr_1 [(signed char)10]) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) (signed char)10);
}
