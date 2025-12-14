/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149734
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
    for (long long int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) (+(arr_2 [i_0])));
        arr_4 [i_0] = (signed char)39;
        var_17 *= ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 4])) || (((/* implicit */_Bool) arr_2 [i_0])))))) : (min((((/* implicit */long long int) var_6)), (-5179868332678093846LL)))));
        arr_5 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(arr_2 [i_0 + 3])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_4) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */long long int) var_12))))) : (3130353730423028771ULL)))));
        arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_0 + 3]), (arr_1 [i_0 + 3] [22])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)9645))))) ? (((unsigned long long int) arr_2 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) var_12)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_3))) > (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) & (var_7))))))))));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 5179868332678093859LL)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (unsigned char)103))))))) + (min(((-(-236713678390313205LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1940087119)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)13)))))))));
    /* LoopNest 3 */
    for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_13 [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_15)), (((((/* implicit */_Bool) 316820601U)) ? (-236713678390313224LL) : (((/* implicit */long long int) (-(1522271567U))))))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~(((((((/* implicit */int) arr_0 [i_3])) ^ (((/* implicit */int) arr_3 [i_2])))) | (((/* implicit */int) ((short) arr_2 [i_1]))))))))));
                    var_20 = ((/* implicit */long long int) (+(((unsigned int) (signed char)-116))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_4 = 1; i_4 < 17; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */int) (!(((((/* implicit */int) arr_1 [i_2] [i_2])) > (((/* implicit */int) (signed char)-95))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_19 [i_5] [i_3] [i_1] [i_3] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_8 [i_1 + 1])) / (arr_18 [i_1] [i_2] [i_3] [i_3] [i_5] [i_2] [i_5]))))));
                            var_22 = ((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 2]);
                            arr_20 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21575)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (signed char)39))));
                            arr_21 [i_1] [i_2] [i_2] [i_3] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_1] [i_3] [i_1 + 1] [i_1 - 2] [i_3] [i_1])) / (arr_8 [i_1 - 2])));
                            arr_22 [i_1] [i_3] [i_3 - 1] [i_3 - 1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_3 - 1] [i_3 - 1] [i_3] [(signed char)0] [i_4] [i_4] [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-108))))) : (((/* implicit */int) (unsigned char)8))));
                        }
                        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            arr_25 [i_3] [i_4] [i_3 - 1] [i_2] [i_3] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)250))))));
                            arr_26 [i_4] [i_3] [i_4] [i_4 - 1] [i_3] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_8 [i_4 + 1])))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6]))));
                            arr_27 [i_1] [i_3] [i_3] [i_6] = ((/* implicit */unsigned int) arr_0 [i_1]);
                        }
                        for (int i_7 = 4; i_7 < 17; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_1] [4LL] [i_3 - 1] [i_4] [i_4] [i_7 + 1])))))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_4 - 1] [(_Bool)1] [i_4] [i_4] [i_4 + 1] [i_4 - 1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1]))) : (((long long int) (_Bool)1)))))));
                        }
                        arr_31 [i_1 - 2] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_4 - 1]))));
                        arr_32 [(unsigned char)14] [i_4] [(unsigned char)14] [i_4 + 1] [i_4] [i_3] = ((((/* implicit */_Bool) arr_14 [(unsigned char)7] [i_3] [i_3] [(unsigned char)7] [i_1 + 1] [i_4 + 1])) ? (((/* implicit */int) arr_14 [i_1] [i_3] [i_1] [i_1] [i_2] [i_4 + 1])) : (arr_30 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-52))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1] [i_3] [i_3] [(unsigned char)10] [i_4 + 1] [i_4] [i_4]))) : (arr_15 [i_4 + 1] [i_3 - 1] [i_1 - 2] [i_1 - 2])));
                    }
                    for (short i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        arr_35 [i_1] [i_1] [i_3] [i_3] [i_8] = arr_30 [i_1] [i_2] [i_1] [i_1] [i_1] [i_8];
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            arr_38 [i_1] [i_2] [i_3] [i_8] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_3 - 1] [i_3] [i_3] [i_3] [i_1])) ? (arr_34 [i_3 - 1] [i_3] [i_2] [i_2] [i_2]) : (arr_34 [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3])));
                            var_26 ^= ((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_1])) + (2147483647))) << ((((((-(((/* implicit */int) var_14)))) + (220))) - (9)))));
                            arr_39 [i_8] [i_9] [(signed char)4] [i_3] |= ((/* implicit */long long int) (((-(((/* implicit */int) arr_3 [i_9])))) & (((((/* implicit */_Bool) arr_7 [i_9])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_9]))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 207749833)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (signed char)-62))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            var_28 += ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32746)) ? (1779038344U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (var_10) : (((/* implicit */int) var_1))))) : (arr_18 [i_1] [i_1] [(_Bool)1] [i_8] [i_10] [2ULL] [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1520022670176419264LL)) ? (((((/* implicit */_Bool) 1753810366U)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (unsigned char)152)))) : ((-(((/* implicit */int) (signed char)18)))))))));
                            var_29 = ((/* implicit */unsigned long long int) 4294967288U);
                            arr_44 [i_10] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 17838250262674601380ULL))) ? (arr_28 [i_3 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 2] [(signed char)17] [i_1 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1] [i_10])) - (arr_37 [i_3]))))))) ? (((((/* implicit */_Bool) ((short) 3930181921U))) ? (((arr_10 [i_8]) - (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((arr_37 [i_3]) + (((/* implicit */int) (short)13998))))))) : (max((min((((/* implicit */long long int) arr_33 [i_1] [i_3])), (arr_40 [i_3] [i_8]))), (((/* implicit */long long int) (+(25U))))))));
                        }
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_48 [i_1] [i_1] [i_3] [i_3 - 1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_1] [i_1] [i_1] [i_1] [i_3] [i_11]))) : (((((/* implicit */_Bool) min((arr_45 [i_1] [i_2] [i_3] [i_11]), (((/* implicit */signed char) arr_41 [i_1] [i_1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]))))) ? ((~(654927628U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)104)))))))));
                        var_30 = ((/* implicit */long long int) var_6);
                        arr_49 [i_1] [(short)16] [(short)16] [(short)16] [i_3] [i_11] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_1] [i_2] [i_3] [i_11])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (2113322811) : (var_4))))))));
                    }
                }
            } 
        } 
    } 
}
