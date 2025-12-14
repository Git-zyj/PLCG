/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155838
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_0 + 1] [i_1] [i_2]) == (arr_4 [i_0 + 1] [i_0 + 1] [i_1]))))) : (arr_3 [i_0 + 1])));
                    arr_8 [i_0] [(unsigned char)18] = ((/* implicit */unsigned int) (~(((arr_3 [i_0 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99)))))));
                }
                for (signed char i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [18ULL] [(_Bool)1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_10))))) : (arr_0 [i_3 + 1])))) ? (((long long int) 4294967291U)) : (((/* implicit */long long int) 4294967295U))));
                    var_18 = ((/* implicit */unsigned long long int) (-(var_9)));
                }
                for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    var_19 ^= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)58729)) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_1 + 1])))));
                    var_20 &= ((/* implicit */unsigned int) (~(var_0)));
                }
                for (unsigned char i_5 = 2; i_5 < 15; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */_Bool) -6048686047565305870LL)) && (((/* implicit */_Bool) 9007199253692416LL)))))));
                        var_22 *= ((/* implicit */unsigned long long int) var_10);
                        var_23 = ((/* implicit */short) min(((~(arr_14 [i_5] [i_1] [i_5 + 2] [i_6]))), (((((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_5 + 3] [i_6])) ? (arr_14 [i_5] [i_6] [i_5 + 4] [i_6]) : (((/* implicit */int) var_13))))));
                    }
                    var_24 = ((/* implicit */int) (-(((long long int) arr_4 [i_5 - 2] [i_1] [i_0]))));
                    var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (~(var_6))))) ? (max((((/* implicit */unsigned long long int) ((signed char) var_12))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) 4294967288U)) : (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                }
                arr_17 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) (~((~((~(var_0)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) -1335847929);
    var_27 += ((/* implicit */short) max((((long long int) max((var_1), (((/* implicit */unsigned long long int) var_9))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
}
