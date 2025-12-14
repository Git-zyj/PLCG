/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119495
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) 8644227940572011179ULL)) ? ((+(var_11))) : (((/* implicit */unsigned int) ((int) arr_1 [i_0 + 1]))));
        var_18 = var_14;
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 11; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) var_0);
                        arr_17 [i_3] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (arr_0 [i_1 - 1])));
                        var_20 -= ((/* implicit */unsigned int) arr_1 [i_1 + 1]);
                    }
                } 
            } 
        } 
        arr_18 [i_1] |= ((/* implicit */unsigned int) (~(arr_9 [i_1] [i_1 + 4] [i_1])));
        var_21 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1 + 3] [i_1]))));
    }
    for (unsigned char i_5 = 4; i_5 < 11; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_6 = 4; i_6 < 14; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                {
                    var_22 = ((/* implicit */long long int) (-((~(arr_4 [i_6 - 3] [i_5 + 2])))));
                    arr_27 [i_5] [i_5] [i_5] [(unsigned char)2] = min((((/* implicit */long long int) (-(var_11)))), (((long long int) min((((/* implicit */unsigned short) var_10)), (var_6)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 1; i_8 < 13; i_8 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            arr_34 [i_5] [i_9] [i_5] [(short)12] [i_5] = ((/* implicit */unsigned int) max((min((((/* implicit */int) arr_29 [7U] [i_6 - 3] [7U] [i_8] [i_9])), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) var_2)))))), (min(((-(((/* implicit */int) arr_15 [13] [i_6] [i_6] [i_8 + 2])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_16 [i_6] [i_6] [i_7])) : (1689441582)))))));
                            var_23 -= ((/* implicit */unsigned short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)69))))) << ((((~(((/* implicit */int) var_2)))) - (50)))))));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (~((~(((long long int) arr_21 [i_5])))))))));
                        }
                        for (int i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            var_25 += ((/* implicit */long long int) (unsigned char)255);
                            arr_38 [i_5 + 4] [i_5 + 4] [i_7] [i_5 + 4] [i_10] = ((/* implicit */signed char) ((_Bool) var_15));
                            arr_39 [i_5] [i_6] [i_5] [i_8] [i_10] = ((/* implicit */short) (_Bool)1);
                            arr_40 [i_10] [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 3] = ((/* implicit */long long int) var_16);
                        }
                        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            var_26 -= ((/* implicit */short) min((max((((((/* implicit */_Bool) arr_24 [i_5] [i_6 - 2] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (196746707477538592LL))), (((/* implicit */long long int) max((var_14), ((unsigned char)193)))))), (((/* implicit */long long int) (unsigned char)62))));
                            var_27 = (~(((/* implicit */int) (_Bool)1)));
                            arr_43 [i_7] = ((/* implicit */unsigned char) min((max((arr_5 [i_5]), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_29 [i_5] [i_6 - 2] [i_7] [(unsigned char)0] [(unsigned char)8])) + (2147483647))) << (((arr_22 [i_5] [(unsigned char)11] [i_11]) - (3924233015U)))))))), (((/* implicit */unsigned int) var_10))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) 
                        {
                            arr_46 [i_6] [i_6] [i_6] [i_5] = ((/* implicit */_Bool) (-(arr_41 [i_5 - 3] [i_5] [i_5 + 3] [i_5 - 2] [i_5 + 1])));
                            arr_47 [i_12] [(unsigned short)2] [i_5] [i_7] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((var_5) != (((/* implicit */long long int) ((/* implicit */int) min((((3326300577U) < (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((_Bool) var_12))))))));
                            arr_48 [i_5] [i_6] [i_6] [i_7] [i_5] [i_8 + 2] [i_12] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_19 [i_5] [i_8 + 2]) + (2520998010U)))), (((((/* implicit */_Bool) 656777553U)) ? (13951875407917850273ULL) : (((/* implicit */unsigned long long int) 116761365U))))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) 1668244483832589851LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6]))) : (2119578502U)))))) : (max((((/* implicit */long long int) -342879212)), (((((/* implicit */_Bool) arr_13 [i_5 + 2] [i_6] [i_7] [i_8] [i_8] [i_5 + 2])) ? (-196746707477538593LL) : (((/* implicit */long long int) arr_19 [i_5] [i_5]))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 2; i_13 < 13; i_13 += 2) 
                        {
                            var_28 = ((/* implicit */int) (-((~((~(599447592U)))))));
                            var_29 *= ((/* implicit */_Bool) (~(((unsigned long long int) (unsigned char)1))));
                        }
                        arr_53 [i_5 - 2] [i_6] [i_7] [i_8] = ((/* implicit */signed char) arr_45 [i_5] [i_6 - 3] [i_6 - 1] [i_7] [i_6 - 3] [i_8] [i_8]);
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_50 [i_7] [i_6 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)1)))) * (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_16 [i_5] [i_6] [i_5])))))))));
                        var_31 ^= ((/* implicit */signed char) min((((/* implicit */int) arr_37 [i_8 - 1] [i_8] [(unsigned short)14] [i_6] [i_6] [i_5 + 1] [i_5])), ((-(((/* implicit */int) (signed char)-74))))));
                    }
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)17200)) >= (arr_32 [i_5] [i_5] [i_5] [i_5 - 3] [i_5] [i_5 - 3] [i_5 - 3]))))));
                    var_33 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) ((unsigned int) arr_9 [3LL] [3LL] [i_7]))), (arr_9 [i_5] [i_6 - 4] [i_7]))), (((/* implicit */long long int) min((((/* implicit */int) var_17)), (((((/* implicit */_Bool) -3194332090080812331LL)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) var_4)))))))));
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_13 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 - 3] [i_5])))) ? (((/* implicit */long long int) min((arr_41 [i_5] [i_5] [i_5] [i_5] [i_5 + 2]), (((/* implicit */unsigned int) (unsigned char)193))))) : (((long long int) arr_16 [i_5] [i_5 - 1] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3525942861419397600ULL)) ? (((/* implicit */int) arr_10 [i_5])) : (-1030329091)))))))) : ((+((-(599421631U)))))));
        var_35 -= ((((/* implicit */long long int) min(((~(((/* implicit */int) arr_25 [i_5] [i_5] [i_5])))), (((/* implicit */int) arr_23 [i_5 - 4] [i_5 + 1]))))) % ((-(min((-502278046528972717LL), (((/* implicit */long long int) (signed char)73)))))));
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) - (((((/* implicit */unsigned long long int) 7232405486508728184LL)) * (arr_44 [i_5 + 1] [i_5] [i_5 + 2] [i_5] [i_5] [i_5 - 3] [i_5 + 3])))));
    }
    var_37 = ((/* implicit */long long int) (-(4194240U)));
    var_38 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 2078094127)) && (((/* implicit */_Bool) 2141506939U))))) + (((var_15) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_6)) + (((/* implicit */int) var_4))))))));
}
