/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120265
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? ((+(((((/* implicit */_Bool) 2815424929U)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)1)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)2))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 1135016343)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] [i_0] [i_0] = ((((/* implicit */int) (unsigned short)6)) < (((/* implicit */int) (unsigned short)1)));
                    var_21 = ((/* implicit */int) ((long long int) -6393778410502266649LL));
                    var_22 = ((/* implicit */long long int) max((var_22), (arr_4 [i_0] [i_0])));
                }
            } 
        } 
    } 
}
