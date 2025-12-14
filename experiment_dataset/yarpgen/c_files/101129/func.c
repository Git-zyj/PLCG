/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101129
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
    var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(var_6)))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) var_18))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) ((287948901175001088ULL) > (287948901175001088ULL))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) arr_0 [i_0] [i_1])) : (65535LL))))))))));
            arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((2939126482U) > (((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)4)))) / (((/* implicit */int) ((var_16) < (((/* implicit */int) arr_3 [i_1]))))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 2939126482U)) ? (((/* implicit */long long int) (~(arr_0 [i_0 + 1] [i_0 - 1])))) : (((((/* implicit */_Bool) 16777215LL)) ? (((/* implicit */long long int) arr_0 [i_0 - 2] [i_0 - 2])) : (arr_7 [i_0 - 2])))));
            var_21 = ((/* implicit */signed char) ((int) ((long long int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) (signed char)47))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                arr_11 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (10699310438636261435ULL) : (((/* implicit */unsigned long long int) ((int) var_17)))));
                var_22 = ((((/* implicit */_Bool) ((unsigned char) 4294967295U))) ? (((/* implicit */long long int) arr_1 [i_0 - 2])) : (((long long int) 3666291741851905460LL)));
            }
            var_23 ^= ((/* implicit */long long int) ((_Bool) (((!(arr_6 [i_2] [(unsigned char)7]))) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) (short)-2948)))));
        }
        arr_12 [i_0] = ((/* implicit */_Bool) var_13);
        var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (max((arr_7 [i_0 + 1]), (((/* implicit */long long int) 1355840814U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 1])))))));
    }
}
