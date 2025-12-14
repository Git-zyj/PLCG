/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103985
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
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) + (((/* implicit */int) min((var_5), (var_11))))))), (var_8)));
    var_18 = ((/* implicit */unsigned int) ((long long int) (((!(((/* implicit */_Bool) 2484240697U)))) ? (((long long int) var_1)) : (((/* implicit */long long int) (-(1810726599U)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
                    arr_7 [i_0] [(unsigned short)4] [(unsigned short)1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)9774))));
                    var_19 = ((/* implicit */long long int) 1810726599U);
                    var_20 = arr_3 [i_0] [i_0];
                    var_21 ^= ((/* implicit */unsigned int) var_4);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((-16LL) < (((/* implicit */long long int) ((/* implicit */int) min((var_16), (var_10)))))))), (((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)17530))))) - (((((/* implicit */long long int) ((/* implicit */int) var_14))) - (var_9)))))));
}
