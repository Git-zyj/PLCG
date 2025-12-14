/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162284
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)59599))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8128))) * (0LL)))) : (((((/* implicit */_Bool) min((10337432307018392096ULL), (((/* implicit */unsigned long long int) 387300542))))) ? ((+(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1721652261))))))))));
                arr_6 [i_0] [i_0] = (-(((/* implicit */int) (unsigned short)5948)));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_1 [i_0 - 1]));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_10);
    var_16 = ((/* implicit */unsigned char) var_14);
    var_17 = ((/* implicit */unsigned char) var_4);
    var_18 = (+(((/* implicit */int) var_5)));
}
