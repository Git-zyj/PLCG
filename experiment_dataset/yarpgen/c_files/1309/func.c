/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1309
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
    var_19 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))) + (((/* implicit */int) (short)7936)))) | (((/* implicit */int) var_17))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_20 -= ((/* implicit */short) ((((/* implicit */int) ((short) (-(((/* implicit */int) var_13)))))) + (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_21 *= ((/* implicit */unsigned int) min((((((_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) (signed char)89)))) : (((/* implicit */int) max(((signed char)-29), (((/* implicit */signed char) var_15))))))), (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_3 [(unsigned char)4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            var_22 = ((((/* implicit */_Bool) (signed char)-8)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_4 [i_1] [i_1])))) : (((arr_1 [19LL] [19LL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18061))) : (4294967292U)))) != (((var_11) - (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_2 - 2])))))))));
            var_23 = ((/* implicit */unsigned int) ((unsigned long long int) var_11));
            arr_8 [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_0 [i_1])) & (((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned long long int) 1048575)) : (13327983079725968043ULL)))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_2 - 1] [i_2 - 2]) ? (((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_2 [i_2 - 2] [i_2 - 3]))))) ? (((((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 3])) + (((/* implicit */int) var_18)))) : (((/* implicit */int) max((arr_2 [i_2 - 3] [i_2 + 1]), (arr_2 [i_2 - 2] [i_2 + 1]))))));
        }
        arr_10 [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
    }
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_24 = ((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_3] [i_3])), (((((/* implicit */int) arr_1 [i_3] [i_3])) | (((/* implicit */int) arr_1 [i_3] [i_3]))))));
        arr_14 [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_12))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (((/* implicit */int) var_15)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3]))) | (var_11)))));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_15))));
        arr_15 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_8), (((/* implicit */unsigned char) arr_1 [i_3] [i_3]))))) <= (((/* implicit */int) arr_1 [i_3] [i_3]))));
    }
    var_26 = ((/* implicit */short) min((var_11), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((var_3), (var_10)))), (min((-568810947), (((/* implicit */int) var_14)))))))));
    var_27 = var_3;
}
