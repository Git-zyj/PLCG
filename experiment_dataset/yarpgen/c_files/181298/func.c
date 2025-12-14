/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181298
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_14 |= ((/* implicit */short) (+(max(((+(arr_5 [i_0] [i_1 + 1]))), (((/* implicit */unsigned int) ((var_0) - (((/* implicit */int) arr_7 [i_0])))))))));
                        var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_1 + 1] [i_2]))))), ((-(var_7)))));
                        var_16 = min(((-(min((((/* implicit */unsigned long long int) (signed char)63)), (var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [9])) ? (((/* implicit */int) (signed char)63)) : (765512891)))));
                    }
                } 
            } 
        } 
        var_17 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned int) (-(1866882916)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_4 [i_0] [i_0])) + (21786)))))));
        arr_10 [i_0] = ((/* implicit */unsigned char) (-(((int) (signed char)-60))));
    }
    var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) (signed char)-98)), (765512866)))) / (var_5)));
    var_19 = ((/* implicit */signed char) min((((var_1) ? (((/* implicit */unsigned int) (+(2146435072)))) : (min((var_8), (((/* implicit */unsigned int) var_11)))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) & ((-(((/* implicit */int) var_1)))))))));
}
