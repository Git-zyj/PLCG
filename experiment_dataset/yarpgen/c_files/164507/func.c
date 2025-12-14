/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164507
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(9223372036854775807LL)))) - (max((((arr_0 [i_0]) + (((/* implicit */unsigned long long int) arr_1 [6LL])))), (((/* implicit */unsigned long long int) min((var_5), (arr_1 [i_0]))))))));
        var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) 16979709134444536314ULL)) || ((_Bool)1))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) > (16979709134444536289ULL))))))) : ((+(max((var_7), (arr_0 [(_Bool)1])))))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_17 = arr_1 [i_1];
        var_18 = ((/* implicit */signed char) min((((((/* implicit */long long int) -1228970165)) ^ (var_10))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min(((short)25771), (((/* implicit */short) arr_3 [i_1]))))))))));
        var_19 += ((/* implicit */unsigned char) (-(15690037993784772289ULL)));
        var_20 = ((/* implicit */unsigned short) (((+(arr_1 [i_1]))) / ((+(arr_1 [i_1])))));
        arr_4 [i_1] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))));
    }
    var_21 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) var_11)), (((1467034939265015326ULL) / (((/* implicit */unsigned long long int) 65535LL)))))), (((/* implicit */unsigned long long int) var_0))));
    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) 4845730105446893147ULL))))), (var_1)));
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)48), (min(((signed char)8), ((signed char)7))))))))))));
}
