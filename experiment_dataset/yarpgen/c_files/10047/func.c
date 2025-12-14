/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10047
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) var_11)))))) && (((/* implicit */_Bool) var_2))));
    var_18 = ((unsigned long long int) max((((((/* implicit */_Bool) -1626500899)) ? (7238432996122844068ULL) : (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) var_10))));
    var_19 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_3 [7ULL] = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) var_11)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)125)) & (arr_0 [i_0])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) & (18446744073709551596ULL)))))) ? (min(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) 4172353740U)))) : (((/* implicit */long long int) max(((-(arr_2 [i_0]))), (((/* implicit */unsigned int) (+(var_9)))))))));
        var_20 = ((/* implicit */unsigned char) arr_2 [11LL]);
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) 2466676551U))))), ((-(9223372036854775807LL))))) > (max((min((9223372036854775807LL), (((/* implicit */long long int) arr_5 [i_1])))), (((/* implicit */long long int) max((252380091U), (((/* implicit */unsigned int) (unsigned short)8)))))))));
        arr_8 [(signed char)1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_1])) + (2147483647))) << (((min((arr_2 [i_1]), (((/* implicit */unsigned int) arr_6 [i_1])))) - (694640140U)))));
    }
    var_21 = min((((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-59)))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))))), (min(((-(var_12))), (((/* implicit */unsigned int) 216804242)))));
}
