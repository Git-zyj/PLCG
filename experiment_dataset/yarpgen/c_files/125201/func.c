/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125201
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    var_15 = ((/* implicit */signed char) arr_5 [i_2] [i_2] [i_2]);
                    arr_10 [i_0] [i_1 + 2] [i_2 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (-18) : (-17))))));
                }
                for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        for (signed char i_5 = 2; i_5 < 22; i_5 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [i_5 - 2]), (arr_3 [i_0])))) && (((/* implicit */_Bool) var_2))));
                                var_17 = ((/* implicit */signed char) arr_7 [(_Bool)1] [i_1] [i_4]);
                                arr_18 [i_4] [i_1 - 1] [i_4] [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned char) min((arr_16 [i_1 - 1] [i_5 + 1] [22LL] [i_5 - 1] [14ULL] [i_4] [i_5]), (arr_16 [i_1 + 1] [i_5 + 1] [i_5] [i_5] [i_5 + 1] [i_4] [i_5 - 1])))), (arr_11 [i_0] [i_1] [i_1] [i_1])));
                                var_18 = ((/* implicit */unsigned int) ((signed char) max((((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_3] [i_0]))))), (((/* implicit */long long int) max((((/* implicit */unsigned char) arr_9 [16LL] [(_Bool)0] [16LL])), (arr_17 [i_5] [i_0] [i_0] [(unsigned char)8] [i_1] [i_0])))))));
                                var_19 += ((/* implicit */unsigned char) arr_6 [i_0] [i_3] [i_3] [i_5]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        for (signed char i_7 = 1; i_7 < 21; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_11 [i_0] [(short)3] [i_0] [i_6]), (((/* implicit */unsigned char) arr_0 [i_7])))))) ^ (min((arr_7 [10ULL] [10ULL] [i_3]), (arr_24 [i_1]))))));
                                var_21 = ((/* implicit */unsigned char) ((unsigned long long int) arr_16 [i_0] [i_0] [i_1 + 3] [i_1] [i_3] [i_3] [i_7]));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((arr_7 [i_1 + 1] [i_3] [i_7]), (((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0] [i_0] [(signed char)6] [i_0])))) + (min((((/* implicit */long long int) arr_11 [i_0] [i_1] [i_3] [i_0])), (arr_13 [i_6 - 1] [0LL])))))) ? (((((/* implicit */_Bool) max((arr_17 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0]), (((/* implicit */unsigned char) arr_6 [i_0] [i_3] [i_6 - 1] [i_7]))))) ? (((((/* implicit */int) (_Bool)0)) | (0))) : (((var_1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) ((max((var_11), (((/* implicit */unsigned long long int) -7357829589885425382LL)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) || (((/* implicit */_Bool) var_4)))))))))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_6 - 1] [i_6] [i_6])) ? (((((/* implicit */int) arr_20 [i_0] [i_3] [i_3] [i_6] [i_7 - 1] [i_3])) + (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_23 [i_1] [(unsigned char)4] [(unsigned char)4] [i_1] [i_6 - 1]))))) > (((arr_2 [i_3] [i_7 + 1]) >> (((arr_2 [i_1 + 2] [i_6]) - (16423406869884709258ULL)))))));
                                var_24 = ((/* implicit */signed char) -1LL);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_25 = ((((unsigned long long int) arr_26 [i_0] [i_1 + 2] [i_8] [i_8] [i_8] [i_8])) > (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) < (5360785483724274524LL)))));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            arr_32 [i_0] [i_1] [i_0] [i_1] [i_8] = ((/* implicit */signed char) arr_8 [i_0]);
                            var_26 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((arr_2 [i_0] [i_0]) == (arr_12 [i_1] [i_1] [i_1])))))) ^ (((((((/* implicit */int) (signed char)-51)) > (((/* implicit */int) var_1)))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                            var_27 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) max((var_1), (var_1)))) : (((/* implicit */int) ((arr_28 [i_3] [i_3] [(unsigned short)4] [i_3]) != (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_9] [i_8] [i_9] [i_1]))))))))), (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) max((-7996155433130445221LL), (arr_28 [i_0] [i_8] [i_8] [i_8]))))))));
                            var_28 = ((/* implicit */signed char) ((((unsigned long long int) arr_6 [i_1] [i_3] [i_3] [i_8])) == (((/* implicit */unsigned long long int) ((int) max((arr_14 [i_1] [i_8]), (arr_28 [i_0] [i_3] [i_0] [i_9])))))));
                            arr_33 [i_0] [i_3] [i_3] &= ((/* implicit */_Bool) max((min((arr_13 [i_0] [i_8]), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_8] [i_8] [i_0] [i_8]))) == (arr_13 [i_0] [i_1])))))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-102)))) + (129))) - (26))))))));
                        }
                        arr_34 [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_8] [i_0])))));
                        arr_35 [13ULL] [7LL] [13ULL] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_1] [i_1] [i_1 + 3])))) != ((-(((unsigned long long int) (_Bool)1))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) 
                        {
                            {
                                var_29 = min((7996155433130445221LL), (((/* implicit */long long int) ((((/* implicit */int) (short)8917)) ^ (-1)))));
                                arr_40 [i_0] [i_1] [22ULL] [i_10] [i_11] [i_1] [i_3] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_26 [i_11] [i_10] [i_3] [i_3] [i_1] [i_0]))))) > (((unsigned int) arr_30 [i_1] [i_10])))) ? (((((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 2])) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_3] [i_10] [19ULL] [i_10]))))))) : ((-(((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_6)))))))));
                                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_39 [(unsigned char)22] [i_1 + 1] [i_1 + 2] [i_1 + 2] [(unsigned char)22] [i_1 + 2] [13LL])) == (((/* implicit */int) max((arr_25 [i_0] [i_1 - 1] [i_3] [i_10] [i_1 + 2] [i_10]), ((unsigned char)167))))))) * (((/* implicit */int) (signed char)0))));
                                var_31 = ((/* implicit */unsigned long long int) ((((arr_0 [i_1 + 1]) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) (unsigned char)156)))) * (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 3])) > (((/* implicit */int) arr_0 [i_1 - 1])))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_29 [i_12] [i_12] [i_12] [i_13])), (arr_46 [i_13] [i_12] [i_1] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0])) << (((var_10) - (12194624227655354193ULL))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1 - 1] [i_12] [i_12] [i_13])) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (unsigned char)237)))) >= (((/* implicit */int) arr_0 [i_12])))))) : (min((((arr_31 [i_13] [i_1] [i_1] [i_1 + 2]) ? (arr_42 [i_0] [i_0] [i_12] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_0]))))), (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_1] [i_1 + 1] [i_13] [i_13])) ? (arr_12 [7ULL] [i_1] [i_1]) : (arr_41 [i_0] [i_0] [i_0])))))));
                            var_33 = ((/* implicit */unsigned long long int) arr_37 [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_14 = 1; i_14 < 22; i_14 += 4) 
                {
                    for (long long int i_15 = 2; i_15 < 21; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 1; i_16 < 21; i_16 += 4) 
                        {
                            {
                                arr_56 [i_0] [i_1] [i_14] [i_15 - 1] [i_0] = ((/* implicit */long long int) arr_23 [i_0] [i_0] [16ULL] [16ULL] [4LL]);
                                var_34 = ((/* implicit */int) ((min((((/* implicit */long long int) 2527024827U)), (-8150298442881955823LL))) >= (((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_0] [i_15 + 2] [(_Bool)1] [i_0] [i_14 + 1] [i_1])) + (((/* implicit */int) arr_20 [i_0] [i_15 - 2] [i_14 - 1] [i_15] [i_14 - 1] [i_1])))))));
                                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (-6943100245045392162LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_15] [i_15] [i_15] [i_15] [i_15])) || (((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_0] [i_0] [i_15 + 2])))))))) == ((-(arr_45 [i_15] [i_1] [i_0]))))))));
                                arr_57 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_3))) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_47 [i_1])) : (((/* implicit */int) arr_1 [i_0]))))))) | (max((2961512857453709647ULL), (((/* implicit */unsigned long long int) (signed char)-1))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_36 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_4)) >= (11ULL))) && (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned char)250))))))), (var_11)));
    /* LoopNest 2 */
    for (long long int i_17 = 0; i_17 < 24; i_17 += 3) 
    {
        for (signed char i_18 = 0; i_18 < 24; i_18 += 3) 
        {
            {
                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_62 [i_17] [i_17] [i_18]))) ? (((unsigned long long int) (signed char)-122)) : (((/* implicit */unsigned long long int) (~(arr_62 [i_17] [i_17] [i_17]))))));
                var_38 = ((/* implicit */long long int) ((unsigned int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_18]))) : (arr_62 [i_17] [i_17] [i_17]))), (((long long int) arr_58 [i_17])))));
                var_39 = ((/* implicit */int) var_6);
            }
        } 
    } 
}
