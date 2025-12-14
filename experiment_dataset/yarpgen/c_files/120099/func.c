/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120099
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
    var_10 = ((/* implicit */_Bool) var_9);
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)47)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((arr_0 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((short) arr_0 [i_0]))), (arr_0 [i_0])));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_6 [i_0] = ((/* implicit */unsigned long long int) ((min((arr_1 [i_0]), (arr_1 [i_0]))) << (((arr_0 [i_0]) - (2346281704U)))));
        arr_7 [i_0] = ((/* implicit */unsigned int) max(((+(25769803776LL))), (((/* implicit */long long int) 0U))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 4; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_8 [i_1 - 4])));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            arr_14 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
            arr_15 [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (short)5899))))) - (((arr_8 [i_1]) - (((/* implicit */long long int) arr_12 [1U] [i_2] [i_2]))))));
            var_12 = ((/* implicit */signed char) (!((_Bool)1)));
        }
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8002388720692276872LL)) ? (((/* implicit */int) (signed char)0)) : (728242113)));
        arr_16 [i_1] = ((/* implicit */int) ((arr_8 [i_1 - 3]) != (var_8)));
    }
    for (unsigned int i_3 = 4; i_3 < 18; i_3 += 3) /* same iter space */
    {
        arr_21 [i_3] |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3 + 1]))) & (max((arr_9 [i_3] [i_3 - 4]), (((/* implicit */long long int) arr_19 [i_3 - 3]))))));
        arr_22 [i_3] [i_3] = (short)-5894;
    }
}
