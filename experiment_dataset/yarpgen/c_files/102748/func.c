/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102748
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) 791668839U)), (var_3)))))) ? (((((var_3) << (((((((/* implicit */int) (signed char)-97)) + (138))) - (41))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) -1415910537308055418LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)230))))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_15 = (-(((/* implicit */int) ((((/* implicit */_Bool) ((short) (signed char)-1))) && (((/* implicit */_Bool) min((var_5), (((/* implicit */signed char) var_7)))))))));
    var_16 = ((/* implicit */long long int) (short)32766);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_1 [(unsigned char)8] [i_0]) + (2147483647))) >> (((var_6) - (1019050457)))))) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) var_12)))))));
        var_18 = ((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 1]);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_0 [i_0]))))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) & (3503298456U)))));
        var_20 = ((/* implicit */unsigned char) (-((~(max((((/* implicit */unsigned int) var_12)), (var_11)))))));
        var_21 *= ((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))))));
    }
    for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        arr_4 [i_1 + 1] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(((((/* implicit */int) arr_3 [6ULL] [6ULL])) / (((/* implicit */int) var_5)))))) : (((/* implicit */int) (signed char)127)));
        var_22 += (-((~(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)0)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536870911)) ? (229509533) : (((/* implicit */int) (signed char)-10))))) && (((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_1)), (var_0))), (((/* implicit */unsigned long long int) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_12)))))))))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)18446)) != (((/* implicit */int) (signed char)7))))) + (((/* implicit */int) ((unsigned char) arr_0 [i_2]))))))));
    }
    var_24 = ((/* implicit */signed char) var_2);
}
