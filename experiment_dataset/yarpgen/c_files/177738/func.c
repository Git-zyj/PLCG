/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177738
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = (~(((((/* implicit */_Bool) min((arr_1 [i_0] [5ULL]), (((/* implicit */short) (signed char)-120))))) ? (max((((/* implicit */int) (short)-1)), (1380463462))) : (((((/* implicit */int) (signed char)116)) ^ (arr_0 [11]))))));
        var_14 = ((int) ((-1) | (((/* implicit */int) (signed char)-121))));
        var_15 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)119))))) : ((((~(5ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) var_12);
        var_17 = ((/* implicit */unsigned int) (signed char)-120);
        var_18 = ((/* implicit */signed char) ((min((((int) arr_5 [i_1])), (((((/* implicit */_Bool) 1567265060)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (signed char)118)))))) == (min((((/* implicit */int) arr_5 [i_1])), (arr_4 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((17315428224871549829ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2])) % (((/* implicit */int) var_7)))))))), (((signed char) (short)-24692))));
        /* LoopSeq 1 */
        for (signed char i_3 = 3; i_3 < 20; i_3 += 1) 
        {
            arr_12 [i_2] [i_2] = ((/* implicit */int) 3625436946U);
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_6 [i_3]))))), (((short) var_7))))) : (min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-120)) && (((/* implicit */_Bool) (-2147483647 - 1)))))), (((((/* implicit */_Bool) 1572659938)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (signed char)-120)))))))))));
            var_21 |= ((/* implicit */signed char) min((min((((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (short)-32755)))), (((/* implicit */int) arr_9 [i_2] [i_2])))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(short)14] [i_3 + 3])))))))));
        }
        var_22 ^= ((((/* implicit */unsigned long long int) ((unsigned int) (signed char)32))) * (((unsigned long long int) min((var_8), (((/* implicit */int) var_1))))));
    }
    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned long long int) var_11))))) ? (((int) 1572659938)) : (((((/* implicit */int) var_9)) / (var_13))))))));
}
