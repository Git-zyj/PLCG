/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127193
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
    var_12 = ((/* implicit */unsigned short) ((max((var_4), (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) % (((/* implicit */unsigned long long int) var_11))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) min((((unsigned short) arr_1 [i_0])), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((signed char) 2147483645))), (max(((unsigned char)255), (((/* implicit */unsigned char) arr_6 [i_1] [i_1])))))))));
                arr_7 [i_0] &= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) (short)-22389)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((_Bool) (unsigned char)203))), ((unsigned short)65535))))));
                var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                arr_8 [(_Bool)1] [i_1] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >> (((((/* implicit */int) max((arr_1 [i_1]), ((signed char)8)))) - (71))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_11);
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(18446744073709551599ULL))))));
}
