/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123729
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
    var_13 = ((((/* implicit */int) (signed char)-19)) * (((/* implicit */int) (_Bool)1)));
    var_14 = ((/* implicit */unsigned int) ((var_3) ? (var_5) : (((/* implicit */int) max((var_6), ((_Bool)1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((arr_2 [i_0] [2U]), (arr_2 [i_0] [i_0]))) ? ((-(arr_8 [i_0] [(unsigned short)2] [i_1] [i_2]))) : (min((((/* implicit */unsigned long long int) var_5)), (arr_5 [i_0])))))) ? (min((arr_8 [i_0] [i_1] [0LL] [i_2]), (arr_8 [i_0] [i_1] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((arr_7 [i_2] [i_0] [i_0]) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)69)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)42))))))))));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) (unsigned char)143)), (7U)))))));
                }
            } 
        } 
    } 
}
