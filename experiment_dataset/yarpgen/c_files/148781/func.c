/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148781
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_16 &= max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) == ((~(0U)))))), (min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)0))))), (max((-1LL), (((/* implicit */long long int) (short)-24111)))))));
                arr_4 [i_1] [i_0] = ((/* implicit */_Bool) ((long long int) min((-1LL), (((/* implicit */long long int) arr_1 [i_1] [i_0])))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (min((max((((/* implicit */long long int) (unsigned short)0)), (var_2))), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) var_7))));
}
