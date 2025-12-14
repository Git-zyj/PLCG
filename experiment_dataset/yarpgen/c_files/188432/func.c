/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188432
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
    var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((signed char) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */int) (unsigned short)13911)))))))) : (((/* implicit */int) (_Bool)1))));
    var_15 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3079079854469219791LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)13913))))))) + (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51636))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_16 &= arr_0 [i_0];
                    arr_6 [i_0] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((unsigned int) ((_Bool) (unsigned short)7754)));
                    arr_7 [7ULL] [i_2] [i_2] [8U] = ((/* implicit */int) arr_2 [i_1] [i_0]);
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */long long int) 751067799)) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [(short)0] [1LL])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)207))))) : (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))))));
                }
            } 
        } 
    } 
}
