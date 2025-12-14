/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130685
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
    for (signed char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) > (((/* implicit */int) arr_2 [i_0 - 1])))));
                    arr_11 [i_2 - 2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((var_3) ^ (((/* implicit */unsigned int) arr_4 [i_0 + 2] [i_2 + 1])))) << (((((unsigned int) arr_4 [i_0 + 2] [i_2 + 1])) - (577120160U)))));
                    arr_12 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (short)32767);
                    var_12 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)19));
                    arr_13 [i_2] = ((/* implicit */short) (~(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_2 [i_0 + 1]))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_1))));
    var_14 = ((/* implicit */signed char) (unsigned char)237);
    var_15 = ((/* implicit */unsigned short) (-(((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))));
}
