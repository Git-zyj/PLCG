/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138291
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
    var_18 = ((/* implicit */signed char) var_16);
    var_19 = ((/* implicit */int) var_11);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [(signed char)7] [i_1] [i_1] = ((/* implicit */unsigned short) max((min((arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 2]), (arr_5 [i_1 - 2] [i_1 - 2] [i_1 + 1]))), ((-(arr_5 [i_1 - 2] [i_1 - 1] [i_1 - 2])))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) ((short) (short)1023))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((max((((/* implicit */unsigned long long int) 2165656801852477606LL)), (var_16))) > (((var_13) / (((/* implicit */unsigned long long int) arr_1 [i_0])))))) || (((/* implicit */_Bool) (signed char)110))));
                }
            } 
        } 
    } 
    var_21 = (~(min((max((var_8), (((/* implicit */unsigned int) var_7)))), (((unsigned int) var_12)))));
}
