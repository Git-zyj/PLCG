/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127530
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
    var_17 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [2U] [i_2] = ((/* implicit */unsigned short) (-((+(arr_4 [i_0 + 1])))));
                    arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_0] [i_0 - 1])), (((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (unsigned char)11))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-67)) ? (1452632908205627288LL) : (((/* implicit */long long int) -2043994085))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)190))))) : ((-(-7202236948093028632LL))))))));
                    var_18 *= ((/* implicit */unsigned char) (~(arr_5 [i_2])));
                }
            } 
        } 
    } 
}
