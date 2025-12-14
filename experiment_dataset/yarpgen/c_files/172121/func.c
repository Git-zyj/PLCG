/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172121
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
    var_17 = ((/* implicit */unsigned long long int) ((long long int) var_12));
    var_18 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0])), (((((/* implicit */_Bool) var_13)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-112)))))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_4)))))) : (min((((/* implicit */unsigned long long int) (signed char)-112)), (max((var_12), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
        var_20 = 1639501497583289989ULL;
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_21 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [i_1])), (arr_1 [i_1] [i_1])))) % (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (arr_3 [i_1])))));
        var_22 -= max((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (3542504081U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_5 [0ULL] [0ULL]))))))))), (14421180508432417736ULL));
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_5 [i_2] [i_2])), (arr_2 [i_2])))), (arr_6 [i_2] [i_2])));
        arr_10 [(signed char)0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2672395413805173876LL)) && (((/* implicit */_Bool) max((arr_6 [i_2] [i_2]), (arr_6 [i_2] [i_2]))))));
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) arr_12 [i_3] [i_3])))))) * (((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (arr_12 [i_3] [i_3]) : (arr_12 [i_3] [i_3])))));
        var_24 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_3]))));
        var_25 = ((/* implicit */signed char) ((((unsigned long long int) var_5)) != (((/* implicit */unsigned long long int) arr_0 [(signed char)6]))));
    }
}
