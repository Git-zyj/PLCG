/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164751
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6478158655373154989LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1073741823U)))) : (((((/* implicit */_Bool) ((3221225484U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22695)))))) ? (((((/* implicit */_Bool) 14070288769649032033ULL)) ? (11258552082092036662ULL) : (((/* implicit */unsigned long long int) -7764102252185733967LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)22695)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 *= ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((long long int) (_Bool)0))) + (min((arr_0 [i_1]), (((/* implicit */unsigned long long int) var_14)))))), (max((arr_0 [i_0 + 2]), (((/* implicit */unsigned long long int) min((1073741823U), (((/* implicit */unsigned int) var_14)))))))));
                var_18 -= max((((/* implicit */unsigned long long int) (~(2393647651U)))), (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (arr_0 [i_1 + 1]) : (var_12))));
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_3 [i_0 + 2] [i_0 + 1]), (arr_3 [i_0 + 1] [i_0 + 1])))), (min((((/* implicit */unsigned long long int) min((var_3), (2664962979160060692LL)))), (((((/* implicit */_Bool) -1)) ? (var_15) : (5365303147444489185ULL)))))));
                var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0] [(unsigned short)4])), (max((((/* implicit */long long int) arr_2 [i_0 - 1] [i_0 + 1])), (max((var_3), (((/* implicit */long long int) arr_3 [i_0 - 1] [i_0 - 1]))))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_2 [i_0] [i_1])), (var_3))), (((/* implicit */long long int) var_2))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27684))) : (arr_2 [i_0] [i_0])))), (max((((/* implicit */unsigned long long int) var_3)), (var_15))))) : (max((((4376455304060519582ULL) << (((((/* implicit */int) (short)22851)) - (22808))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (arr_2 [i_0] [i_0]))))))));
            }
        } 
    } 
}
