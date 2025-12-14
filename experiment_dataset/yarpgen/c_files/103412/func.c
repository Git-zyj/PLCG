/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103412
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
    var_11 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((var_8), (((/* implicit */short) var_10)))))) | (min((((/* implicit */long long int) var_9)), (var_1)))))), (min((((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)104)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) var_9);
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0] [11U]) ? ((~(((/* implicit */int) (unsigned short)28438)))) : (((((/* implicit */_Bool) (~(1189568258U)))) ? (((/* implicit */int) max(((unsigned short)28438), (((/* implicit */unsigned short) (signed char)126))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))))));
                    var_13 = ((/* implicit */signed char) min((((/* implicit */int) ((131071) <= (((/* implicit */int) (signed char)-46))))), (((((/* implicit */int) ((signed char) var_1))) + (-131045)))));
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_6))));
                }
            } 
        } 
    } 
}
