/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161358
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */unsigned long long int) var_4)) | (((((/* implicit */_Bool) max(((unsigned short)33684), (((/* implicit */unsigned short) (unsigned char)251))))) ? (min((var_19), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_3)), (var_13)))))))))));
    var_21 = ((/* implicit */signed char) ((unsigned long long int) 437567092681370201ULL));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    arr_9 [0ULL] [i_1] [8LL] [i_0] = ((/* implicit */long long int) max((max((arr_8 [i_0 - 3] [i_2 - 3] [i_2 - 1] [i_2]), (arr_8 [i_0 - 4] [i_2 + 1] [10LL] [i_2]))), (arr_8 [i_0 - 1] [i_2 + 1] [i_2] [i_2])));
                    var_22 &= ((/* implicit */unsigned char) ((signed char) ((min((((/* implicit */unsigned long long int) (unsigned char)4)), (var_19))) * (((/* implicit */unsigned long long int) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1])))))))));
                    var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(arr_4 [i_2 + 1] [i_2] [i_2 - 1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)52))))) ? (var_19) : (((/* implicit */unsigned long long int) ((int) 33538048U)))))));
                    arr_10 [i_0] [i_1] = ((/* implicit */short) ((((_Bool) arr_6 [i_0 - 2] [i_2 + 2])) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 - 1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (unsigned char)22)) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)0))))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 3; i_3 < 10; i_3 += 4) 
                {
                    arr_14 [i_0] [i_0] [(short)6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1 + 1] [(short)2])) ? (((/* implicit */int) arr_7 [i_1 + 2] [(unsigned char)4] [i_1])) : (arr_5 [i_1 + 3] [i_1 + 3] [2LL])));
                    arr_15 [i_1] [(short)5] [7U] [11LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) (!(var_15)))) : (((((/* implicit */_Bool) arr_2 [i_3] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 2])) : (arr_4 [i_0] [i_1] [i_3])))));
                    var_24 *= ((/* implicit */short) (+(((/* implicit */int) arr_6 [(signed char)2] [(signed char)2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            {
                                arr_21 [i_5] [i_5] [i_3] [i_3] [6LL] |= ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) var_15)))) & (((/* implicit */int) arr_13 [i_0 - 3])));
                                arr_22 [i_5] [i_5] [(short)2] [i_1] [i_5] [i_0] |= ((/* implicit */short) (unsigned char)45);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)53059)) + (((/* implicit */int) arr_3 [i_0] [i_6]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_1 + 3])) * (((/* implicit */int) (short)-1))))) : (((((/* implicit */_Bool) arr_11 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (3352947870U)))));
                    arr_27 [i_0] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned char) (((_Bool)1) ? (11016352186356707298ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)211)))));
                    var_26 = (~(((/* implicit */int) (_Bool)1)));
                    var_27 = ((signed char) arr_26 [i_0] [i_1 + 2] [i_6]);
                }
                var_28 = ((/* implicit */unsigned int) arr_17 [i_0] [(signed char)4] [i_1]);
                arr_28 [i_1] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) min((var_11), ((unsigned char)6))))));
                var_29 ^= ((/* implicit */unsigned long long int) arr_7 [i_0] [10ULL] [i_1 + 2]);
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) var_4);
    var_31 = ((/* implicit */unsigned int) ((int) var_4));
}
