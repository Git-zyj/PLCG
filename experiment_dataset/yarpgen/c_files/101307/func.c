/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101307
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
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                var_13 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) max((var_9), (-9081245690475319308LL))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_14 *= ((/* implicit */signed char) (unsigned short)61440);
                    var_15 = ((/* implicit */_Bool) (~(var_5)));
                }
                for (unsigned char i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? ((~(((/* implicit */int) (unsigned short)4106)))) : (((/* implicit */int) (unsigned short)4091))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */short) ((((min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4091))))), ((-(((/* implicit */int) (unsigned short)61438)))))) + (2147483647))) >> (((/* implicit */int) ((max((arr_6 [i_3] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_0] [12U] [1LL] [i_1])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7)))))))));
                        var_18 = arr_8 [i_3] [i_1] [i_0];
                        var_19 = ((/* implicit */unsigned short) min(((~(min((((/* implicit */unsigned int) (unsigned short)61445)), (1932928026U))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) var_4)))))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_20 += ((/* implicit */long long int) (!(((/* implicit */_Bool) 2110518021632858357LL))));
                        var_21 = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */int) (signed char)79)) ^ (((/* implicit */int) var_12)))), ((+(((/* implicit */int) (signed char)-64))))))));
                    }
                    arr_17 [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) max((max((((/* implicit */signed char) var_4)), ((signed char)-79))), (max((((/* implicit */signed char) var_3)), ((signed char)74))))))));
                }
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                arr_28 [i_1] [i_8] [i_7] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((long long int) var_10))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) (signed char)28)) | (((/* implicit */int) (short)32767))))));
                                var_22 = ((/* implicit */short) arr_26 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                                var_23 += ((/* implicit */long long int) min((((var_11) ? (((var_11) ? (arr_6 [i_0] [i_7] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)157))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2)))))));
                            }
                        } 
                    } 
                    var_24 ^= ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)61440))))), (-6801807803702088518LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)63))))) : (((((/* implicit */_Bool) (short)-12977)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) : (-2262079000405881822LL))));
                    arr_29 [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_11 [i_1] [i_1]);
                }
                var_25 = ((long long int) max((((/* implicit */long long int) (_Bool)0)), (var_1)));
            }
        } 
    } 
    var_26 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)2914))));
}
