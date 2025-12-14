/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150543
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
    var_14 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (6042034325798900524LL) : (-6042034325798900545LL)))))))));
    var_15 += ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) + (66060288U)))), (var_9)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_16 *= ((/* implicit */unsigned long long int) var_7);
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 4228907008U))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) >= (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_13)))))))) : (((/* implicit */int) (short)(-32767 - 1)))));
                }
            } 
        } 
    } 
}
