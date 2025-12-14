/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136854
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
    var_17 -= ((/* implicit */unsigned char) (~(var_0)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [(unsigned char)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned long long int) min(((unsigned char)67), (((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_1])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (short)-21295))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21294))))))));
                var_18 = ((/* implicit */unsigned short) (short)-19373);
                arr_6 [i_0] = ((int) min((min((-109523872), (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))), (((((/* implicit */int) arr_0 [i_1])) & (((/* implicit */int) (short)21294))))));
            }
        } 
    } 
}
