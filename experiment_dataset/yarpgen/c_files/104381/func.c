/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104381
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_18 = ((((/* implicit */_Bool) 3221225472U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (15360U));
        arr_4 [i_0] = ((/* implicit */short) ((var_9) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_5 [i_0] [(unsigned short)5] = ((/* implicit */long long int) max((((/* implicit */int) var_13)), ((((+(((/* implicit */int) arr_1 [i_0])))) % (((/* implicit */int) (unsigned short)37619))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 += ((/* implicit */unsigned short) (-(((max((((/* implicit */unsigned int) var_0)), (var_11))) * (var_11)))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_16))));
                    var_21 = ((/* implicit */unsigned long long int) var_16);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */int) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_15)))))) % (min((var_14), (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_0)))))))));
}
