/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180972
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_1] [i_0] = arr_7 [i_1] [i_2];
                    var_12 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 + 1])))) ? (((arr_2 [i_1 - 1]) ^ (arr_2 [i_1 - 1]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102))) : (arr_2 [i_1 - 1])))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)153)) % (((/* implicit */int) var_3))))) % (((unsigned long long int) var_3))))) ? ((~(((((/* implicit */int) var_8)) << (((((/* implicit */int) (unsigned char)153)) - (131))))))) : (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) var_4)), (var_5)))))));
    var_14 |= ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57487)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) ? (min((((/* implicit */unsigned long long int) var_4)), (var_10))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_11)) : (var_10))))), (((/* implicit */unsigned long long int) var_6))));
}
