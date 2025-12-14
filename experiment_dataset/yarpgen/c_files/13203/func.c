/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13203
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
    var_12 = var_10;
    var_13 -= ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_5)) + (((/* implicit */int) (unsigned short)58337)))), (((((/* implicit */_Bool) 1516823486)) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) (_Bool)0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_1 + 1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
                        arr_10 [(unsigned short)8] [(unsigned short)8] [i_2] [i_0] = ((/* implicit */unsigned int) ((int) (_Bool)1));
                    }
                } 
            } 
        } 
        var_14 = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_4 [i_0])));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_0 [(signed char)11] [i_0]))));
    }
}
