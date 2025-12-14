/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111151
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
    var_17 = var_4;
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) != ((~(((/* implicit */int) (short)-25640))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((arr_0 [i_2]), (((/* implicit */unsigned long long int) 1373726381)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (var_15))))))) && (((/* implicit */_Bool) var_9))));
                    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((var_1) != (((/* implicit */long long int) var_4))))), ((~(212197693))))))));
                    arr_9 [i_0 - 1] [i_1 + 1] [i_2 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (699000784U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))))));
                }
            } 
        } 
    }
    var_19 -= ((/* implicit */signed char) var_7);
    var_20 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) > (var_7)));
    var_21 = ((/* implicit */signed char) (+(var_7)));
}
