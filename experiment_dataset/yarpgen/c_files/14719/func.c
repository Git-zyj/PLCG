/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14719
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
    var_11 = ((/* implicit */long long int) ((var_8) ? (var_9) : (((((/* implicit */_Bool) -8704604278980325399LL)) ? (1772858989U) : (1772858989U)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (5408341451019510391ULL))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1772858978U)));
            arr_5 [i_0] [i_1] = ((/* implicit */int) ((arr_4 [i_1] [3U] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        }
    }
    for (unsigned short i_2 = 4; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_14 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) 2522108307U)) ? (((/* implicit */int) (_Bool)1)) : (-1379120714))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2522108317U)) ? (-8704604278980325399LL) : (((/* implicit */long long int) 549069075U))))) ? (((((/* implicit */_Bool) (unsigned short)4715)) ? (-498405453) : (((/* implicit */int) var_3)))) : (var_5)))));
        arr_9 [(unsigned char)20] |= ((/* implicit */unsigned int) var_4);
    }
    for (unsigned short i_3 = 4; i_3 < 21; i_3 += 1) /* same iter space */
    {
        var_15 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) -498405445)) ? (((/* implicit */int) (short)-3997)) : (((/* implicit */int) (signed char)76)))), (((/* implicit */int) min((var_4), (var_1))))))) == (arr_3 [i_3 + 1] [i_3])));
        var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */_Bool) max(((+(((/* implicit */int) (short)3996)))), (((/* implicit */int) (signed char)-43))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1919897564003720823LL)))));
        arr_12 [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) -8147699610611956444LL)) ? (11353693734821586184ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25729))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8147699610611956467LL)) ? (((/* implicit */int) (short)-8949)) : (((/* implicit */int) ((var_5) >= (((/* implicit */int) var_3))))))))));
    }
    var_17 ^= ((/* implicit */short) ((((/* implicit */int) (short)8948)) ^ (((/* implicit */int) ((121149245U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)8948))))))));
    var_18 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
}
