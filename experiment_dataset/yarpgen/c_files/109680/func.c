/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109680
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
    var_14 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned char) min((((var_4) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)57209)))), ((+(((/* implicit */int) arr_2 [i_0]))))));
        var_16 += ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)32768)), ((+(((/* implicit */int) var_4))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [7ULL] = ((/* implicit */unsigned short) (unsigned char)9);
                        arr_11 [i_3] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) min(((unsigned char)13), (arr_1 [i_0]))))) % (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned short) var_2)))))));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), ((+(((((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))) : (10993897047624058501ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) var_3)));
    var_19 = var_1;
}
