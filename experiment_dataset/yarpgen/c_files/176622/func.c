/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176622
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
    var_18 = ((/* implicit */long long int) var_5);
    var_19 = ((/* implicit */unsigned int) var_5);
    var_20 = ((((/* implicit */_Bool) 2791520308U)) ? (2112082139U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2112082151U)) ? (2112082158U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) == (-9186052866856940094LL))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */long long int) var_4)), (var_15))) > (((/* implicit */long long int) var_3)))))) - (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_16)))) : (arr_3 [i_0] [i_0]))));
                        var_21 -= ((/* implicit */unsigned long long int) var_13);
                        arr_13 [i_3] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((410858308U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (min((1046631328U), (((/* implicit */unsigned int) (unsigned short)33859))))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_3 [10LL] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (1250004122U)))))) % ((((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (2112082151U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_1])))))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            var_23 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12864))) - (arr_15 [i_1] [i_1] [i_3] [(signed char)10])));
                            var_24 = ((/* implicit */unsigned int) var_15);
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_4] [9] [i_4 + 3] [i_4 + 2])) >> (((/* implicit */int) arr_11 [8U] [8U] [i_4 - 1] [i_4]))))) ? (((((/* implicit */int) arr_11 [9U] [i_4 - 1] [i_4 + 3] [6LL])) % (((/* implicit */int) arr_11 [i_4] [(signed char)8] [i_4 - 1] [i_4])))) : (((((/* implicit */int) arr_11 [i_4] [i_4] [i_4 + 2] [i_4])) * (((/* implicit */int) var_16))))));
                        }
                    }
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_15 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */long long int) arr_2 [i_2]))))) ? (((/* implicit */long long int) min((arr_19 [i_0] [(unsigned short)6] [i_2] [i_5]), (2735227866U)))) : (((((/* implicit */_Bool) arr_6 [i_5] [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7524))) : (-9186052866856940098LL)))));
                        arr_20 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)87)), (((((/* implicit */_Bool) ((1250004122U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200)))))) ? (((/* implicit */long long int) 834377917)) : (7664353513862048074LL)))));
                        arr_21 [i_0] = ((((/* implicit */_Bool) ((arr_9 [i_5] [i_2] [i_1] [i_1] [i_0] [i_0]) ^ (((/* implicit */int) arr_5 [i_2] [i_5]))))) ? (((((/* implicit */_Bool) var_12)) ? (arr_18 [i_0] [i_1] [4LL] [i_5]) : (arr_18 [i_0] [i_1] [i_1] [i_5]))) : (min((((var_14) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) var_0)))));
                    }
                    for (long long int i_6 = 3; i_6 < 8; i_6 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) max((((/* implicit */long long int) var_16)), (((((/* implicit */_Bool) ((2147483647LL) ^ (((/* implicit */long long int) var_6))))) ? (((/* implicit */long long int) ((var_16) ? (((/* implicit */int) arr_11 [7LL] [(unsigned char)1] [i_2] [3U])) : (((/* implicit */int) (signed char)46))))) : (max((var_17), (((/* implicit */long long int) arr_24 [2LL])))))))))));
                        var_28 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_2] [(signed char)6] [i_6 - 3] [i_6 + 3]))))) ? (((((/* implicit */_Bool) arr_16 [i_2] [0ULL] [i_2] [i_6 - 3] [i_6 + 1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_7)))) : (((/* implicit */int) ((arr_9 [i_0] [i_1] [i_1] [i_1] [i_0] [i_6]) < (((/* implicit */int) (unsigned char)126))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))) | (2114097011762473230ULL)))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_2] [i_1]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(0U)))) ? (((/* implicit */long long int) arr_16 [i_0] [i_1] [i_2] [i_0] [i_8])) : (((((arr_3 [10U] [i_1]) + (9223372036854775807LL))) >> (((var_11) - (2905588924U)))))));
                            var_31 -= ((/* implicit */unsigned short) (unsigned char)126);
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (max((((var_10) & (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)181)), (-2147483643LL)))))), (((/* implicit */unsigned long long int) ((9186052866856940117LL) / (7406423598354156101LL))))))));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] [i_8]))))) % (((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) ? (-2147483647LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_22 [i_1] [(signed char)4] [1LL] [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (8388608U))))));
                            var_34 = ((/* implicit */unsigned char) (!(((_Bool) ((var_4) % (var_2))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            arr_34 [i_0] [5LL] [5LL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned short)3] [i_2]))) != (arr_6 [i_0] [i_2] [i_9])))), ((~(-509823234)))))) % (max((((/* implicit */long long int) arr_32 [i_0] [i_1] [9ULL] [i_2] [i_1])), (arr_7 [i_0] [i_1] [i_2] [i_7])))));
                            arr_35 [4U] [i_1] [4U] [i_7] [i_7] [i_0] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((var_15) ^ (var_17))) : (((/* implicit */long long int) arr_9 [i_0] [i_0] [(signed char)6] [(signed char)6] [i_7] [i_9]))))), (((max((((/* implicit */unsigned long long int) arr_7 [(signed char)2] [(signed char)2] [i_7] [(_Bool)1])), (arr_31 [i_9] [i_9] [i_9] [i_9] [9LL]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) >= (-969594799)))))))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_10 = 3; i_10 < 9; i_10 += 2) 
                        {
                            var_35 *= arr_26 [i_10];
                            arr_38 [(_Bool)1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_10 + 2] [i_1] [(_Bool)0] [i_7] [(signed char)8] [i_10] [i_0]))) + (min((arr_27 [i_0] [i_10 + 2] [i_2] [i_7] [i_10] [i_10 - 3]), (((/* implicit */unsigned long long int) (-(var_3))))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) 
                        {
                            arr_42 [(unsigned short)0] [i_11] [i_0] [i_2] [i_0] [i_1] [(unsigned short)4] |= ((/* implicit */unsigned int) min(((+(max((var_17), (((/* implicit */long long int) var_13)))))), (((/* implicit */long long int) var_12))));
                            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_2] [i_7] [i_11]))));
                        }
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? ((-(var_17))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_46 [i_12] [i_2] [i_0]) < (((/* implicit */unsigned int) var_4))))))));
                        var_38 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (409445743U)));
                    }
                    arr_47 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)71))));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        arr_50 [i_2] [(signed char)3] [(signed char)3] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)234))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28243)))))) : (((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_13]))))) ^ (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1)))))));
                        arr_51 [i_0] [i_0] [i_0] [i_13] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_23 [i_2] [(signed char)7] [i_0] [i_13])), (4394790141264702916LL)));
                        arr_52 [4LL] [8ULL] [i_2] [i_13] [i_13] = ((/* implicit */signed char) arr_37 [i_0] [i_1] [i_2] [i_13]);
                    }
                    arr_53 [i_1] = ((/* implicit */long long int) var_6);
                }
            } 
        } 
    } 
}
