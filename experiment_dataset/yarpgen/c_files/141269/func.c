/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141269
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
    var_10 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((int) (signed char)0))) ^ (min((var_8), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) > (((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) var_1)))))))))));
    var_11 *= ((/* implicit */unsigned int) var_3);
    var_12 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 &= ((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 + 1]);
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_1])) ? (max((((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_0 [i_1 + 3])))) : (((/* implicit */unsigned long long int) ((((_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                arr_7 [i_0] [i_0] [7ULL] = ((/* implicit */signed char) (unsigned short)62703);
                arr_8 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) arr_0 [i_0 + 1]);
                var_15 = ((/* implicit */_Bool) (~(var_7)));
            }
        } 
    } 
}
