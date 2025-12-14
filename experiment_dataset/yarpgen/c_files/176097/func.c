/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176097
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (arr_0 [i_0] [i_0]))))))) == (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (803635472) : (((/* implicit */int) (_Bool)0)))))));
        arr_2 [i_0] = ((/* implicit */short) min((min((var_1), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((long long int) var_11)))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)152)) || (arr_3 [i_1] [(_Bool)0]))))))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-20)) || (((/* implicit */_Bool) 10481622833459314974ULL))))))) : (((/* implicit */int) var_4))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 1680858206076642728LL)) ? (3735901828867978460ULL) : (((/* implicit */unsigned long long int) 2523002435U))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (~((~(var_6)))))) : (((((/* implicit */_Bool) ((unsigned int) arr_3 [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) ((int) var_2))) : (((1014097301229939416ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2016)))))))));
    }
    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), (var_5)));
}
