/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150338
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
    var_18 = ((/* implicit */signed char) (~(((18446744073709551601ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((/* implicit */int) arr_1 [i_0]))));
        var_20 = ((/* implicit */signed char) arr_0 [(signed char)10]);
        arr_2 [i_0] &= ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) arr_1 [i_0])) : (arr_0 [i_0]));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) > (18446744073709551587ULL)))) % (((/* implicit */int) arr_1 [i_0]))));
    }
    for (signed char i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), ((~(min((arr_4 [i_1] [i_1]), (min((28ULL), (((/* implicit */unsigned long long int) (signed char)50))))))))));
        var_23 = ((/* implicit */signed char) max((var_23), (((signed char) (~(((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) var_7)))))))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_17))));
    }
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(var_2))) ^ (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) == ((~(((/* implicit */int) var_12)))))))) : (((unsigned long long int) (signed char)30))));
}
