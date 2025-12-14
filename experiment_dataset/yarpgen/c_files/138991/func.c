/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138991
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
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (1607413893U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (short)-23))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)50447)) : (var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0]))))) : (((/* implicit */int) arr_0 [i_0] [i_1]))));
            var_13 -= ((/* implicit */int) arr_4 [i_1] [i_1]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_0] [i_2] [i_2] = ((/* implicit */signed char) var_8);
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_7 [i_0] [i_2] [i_2]) : (((arr_6 [i_0] [i_0] [4ULL]) / (((/* implicit */unsigned int) var_6))))));
        }
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_3 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) arr_10 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0])))))));
            var_15 = ((/* implicit */long long int) 1914119348);
        }
        for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 4) 
        {
            var_16 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_4 - 2] [i_0 + 3]))));
            var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) 4826116366482754395ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [9U] [9U] [i_4 - 1])) || (((/* implicit */_Bool) (short)0))))) : (1030146293)));
        }
        var_18 = ((/* implicit */unsigned short) (-(arr_16 [i_0 + 2] [i_0 - 1])));
        arr_17 [i_0 + 2] = ((/* implicit */long long int) var_1);
    }
    var_19 = ((/* implicit */long long int) ((var_0) != (((/* implicit */unsigned long long int) var_4))));
}
