/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171419
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [16LL] [i_0 - 1] &= ((/* implicit */_Bool) var_4);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1]))))));
                        var_17 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_3]);
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0))))))))) == ((+(10240709263550691598ULL)))));
}
