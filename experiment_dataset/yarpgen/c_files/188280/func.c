/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188280
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
    var_18 = ((/* implicit */unsigned char) var_0);
    var_19 = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned char)11)))) << (((((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned long long int) var_13)) : (13156365291632961202ULL))) - (10837182684458535303ULL))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_1 - 2])), (arr_6 [i_1 - 1])))) || (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(signed char)22]))) : (1338785069U))) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2])) << (((var_5) - (9413955423966162705ULL))))))))));
                    arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)133)) << (((((1338785069U) << (((((/* implicit */int) (signed char)-121)) / (((/* implicit */int) (unsigned short)59300)))))) - (1338785067U)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_2);
    var_22 = ((/* implicit */_Bool) (-(((((/* implicit */int) ((signed char) var_3))) | (((/* implicit */int) ((_Bool) var_11)))))));
}
