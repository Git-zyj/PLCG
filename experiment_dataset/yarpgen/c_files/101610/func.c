/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101610
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
    var_10 |= ((/* implicit */unsigned int) (unsigned short)65535);
    var_11 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = (unsigned short)65535;
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_13 -= ((/* implicit */unsigned long long int) 79112389U);
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)120)) < (min((((/* implicit */int) (unsigned char)0)), (var_0)))));
                        var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned short)9926), ((unsigned short)54492))))));
                        var_16 = ((/* implicit */unsigned long long int) var_0);
                    }
                } 
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */long long int) 2400682826710741696ULL);
    }
    var_17 = ((/* implicit */int) 79112389U);
}
