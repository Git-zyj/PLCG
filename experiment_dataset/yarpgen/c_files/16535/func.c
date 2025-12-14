/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16535
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
    var_19 = ((/* implicit */signed char) min((var_15), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)15)) && (((/* implicit */_Bool) 479084670U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (-1579623717)))))))));
    var_20 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)18))) * (1798221685U)))) && (((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_3))))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */long long int) var_18))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-6789398817364351107LL))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] [i_0 + 1] = ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2]))) : ((-(3815882626U))));
        arr_5 [(signed char)7] [i_0 - 2] = ((/* implicit */unsigned long long int) ((((((-6789398817364351107LL) / (((/* implicit */long long int) 3815882625U)))) >= (((((/* implicit */_Bool) 15051963357155230748ULL)) ? (1262141319886702734LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [8] [8]))))))) ? (1829292758833425846LL) : (((/* implicit */long long int) 386007419U))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
        {
            arr_9 [i_0 - 2] = ((/* implicit */long long int) ((signed char) min((((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_1])), (arr_0 [i_0 - 2]))));
            var_21 = ((/* implicit */signed char) ((min((arr_0 [i_0 - 2]), (((/* implicit */unsigned int) var_12)))) > (var_18)));
        }
        for (short i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((int) 2496745598U)))));
            var_23 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (2496745586U) : (3649484804U)))) ? (((unsigned int) arr_0 [i_0 - 1])) : (max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1]))));
        }
        for (short i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
        {
            arr_16 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((1798221687U) << (((-231597825) + (231597847)))))), ((~(((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) var_8))))))));
            var_24 ^= (-(min((((/* implicit */long long int) ((((/* implicit */unsigned int) 640229995)) * (2496745599U)))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) var_14)) : (arr_13 [i_0]))))));
            arr_17 [i_3] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) 3908959881U)) ? (3908959871U) : (2496745623U)));
        }
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((-6789398817364351105LL), (((/* implicit */long long int) (signed char)-118))))) ? (((min((var_3), (4294967295U))) >> (((((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_0 [(short)3]) : (2496745600U))) - (2942986655U))))) : (((unsigned int) (signed char)94))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((3947264306371114347ULL) << (((-287074186) + (287074236)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (short)26654))) : (((arr_6 [i_4]) + (((/* implicit */unsigned long long int) arr_15 [i_0 - 1]))))));
        }
    }
    var_27 = ((/* implicit */signed char) min((var_27), (min((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)41)) && (((/* implicit */_Bool) 2247623493U))))), (((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (var_7))))))));
    var_28 = ((/* implicit */unsigned long long int) (~(((long long int) ((int) var_18)))));
}
