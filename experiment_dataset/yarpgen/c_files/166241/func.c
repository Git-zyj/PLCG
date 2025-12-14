/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166241
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (short)-1155))));
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */short) (!(arr_0 [i_0 + 1])))), ((short)1155)));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_0 + 1])), ((short)1154)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) (short)29338)) : (((/* implicit */int) arr_0 [i_0 + 2]))))) : (4294967286U)));
    }
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned char)113), (((/* implicit */unsigned char) min((((/* implicit */signed char) var_0)), ((signed char)29))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)142)) ? (10U) : (4294967282U)))) != (((((/* implicit */_Bool) var_3)) ? (12804966277353393371ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1141))))))))) : (min((var_9), (((/* implicit */unsigned int) var_12)))))))));
    var_19 ^= ((/* implicit */long long int) var_12);
    var_20 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (short)-1155)), (-3037586605025942014LL))), (((/* implicit */long long int) (-(max((((/* implicit */unsigned int) (short)-21890)), (10U))))))));
    /* LoopNest 3 */
    for (unsigned int i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            {
                                var_21 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 6815258800383493687LL)) % (min((12804966277353393371ULL), (((/* implicit */unsigned long long int) ((short) 5641777796356158245ULL)))))));
                                var_22 -= ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3])))))) < (max((-9223372036854775805LL), (((/* implicit */long long int) (short)-3660)))));
                                arr_16 [i_1 - 1] [i_1] [i_4] [i_1] [i_1 - 1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 3]))) : (((unsigned int) arr_8 [i_1 + 1]))));
                                var_23 = ((/* implicit */signed char) var_5);
                                arr_17 [i_1] [i_1] [i_1] [3] [i_5] = ((/* implicit */unsigned char) (short)-21899);
                            }
                        } 
                    } 
                    arr_18 [i_1 - 1] [i_1] [i_3] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)136))))) ? (((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1 + 3] [i_1] [i_1])) : ((-(var_14))))));
                }
            } 
        } 
    } 
}
