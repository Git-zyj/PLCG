/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14557
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
    var_16 = ((/* implicit */unsigned short) max((((long long int) (+(var_5)))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_4)), (var_7)))) ? ((((_Bool)1) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) (short)4)))) : (((/* implicit */int) var_7)))))));
    var_17 = ((/* implicit */signed char) ((var_11) << ((((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6))))) - (18446744073709551614ULL)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)31))) & (arr_3 [8LL])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (var_1))) : (((/* implicit */int) max((arr_2 [i_0] [i_1] [i_1]), (arr_2 [8LL] [8LL] [i_1])))))))));
            var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)33045)) ? (var_13) : (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_0 [i_1] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1508194592)) ? (-1508194575) : (var_9)))))))));
            arr_5 [6] &= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [10LL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) : (arr_3 [10U])))), (var_6));
        }
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 3221225472U))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */long long int) var_11))))) ? ((-(arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
        var_22 = ((/* implicit */short) ((unsigned short) arr_3 [(unsigned char)6]));
    }
}
