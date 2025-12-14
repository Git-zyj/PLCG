/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126322
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
    var_10 |= ((-17) | (((/* implicit */int) var_9)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2 + 2] [i_2] = ((/* implicit */unsigned long long int) max(((~(((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) var_5))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [2] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_0 [i_0] [i_0])))))))));
                    arr_8 [(unsigned short)3] [i_2] [i_0] = -31;
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), (var_9))))) : (var_3)))) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2 + 4])) ? (((/* implicit */int) var_9)) : (arr_2 [i_2 + 2] [i_2] [i_2 + 4]))) : (((/* implicit */int) ((_Bool) max((((/* implicit */long long int) 1730241220U)), (arr_0 [i_1] [i_0])))))));
                    arr_9 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) var_1);
                    arr_10 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) arr_2 [i_2 + 2] [i_2 + 4] [i_2 - 1])) - (arr_0 [i_2] [i_0])));
                }
            } 
        } 
    } 
}
