/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171910
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) arr_4 [i_0] [i_1]);
                arr_5 [i_0] = ((((/* implicit */_Bool) (((~(0U))) << (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (+(arr_1 [i_0])))))) : ((+(arr_4 [i_0 + 1] [0U]))));
                arr_6 [i_1] [0ULL] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_18)))) >= (arr_4 [i_0 + 1] [i_0 + 1]))) || (((/* implicit */_Bool) var_13))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) ((unsigned char) var_12));
        var_20 = ((/* implicit */unsigned int) ((long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) & (4294967274U))))));
    }
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        arr_22 [i_5] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */unsigned long long int) ((arr_17 [i_3] [4U] [i_3]) << (((/* implicit */int) var_9))))), (max((var_18), (((/* implicit */unsigned long long int) arr_18 [i_4])))))));
                        var_21 *= ((/* implicit */signed char) var_7);
                        var_22 = ((/* implicit */unsigned int) max((var_22), (4294967295U)));
                        var_23 = ((/* implicit */_Bool) var_7);
                    }
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        arr_26 [i_3] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((var_11) ? ((+(((((/* implicit */_Bool) arr_17 [i_4] [i_5] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_10 [i_7]))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (var_7))), (((/* implicit */unsigned int) ((1293561871U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [5U])))))))))));
                        var_24 = ((((/* implicit */_Bool) ((unsigned int) ((unsigned short) var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) != (arr_10 [i_4 - 2]))))) : (max((((/* implicit */long long int) arr_21 [i_4] [i_3] [i_4 + 1] [i_4] [(_Bool)1] [i_4 + 1])), (((long long int) arr_25 [i_3] [i_5] [i_4 - 2] [i_3])))));
                        /* LoopSeq 4 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_25 += ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_16 [i_4 - 1]) >= (arr_16 [i_4 - 2])))), (((long long int) arr_18 [i_4 - 1]))));
                            arr_30 [i_3] [i_4] [i_3] [i_7] [i_7] [i_8] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_11 [i_8 + 1] [i_4])))) & (min((arr_10 [i_7]), (((/* implicit */unsigned long long int) var_13)))))) > ((-(max((((/* implicit */unsigned long long int) (signed char)-117)), (18446744073709551599ULL))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 4) 
                        {
                            arr_33 [i_3] [i_4] [i_5] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_15)))) > (arr_27 [i_3] [i_9 - 1] [i_3] [i_4 - 2] [i_9])));
                            arr_34 [i_3] [i_4 + 1] [i_4 + 1] [i_3] [i_9] [i_4 + 1] = ((/* implicit */_Bool) ((arr_31 [i_9 - 1] [13U] [i_9] [i_9 + 1] [i_4] [i_4 - 2] [i_4]) & (arr_31 [i_9] [i_9] [i_9] [i_9 - 1] [i_5] [i_4 - 2] [i_3])));
                            arr_35 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                            arr_36 [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_31 [(unsigned short)13] [i_7] [i_7] [i_5] [i_4 + 2] [i_4 + 2] [i_3]) != (arr_15 [i_3]))))) * (((((/* implicit */_Bool) var_4)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [3ULL] [i_3] [i_5] [i_4] [i_3] [i_3])))))));
                        }
                        for (unsigned int i_10 = 1; i_10 < 18; i_10 += 4) 
                        {
                            var_26 |= ((/* implicit */_Bool) ((arr_18 [i_4 + 1]) ? (((/* implicit */int) arr_18 [i_4 + 2])) : (((/* implicit */int) max((arr_18 [i_4 + 1]), (arr_18 [i_4 + 2]))))));
                            var_27 = ((/* implicit */unsigned short) arr_28 [i_3] [i_3] [i_3] [i_3] [i_3]);
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((max((arr_24 [2LL] [i_7]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_4] [i_7]))))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(_Bool)1]))))))));
                        }
                        for (unsigned char i_11 = 3; i_11 < 18; i_11 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned short) var_16);
                            var_30 = ((/* implicit */unsigned char) ((_Bool) var_5));
                        }
                        var_31 -= ((/* implicit */signed char) ((unsigned char) max((0U), ((((_Bool)1) ? (0U) : (3001405425U))))));
                        var_32 += ((/* implicit */_Bool) (~((-(((((/* implicit */_Bool) arr_41 [i_4] [i_4] [i_4 + 2] [i_4] [(_Bool)1])) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned int) arr_10 [i_5]);
                        /* LoopSeq 1 */
                        for (signed char i_13 = 1; i_13 < 19; i_13 += 4) 
                        {
                            arr_46 [i_5] [i_3] [i_5] = ((/* implicit */long long int) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_32 [i_3] [i_3]))))))));
                            arr_47 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) arr_15 [i_3]);
                            arr_48 [i_3] [i_4 + 1] [i_5] [i_3] [i_13] [i_3] = ((/* implicit */unsigned int) var_16);
                        }
                        arr_49 [i_3] [i_4] [i_3] [i_5] [(_Bool)1] = ((((/* implicit */_Bool) max(((-(var_4))), (((/* implicit */unsigned long long int) ((arr_17 [i_3] [i_3] [i_3]) != (arr_17 [i_3] [i_4] [i_3]))))))) ? (((arr_8 [i_4 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_12]))) >= (1441587626U))) || (((/* implicit */_Bool) arr_14 [i_4] [i_3] [i_4 - 2])))))));
                    }
                    var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
                    var_35 = ((/* implicit */signed char) max(((-(((/* implicit */int) var_8)))), (min((((((/* implicit */int) arr_45 [i_3] [14U] [i_3] [14U] [i_3])) | (((/* implicit */int) var_0)))), (((/* implicit */int) arr_38 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_3] [18LL] [i_4]))))));
                    var_36 ^= ((/* implicit */_Bool) arr_27 [(signed char)14] [i_4 - 2] [i_4] [i_4 - 1] [i_4]);
                }
            } 
        } 
    } 
}
