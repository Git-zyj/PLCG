/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184950
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
    var_15 |= ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
        {
            var_16 *= ((/* implicit */unsigned short) var_14);
            arr_7 [i_0] [i_1 + 3] = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))))))));
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 35184372056064LL)) ? (((/* implicit */int) (_Bool)0)) : (-112738299)))))))));
        }
        /* vectorizable */
        for (short i_2 = 1; i_2 < 21; i_2 += 3) /* same iter space */
        {
            arr_12 [i_0] [i_0] = ((/* implicit */long long int) ((((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)195))))) ? (((/* implicit */int) arr_10 [i_0])) : (((((/* implicit */int) (unsigned short)41899)) & (((/* implicit */int) arr_8 [(unsigned char)6] [(unsigned char)6]))))));
            var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)27252)) : (((/* implicit */int) arr_5 [i_2 + 3]))));
        }
        arr_13 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) > (((/* implicit */int) (short)-27253)))) ? ((~(((/* implicit */int) arr_10 [i_0])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0]))) == (-35184372056089LL)))))))));
        arr_14 [i_0] = ((/* implicit */_Bool) 7377917908725560487LL);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_19 *= ((/* implicit */unsigned int) arr_2 [i_3]);
        var_20 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29621)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) (unsigned short)41892)))));
    }
}
