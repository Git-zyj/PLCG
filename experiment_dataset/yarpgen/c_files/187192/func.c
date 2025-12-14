/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187192
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
    var_10 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((var_0), (((/* implicit */unsigned long long int) var_2)))), (9398935787673593486ULL)))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_0))))) : (((/* implicit */int) var_5)))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) var_2);
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */_Bool) ((var_4) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))) : (((((/* implicit */_Bool) (short)-22381)) ? (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])) : (9047808286035958129ULL)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (10949422091823872156ULL)))))) ? (((/* implicit */unsigned long long int) (+(var_9)))) : (((unsigned long long int) var_6))));
                        var_14 = ((/* implicit */short) (~((-(arr_4 [i_0] [(unsigned char)6])))));
                        arr_11 [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    }
                } 
            } 
        } 
    }
}
