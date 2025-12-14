/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181941
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
    var_11 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-29918)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))) : (((long long int) (short)29918))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))))), (var_2))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_12 += ((/* implicit */_Bool) ((long long int) max((((/* implicit */int) (short)-29915)), (((((/* implicit */_Bool) (unsigned short)40385)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)15)))))));
        arr_2 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((unsigned long long int) arr_0 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (-((((_Bool)0) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)32013))) : (var_3))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_14 ^= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (arr_4 [i_1] [i_2])))) ? (((int) arr_4 [i_1] [i_2])) : (((int) var_3)))));
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29909)) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))));
        }
    }
}
