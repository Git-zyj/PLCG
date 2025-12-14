/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17882
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
    var_14 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_8)) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) % (((/* implicit */unsigned long long int) var_4)))) | (((/* implicit */unsigned long long int) (+(((-1516685384) + (((/* implicit */int) (unsigned char)249)))))))));
    var_15 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (var_11)))) ? (((/* implicit */int) (((-(((/* implicit */int) (unsigned char)241)))) != (((((/* implicit */int) var_3)) % (((/* implicit */int) (unsigned char)236))))))) : (1325446828)));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0 - 3] = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)239));
                arr_5 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (70231305224192LL)))), (min((var_13), ((unsigned short)10754))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_5);
}
