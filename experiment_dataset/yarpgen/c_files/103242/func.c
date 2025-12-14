/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103242
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
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_16)), (var_13)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_4 [i_0] [(signed char)13] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) >> (((min((((/* implicit */unsigned int) (signed char)-16)), (arr_5 [i_0 + 2] [i_1] [i_2]))) - (3052653885U)))))));
                    arr_6 [i_1] = ((/* implicit */short) arr_5 [(signed char)3] [i_1] [i_1]);
                }
            } 
        } 
    } 
}
