/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141498
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
    var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)32177)))), (((((/* implicit */int) var_11)) % (((/* implicit */int) var_15))))))) ? (((/* implicit */int) (((~(var_6))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))) : (-1865465699)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                arr_7 [i_0] [(unsigned short)9] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1]);
                var_17 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((5191549610073191906ULL) >> (((arr_1 [2LL]) - (285473003U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) > (((/* implicit */int) arr_6 [i_1] [i_1])))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
                var_18 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))), (arr_4 [i_1 + 2] [i_1 + 4])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))))))));
    var_20 = ((/* implicit */_Bool) var_3);
}
