/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154993
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
    var_15 = ((/* implicit */int) 3145203234U);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) 3145203227U))))))));
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3145203264U))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(131071U))) : (((((/* implicit */_Bool) 2503621542892857501LL)) ? (3145203269U) : (4294836224U)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) 137438691328LL))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-11480)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3145203264U))))) : (((/* implicit */int) (signed char)0))))) ? ((~(arr_5 [i_1] [i_1] [i_0]))) : ((-((~(((/* implicit */int) arr_1 [i_0]))))))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-90))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(arr_6 [i_1] [i_0]))) ? ((+(((/* implicit */int) arr_4 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_1]))))) ? (((arr_6 [i_0] [i_1]) ? (1869199867522652514ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)245))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) arr_4 [i_0] [i_0])))))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_0] [i_0])) ? (((((/* implicit */_Bool) 134217727U)) ? (-823221901442480004LL) : (((/* implicit */long long int) 4294836224U)))) : (((/* implicit */long long int) (-2147483647 - 1)))));
            var_22 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0]);
        }
    }
}
