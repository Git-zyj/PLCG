/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156662
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_6 [(short)0] [i_0] = ((/* implicit */int) 259513339216020097ULL);
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */short) 1729382256910270464ULL);
                    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)32767))));
                    arr_8 [i_2] [i_1] [i_1] [8U] = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) - (((((((/* implicit */int) var_0)) + (2147483647))) << (((((unsigned long long int) var_10)) - (3294997434ULL)))))));
                    var_18 *= (+(18187230734493531518ULL));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) (-(var_11)));
}
