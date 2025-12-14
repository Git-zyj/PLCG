/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170049
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) << (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)9516))))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) min(((unsigned short)9516), (((/* implicit */unsigned short) var_6))))) ^ (min((arr_5 [i_0]), (((/* implicit */int) arr_9 [i_0])))))));
                    arr_11 [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_0] [i_0])) || (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_0))))))), (arr_0 [i_0])));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (((-(((/* implicit */int) var_9)))) - (((/* implicit */int) var_6))))), (-8664711747453688096LL)));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
}
