/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142005
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
    var_20 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_21 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_2))))) : ((+(var_10)))))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)0);
            arr_8 [i_0] = ((/* implicit */short) 0ULL);
            arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)-126)) + (2147483647))) << (((((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_1])) - (35918))))) ^ (((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) / (arr_4 [i_0] [i_0 - 1] [i_0 + 1])))));
        }
        arr_10 [i_0 - 1] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3)) && (((/* implicit */_Bool) var_15))))), ((((((~(((/* implicit */int) (unsigned short)65535)))) + (2147483647))) << (((((((/* implicit */int) var_9)) + (82))) - (31)))))));
        arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((67108863ULL), (((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_0] [(unsigned short)14]))))) && (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8))))));
        var_22 = ((/* implicit */int) var_1);
        var_23 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
    }
    for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        var_24 = ((/* implicit */int) (~(var_17)));
        arr_14 [i_2] = ((/* implicit */signed char) max(((~(((/* implicit */int) ((signed char) var_10))))), (((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_3 [i_2] [i_2] [i_2]))))))));
        var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65535)) : (2147483647)))))) ? (((/* implicit */int) min((min((arr_3 [i_2] [i_2] [(unsigned short)20]), ((unsigned short)0))), (((/* implicit */unsigned short) arr_1 [i_2 + 1] [i_2 - 1]))))) : (((((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1])) - (((/* implicit */int) (unsigned short)0))))));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2] [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_2] [i_2 + 1] [(unsigned short)0]))))) && (max((((((/* implicit */_Bool) arr_6 [i_2] [(signed char)5] [(signed char)5])) && (((/* implicit */_Bool) var_12)))), (((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) var_17))))))));
    }
    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_0 [6ULL])) : (((/* implicit */int) arr_0 [i_3]))))) || (((((/* implicit */_Bool) arr_0 [i_3])) || (((/* implicit */_Bool) var_8)))))))));
        arr_17 [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [i_3]))))) >= (((/* implicit */int) (signed char)0)))));
    }
    var_28 = ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)0)))) % ((+(((/* implicit */int) var_0)))));
    var_29 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (16383))) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (signed char)0)))), (((/* implicit */int) (unsigned short)65535))))) : (((((var_17) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) ^ (((/* implicit */unsigned long long int) min((2147483647), (((/* implicit */int) var_14)))))))));
}
