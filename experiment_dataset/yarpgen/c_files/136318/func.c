/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136318
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)43))));
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) (-(((unsigned int) var_9)))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        for (unsigned short i_2 = 4; i_2 < 12; i_2 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2451722525087696138LL)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (_Bool)1))))))))));
                var_12 = ((/* implicit */unsigned int) arr_0 [i_1]);
                arr_9 [i_1] = ((/* implicit */unsigned short) ((signed char) (+(max((2047271666), (((/* implicit */int) arr_0 [i_1])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((var_6) < (((/* implicit */unsigned long long int) 4499201580859392LL))));
}
