/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127164
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
    var_16 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_6 [i_0] [i_1] [i_1] |= ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) var_11)))));
                    var_17 = ((/* implicit */long long int) (~(2869194473U)));
                    arr_7 [i_0] [i_1] [i_1] [i_2] &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)-113)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0 - 3] [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) (short)4092)))))));
                }
                for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_3] [i_0] &= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_3] [i_3]))) : (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned int) arr_0 [i_3] [i_3]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0 - 3])));
                                arr_16 [i_0] [i_0] [i_0] [i_0] |= (+((-(min((2147483647), (((/* implicit */int) var_2)))))));
                                arr_17 [i_0 - 1] [i_3] [i_5] [i_4 - 1] [i_5] |= ((/* implicit */short) ((var_15) % (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_4] [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-61)))))))));
                            }
                        } 
                    } 
                    var_18 &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_0 - 2] [i_0] [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_6 = 2; i_6 < 14; i_6 += 4) 
                    {
                        var_19 *= ((/* implicit */signed char) (short)0);
                        var_20 |= ((/* implicit */signed char) (((~(var_15))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (var_9) : (((/* implicit */int) var_8)))))));
                        var_21 *= ((/* implicit */unsigned long long int) (((!((_Bool)0))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (var_0))) : ((-(((/* implicit */int) arr_14 [i_0 - 1] [i_1]))))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_1 [i_0]))));
                    }
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-1)) ? ((-(((/* implicit */int) (short)9262)))) : ((+(((/* implicit */int) var_7)))))) + ((+(((/* implicit */int) (short)32767)))))))));
                }
                var_24 ^= ((/* implicit */signed char) arr_3 [i_0 - 1] [i_0 - 3]);
            }
        } 
    } 
}
