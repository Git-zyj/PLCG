/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18035
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_11 *= ((/* implicit */unsigned char) ((((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)7))))) ^ (max((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_0)))))) <= (((/* implicit */long long int) min((((((/* implicit */int) (unsigned short)127)) ^ (((/* implicit */int) (unsigned char)32)))), (((/* implicit */int) (short)-5)))))));
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */long long int) ((/* implicit */int) (short)22))) : (arr_7 [i_0] [i_1] [i_0] [i_2]))) - (((/* implicit */long long int) max((134086656U), (((/* implicit */unsigned int) (_Bool)1)))))))) ? (min((min((((/* implicit */unsigned long long int) (signed char)1)), (var_9))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)65535)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)14)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)2)), ((unsigned short)65527)));
}
