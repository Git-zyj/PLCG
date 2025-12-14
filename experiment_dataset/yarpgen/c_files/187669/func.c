/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187669
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
    var_12 = ((/* implicit */unsigned long long int) var_9);
    var_13 = ((/* implicit */_Bool) var_10);
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : ((((~(((/* implicit */int) (short)-18016)))) ^ (((/* implicit */int) var_8)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_6 [i_2 + 2] [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) (unsigned short)10419)) <= (((/* implicit */int) ((unsigned short) 1373511169))))));
                    var_15 *= ((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]);
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */signed char) var_0);
}
