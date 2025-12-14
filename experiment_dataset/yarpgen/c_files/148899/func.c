/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148899
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
    var_20 &= ((/* implicit */unsigned short) (~((~(2147483647)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) var_1);
        var_22 = ((/* implicit */unsigned int) ((unsigned short) min((((((/* implicit */_Bool) (short)-1)) ? (3623731436659820604LL) : (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) 0U)))));
        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3623731436659820604LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)15))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0 - 1] [i_0 - 1]))) : (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */int) var_11))))))) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) 23U)) ? (arr_0 [i_0 - 1] [(_Bool)1]) : (31)))));
    }
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned char)255)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))), (((long long int) arr_4 [i_1 + 1])))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            arr_8 [0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_13)))) ? (min((((((/* implicit */long long int) ((/* implicit */int) var_3))) | (arr_5 [i_2] [8ULL] [i_1]))), (((/* implicit */long long int) ((unsigned int) 4294967282U))))) : (arr_6 [i_1] [i_2] [i_2])));
            var_25 *= ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) var_6)) : (arr_3 [i_1 - 1])))));
            var_26 = 9223372036854775807LL;
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        var_27 += ((/* implicit */unsigned int) (((+(511))) != (((/* implicit */int) arr_10 [i_3] [i_3]))));
        var_28 = ((/* implicit */_Bool) ((arr_10 [i_3] [i_3]) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) (signed char)48))));
    }
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - ((-(((/* implicit */int) var_19))))))) ? (min((var_1), (((/* implicit */unsigned int) var_17)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
}
