/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160324
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
    var_15 = ((/* implicit */unsigned char) var_8);
    var_16 = (unsigned char)141;
    var_17 = min((((/* implicit */short) (unsigned char)32)), ((short)658));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_18 = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (3650648199U))))))), ((unsigned char)0));
        var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) (short)658)), ((~(((/* implicit */int) arr_3 [i_0]))))));
        var_20 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)191))))), (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) 628340054U)))))), (((/* implicit */unsigned long long int) 1829411195U))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */int) arr_4 [i_0 + 1] [i_3]);
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114))) > (4294967295U))))))) + (((((((/* implicit */_Bool) 1877185741)) || (((/* implicit */_Bool) 1U)))) ? (max((((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2] [i_3])), (243028901U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)32)) & (((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_3] [i_2] [i_0])))))))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)58)))))))));
}
