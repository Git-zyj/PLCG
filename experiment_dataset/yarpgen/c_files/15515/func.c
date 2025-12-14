/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15515
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
    var_12 ^= ((/* implicit */unsigned char) var_9);
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709535232ULL)) ? (((/* implicit */unsigned long long int) (((~(var_11))) >> (((((((/* implicit */_Bool) 548855055U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))) : (9223372036854775808ULL))) - (93ULL)))))) : (min((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) 2135814373U)), (9223372036854775808ULL)))))));
    var_14 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18488)) ? (422212465065984ULL) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min(((unsigned short)2963), (((/* implicit */unsigned short) var_10)))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 4; i_2 < 15; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned short) (signed char)48);
                                var_17 = ((/* implicit */signed char) 1105626272);
                                var_18 = ((/* implicit */int) ((signed char) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)11)) : (var_1)))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] = ((/* implicit */long long int) ((_Bool) (-(max((341653171U), (((/* implicit */unsigned int) (unsigned char)255)))))));
                    var_19 = ((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_1] [i_1] [(short)3] [i_2 - 2] [i_2]);
                    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 1] [i_2 + 1] [i_1 + 1] [i_2]))) * (var_8))), (((/* implicit */unsigned long long int) arr_8 [i_1 - 2] [i_2 - 4] [i_1] [(signed char)5]))));
                }
            }
        } 
    } 
}
