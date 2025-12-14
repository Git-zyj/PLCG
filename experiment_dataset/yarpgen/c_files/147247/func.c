/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147247
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_1)))) | (((int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)15))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) ((1040187392U) <= (var_12)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))))), (((/* implicit */unsigned long long int) 4193280U))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) < (18446744073709551615ULL))))) : (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-10) != (((((/* implicit */int) (short)0)) ^ (245760)))))))));
                var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_1]) : (arr_1 [i_0]))), (((/* implicit */int) var_7))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((int) 15LL));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) ((4193269U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))) : (max((((/* implicit */long long int) (-2147483647 - 1))), ((-9223372036854775807LL - 1LL))))))) || (((/* implicit */_Bool) ((arr_7 [i_2]) << (0U))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-1)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) - (((/* implicit */int) arr_8 [i_2]))))) : (var_5)));
    }
    var_22 = ((/* implicit */unsigned long long int) var_3);
}
