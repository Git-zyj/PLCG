/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168611
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [(signed char)8])) : (((/* implicit */int) (_Bool)1))))) == (max((((/* implicit */unsigned long long int) var_2)), (var_3))))))));
                    arr_8 [i_0] = ((/* implicit */unsigned char) ((long long int) arr_5 [i_2 - 1] [i_0]));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_2 - 2])) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) : (arr_0 [i_0] [(short)3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [2U]))))))))));
                }
            } 
        } 
    } 
    var_16 = ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), ((-(((/* implicit */int) var_4))))))) ? ((-(var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((var_1) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1052)))))))));
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
}
