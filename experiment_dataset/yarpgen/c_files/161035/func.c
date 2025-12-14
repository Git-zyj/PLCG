/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161035
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
    var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) (unsigned char)225)))))));
    var_16 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) % (2615600198U)));
                    var_18 = ((/* implicit */unsigned char) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [7LL] [i_2 - 1] [i_2 + 1])) && (((/* implicit */_Bool) var_7))))))));
                    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_13)))))), ((+(((1802378051U) << (((2492589244U) - (2492589234U)))))))));
                }
            } 
        } 
        arr_6 [i_0] [i_0] = ((/* implicit */signed char) var_3);
        var_20 = ((/* implicit */long long int) (-((-(((/* implicit */int) max((((/* implicit */short) arr_3 [i_0])), ((short)24395))))))));
        var_21 = ((/* implicit */signed char) var_5);
        var_22 = var_12;
    }
    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_23 = ((/* implicit */short) min((((1802378026U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_3])))))));
        var_24 = arr_7 [i_3];
    }
}
