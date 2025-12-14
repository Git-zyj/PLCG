/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14078
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */short) arr_1 [i_0] [i_0]);
                var_14 = ((/* implicit */unsigned long long int) min((6U), (((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || ((_Bool)1))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_15 ^= ((/* implicit */long long int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */long long int) var_12)) : (9223372036854775807LL))))) >> (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_1])))));
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) min((arr_4 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_1] [i_2])))) + (2147483647))) >> (((((/* implicit */int) max((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_2] [i_2] [i_2])))) + (16163)))));
                }
                for (short i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    var_17 += ((/* implicit */unsigned long long int) ((min((((((/* implicit */long long int) 4294967283U)) + (var_11))), (((/* implicit */long long int) arr_7 [i_3 - 2] [i_1] [i_3])))) + (min((arr_0 [(signed char)7] [(signed char)4]), (((/* implicit */long long int) arr_2 [i_3]))))));
                    var_18 = ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_10 [i_3 - 2] [i_3 - 2] [i_3 - 2])), (var_1)))) ? (((/* implicit */long long int) min((((/* implicit */int) (short)23019)), (arr_7 [i_3 - 2] [i_3 + 1] [i_3 - 1])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_3 + 1]))))) ? ((+(1032899952162302653LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) 2147483645)) + (6U)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 1; i_4 < 8; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [10ULL] [i_1] [i_1])) ? (((/* implicit */long long int) var_8)) : (arr_11 [i_0] [i_0] [i_1] [i_3 - 1] [(unsigned char)0])))))))));
                        var_20 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [4U] [i_1] [i_1]))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(((/* implicit */int) (signed char)63)))) : (((((/* implicit */int) arr_4 [i_0] [i_3 - 1] [4ULL])) ^ (((/* implicit */int) arr_4 [i_0] [i_3 - 1] [i_3]))))));
                    }
                    var_22 *= ((min((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))) % (6U))), (((/* implicit */unsigned int) arr_4 [i_1] [i_1] [(_Bool)1])))) << (((((unsigned long long int) 4294967295U)) - (4294967280ULL))));
                    var_23 = ((/* implicit */short) ((((long long int) ((var_6) >= (((/* implicit */unsigned long long int) 8U))))) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0] [i_1]))))));
                }
                var_24 = ((/* implicit */short) arr_14 [i_1] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))));
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) 10U))));
}
