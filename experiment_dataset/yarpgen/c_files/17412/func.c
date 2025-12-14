/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17412
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
    var_17 = ((/* implicit */unsigned int) (unsigned short)26927);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) max((var_14), (arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26927))))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        arr_5 [(unsigned short)0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (((unsigned long long int) (unsigned short)26927))));
        var_20 += ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((((/* implicit */int) var_15)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)38609)) - (38585))))) : (((/* implicit */int) arr_4 [i_1 - 1])))), (((/* implicit */int) var_8))));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((((/* implicit */int) arr_2 [i_3])) & (((/* implicit */int) arr_2 [i_3])))), ((~(((/* implicit */int) arr_2 [i_2])))))))));
                arr_11 [i_2] [(unsigned char)0] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)32767)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)38609))))) : (arr_6 [i_2] [6])))) && (((/* implicit */_Bool) (-((~(((/* implicit */int) arr_7 [i_2])))))))));
                var_22 += min(((~(((/* implicit */int) var_8)))), (((/* implicit */int) var_10)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((((((var_0) + (var_0))) - (288230376151711744ULL))), (((/* implicit */unsigned long long int) (unsigned short)38609))));
}
