/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156379
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
    var_14 |= ((/* implicit */signed char) min((-834178004094906474LL), (((/* implicit */long long int) var_13))));
    var_15 = ((/* implicit */unsigned long long int) var_3);
    var_16 += ((/* implicit */long long int) (!(var_10)));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_12)) ? (3168584709U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1] [i_0 - 2]))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_10)), (arr_12 [2LL])))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_2 [i_2 - 2] [i_3 - 1])) : (((/* implicit */int) arr_2 [i_2 + 2] [i_3 - 1])))))));
                                arr_15 [i_0 - 1] [i_1] [i_1] [i_2 + 1] [i_1] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) min((arr_1 [i_1] [i_0]), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0 + 1] [i_2 - 2] [i_3] [i_1])) ^ (((/* implicit */int) arr_11 [(_Bool)1] [i_2 - 2] [(_Bool)1] [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_17 [i_0] [i_2 - 2]))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3168584709U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (168021881U)));
                    }
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        var_20 ^= ((/* implicit */_Bool) min((168021881U), (1126382565U)));
                        arr_21 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_1])) * (((/* implicit */int) ((min((arr_18 [i_0] [i_0 - 2]), ((_Bool)1))) || (((/* implicit */_Bool) ((4126945409U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(signed char)9] [i_0] [i_2 - 1] [i_6] [i_2 - 1])))))))))));
                    }
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4002855156U)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (_Bool)0))))), (((unsigned int) arr_19 [i_0] [8U] [8U] [8U])))), (((/* implicit */unsigned int) (_Bool)1))));
                        arr_25 [i_1] [(signed char)4] [i_1] [i_1] [i_7] [i_1] = ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_6 [(unsigned short)2] [i_1] [i_2] [i_7])))))), (((arr_13 [i_1] [i_0 + 1] [i_0] [i_0 - 2] [i_2 - 2]) ? (((/* implicit */int) arr_13 [i_1] [i_0 - 1] [i_0] [i_0 + 1] [i_2 + 2])) : (((/* implicit */int) arr_4 [i_0 + 1]))))));
                    }
                    var_22 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_10 [i_2 - 2] [i_2] [i_2 + 1] [i_1])) >> (((((/* implicit */int) arr_6 [i_0 + 1] [9U] [i_0 + 1] [i_2 - 2])) - (50652))))), (((/* implicit */int) var_3))));
                    var_23 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned short)25284))))) && (((/* implicit */_Bool) arr_17 [i_0 - 1] [i_2 - 1])))));
                    var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((9456390790934421830ULL), (((/* implicit */unsigned long long int) arr_13 [4LL] [i_0] [i_1] [4LL] [2U]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)48399)) - (((/* implicit */int) var_11))))) : ((+(4002855156U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0 - 2] [10U] [i_2 + 1] [i_2]) || (((/* implicit */_Bool) (-(((/* implicit */int) var_8))))))))) : (((((/* implicit */_Bool) (unsigned short)17125)) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    } 
    var_25 |= ((/* implicit */_Bool) ((((/* implicit */int) max((var_3), ((!((_Bool)1)))))) << (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (signed char)-93))))))));
}
