/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149136
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
    var_17 = ((/* implicit */signed char) var_13);
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            arr_5 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_0);
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)-9)))), (2147483647)))) ? ((+(max((((/* implicit */long long int) 12U)), (arr_4 [i_0] [i_1]))))) : (((/* implicit */long long int) 0))));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(((arr_2 [i_1 - 2] [i_0 + 1]) | (((/* implicit */long long int) ((((/* implicit */int) (signed char)17)) | (((/* implicit */int) (signed char)29))))))))))));
            var_19 *= ((/* implicit */_Bool) ((unsigned short) (~(1663242196U))));
        }
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (!(arr_3 [i_0] [i_0] [(signed char)20]))))));
        arr_7 [i_0] [i_0] = (+((+(((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-23499))) : (arr_4 [i_0] [i_0]))))));
    }
    for (long long int i_2 = 1; i_2 < 20; i_2 += 4) /* same iter space */
    {
        var_21 = (-(min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)2))))), (arr_2 [i_2] [i_2 - 1]))));
        var_22 = ((/* implicit */long long int) ((((_Bool) min((((/* implicit */int) (_Bool)1)), (var_16)))) ? (((/* implicit */int) (signed char)2)) : (((((/* implicit */_Bool) min((arr_1 [i_2]), (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) ((_Bool) arr_8 [i_2] [i_2 - 1]))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))))));
    }
    for (long long int i_3 = 1; i_3 < 20; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_3])) ? (min((arr_12 [i_3]), (((/* implicit */long long int) (+(2147483647)))))) : (min((max((arr_12 [i_3]), (((/* implicit */long long int) arr_11 [i_3] [i_3])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_3] [i_3])))))))));
        var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_11 [i_3] [i_3 + 1]), (var_0))))));
    }
}
