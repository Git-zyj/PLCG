/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119181
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
    var_19 = ((/* implicit */unsigned char) (~(var_4)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 |= ((/* implicit */int) arr_3 [i_0]);
                    var_21 = (+((((-(((/* implicit */int) arr_3 [(unsigned short)5])))) + (((-1262024546) - (((/* implicit */int) (_Bool)1)))))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2]))))) + (((((/* implicit */_Bool) (unsigned short)50968)) ? (min((((/* implicit */unsigned long long int) (unsigned short)50968)), (16694589440704450434ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6537)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((var_4), (((((var_10) * (var_13))) * (((/* implicit */unsigned long long int) (+(var_8))))))));
}
