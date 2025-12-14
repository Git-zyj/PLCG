/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107691
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
    var_16 += ((/* implicit */unsigned char) var_13);
    var_17 += ((/* implicit */unsigned int) min((var_6), (((/* implicit */short) ((((/* implicit */unsigned long long int) var_1)) <= (min((var_5), (((/* implicit */unsigned long long int) (unsigned char)99)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) arr_2 [i_0] [i_0 - 3]))))) % (arr_1 [i_0 + 3]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)4757)))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0 + 4]))) + (min((((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45691))))), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 - 3]))))));
    }
    var_20 = ((/* implicit */unsigned long long int) var_11);
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)54)) || (((/* implicit */_Bool) var_8))))))))))));
}
