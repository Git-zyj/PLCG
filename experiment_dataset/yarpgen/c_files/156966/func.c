/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156966
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) var_3))))), (min((((/* implicit */unsigned short) var_1)), ((unsigned short)45158)))))) || (((/* implicit */_Bool) var_9)))))));
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 5108080884669305389LL)) ? (16777216) : (((/* implicit */int) (unsigned char)83)))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)35970)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) == (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (-1876281938))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2)))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_1 [i_0]))))) - (var_5)));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_1 [8]))));
        var_15 = 1876281943;
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) >> (((/* implicit */int) var_1))));
    }
    for (int i_1 = 3; i_1 < 9; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) var_5);
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_4 [i_1 - 3] [i_1 + 1])) : (var_8)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 + 1])))) : (((/* implicit */int) ((((/* implicit */int) ((arr_5 [(unsigned short)9]) && (((/* implicit */_Bool) arr_1 [7U]))))) == (((/* implicit */int) var_2)))))));
    }
}
