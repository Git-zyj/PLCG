/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163178
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
    var_12 = ((/* implicit */unsigned long long int) var_7);
    var_13 ^= ((/* implicit */signed char) ((((/* implicit */int) (short)0)) % (((/* implicit */int) (unsigned char)255))));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_2))));
    var_15 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))), (var_11)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] = ((/* implicit */long long int) var_3);
                    var_16 = ((/* implicit */_Bool) (+(min((arr_2 [i_1] [i_1 + 1] [i_1 - 1]), (arr_2 [i_1] [i_1 + 1] [i_1 - 1])))));
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_4);
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) ((short) var_4))))))));
                    arr_8 [i_1] [i_0] = max((((((((/* implicit */_Bool) (unsigned short)41637)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_1]))) >= (((((/* implicit */long long int) ((/* implicit */int) var_9))) & (-27LL))))), (arr_3 [i_0] [i_1 - 1] [i_1 - 1]));
                }
            } 
        } 
    } 
}
