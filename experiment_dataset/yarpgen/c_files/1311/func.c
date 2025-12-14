/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1311
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
    var_20 |= ((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) (unsigned short)65375)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)160)))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)160)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_21 ^= ((/* implicit */_Bool) arr_3 [6ULL]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [(short)8] [i_0] [5LL] = ((/* implicit */unsigned short) ((short) ((short) (+(((/* implicit */int) (unsigned short)65375))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((short)-8960), (((/* implicit */short) arr_13 [i_2] [i_1 - 1] [9LL] [i_0] [11]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [9U]))))) > (((arr_1 [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2] [(unsigned char)5]))));
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1] [i_2] [(unsigned short)6]))))) > (arr_15 [i_1 - 1] [i_2] [i_1 - 1] [10U]))))));
                                arr_17 [i_0] [i_1] [i_1 + 1] [9U] [i_1 + 1] = ((/* implicit */signed char) ((unsigned long long int) min((arr_11 [i_0 + 1] [i_0 + 1] [(unsigned short)5] [i_3] [i_4] [i_2]), (arr_4 [i_0] [i_0 - 1] [i_3 + 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 + 1])) || (((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [(short)5]))))) >> (((((/* implicit */int) arr_10 [i_0 - 2] [(short)9] [i_0] [i_0 - 1] [i_0 + 1])) + (26631)))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 2; i_5 < 11; i_5 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 0))))))))));
        arr_23 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */int) (unsigned short)46820)) : (((((/* implicit */_Bool) (unsigned short)46820)) ? (arr_0 [i_5] [i_5]) : (((/* implicit */int) (signed char)(-127 - 1)))))));
    }
    var_24 = ((/* implicit */unsigned short) var_16);
}
