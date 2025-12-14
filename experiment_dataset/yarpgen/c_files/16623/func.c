/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16623
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
    var_17 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (max((((/* implicit */unsigned long long int) var_9)), (var_14))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_8)), (var_12))) <= (var_3)))) : (((/* implicit */int) ((((var_1) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) >= (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8191))) + (arr_5 [i_2]))))))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (+((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1])))));
                    var_19 = ((/* implicit */int) (-(min((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_0] [i_0])), (var_11)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_4);
}
