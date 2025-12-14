/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135365
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
    var_11 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) min((var_7), (var_3)))) ? (((1073741823U) % (3221225488U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) max((max((((/* implicit */unsigned int) (short)14946)), (4294967295U))), (max((((/* implicit */unsigned int) var_4)), (3221225472U)))))) : (((((/* implicit */_Bool) min((var_2), ((unsigned short)65535)))) ? (8622989877105243400LL) : (((/* implicit */long long int) 0U))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_4 [i_0] [(unsigned short)11] = ((/* implicit */signed char) ((unsigned int) arr_1 [i_0] [i_0]));
        arr_5 [2] = ((/* implicit */signed char) arr_1 [(signed char)12] [i_0]);
    }
    for (long long int i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (~(((((/* implicit */int) arr_2 [i_1 - 2] [i_1])) - (((/* implicit */int) arr_2 [i_1 + 2] [i_1])))))))));
        arr_10 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~((~(arr_9 [i_1])))))), (min(((~(arr_6 [(short)3]))), (((/* implicit */long long int) 1073741823U))))));
        var_15 = ((/* implicit */unsigned char) 755886961U);
        arr_11 [10U] = ((/* implicit */int) min(((~(max((((/* implicit */unsigned int) (signed char)-115)), (var_8))))), (max((((/* implicit */unsigned int) (short)14946)), (min((arr_7 [i_1 - 2]), (4294967295U)))))));
        var_16 = ((/* implicit */int) var_7);
    }
}
