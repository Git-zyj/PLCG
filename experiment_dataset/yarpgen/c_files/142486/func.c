/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142486
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
    var_12 = ((/* implicit */long long int) ((unsigned char) var_2));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((unsigned long long int) (signed char)-104))) ? (((/* implicit */int) arr_4 [i_0] [9] [(signed char)7])) : (((/* implicit */int) ((short) arr_2 [i_2] [i_1] [i_0 - 1]))))), (((/* implicit */int) ((_Bool) (_Bool)1)))));
                    arr_8 [i_0 - 2] [i_0] = ((/* implicit */_Bool) (-(18446744073709551615ULL)));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (unsigned short)65533)))))), (9223372036854775807LL))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_3);
    var_15 = ((/* implicit */long long int) (unsigned char)11);
}
