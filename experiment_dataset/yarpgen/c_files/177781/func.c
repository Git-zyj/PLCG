/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177781
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (short)-1);
                    var_14 *= ((/* implicit */short) -1);
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) min((((/* implicit */int) (short)-1)), (max((((/* implicit */int) (!(((/* implicit */_Bool) 411489502))))), (max((((/* implicit */int) (unsigned short)65535)), (611068207)))))));
    }
}
