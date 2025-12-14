/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167360
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)54)), ((unsigned short)54260)))) ? (5765929526607283753ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_0]))))));
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                            {
                                var_19 ^= ((/* implicit */short) arr_4 [i_4]);
                                var_20 = ((/* implicit */unsigned int) ((unsigned char) max((arr_8 [i_1 - 1] [i_0]), (arr_8 [i_1 - 1] [i_0]))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) (signed char)117));
                                var_21 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)0))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                            {
                                var_22 = ((/* implicit */long long int) ((unsigned char) arr_12 [i_0] [i_0]));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 12355183749772991479ULL)) ? (16796800294922985630ULL) : (12355183749772991479ULL)));
                                var_24 = ((int) arr_7 [0] [i_0]);
                            }
                            var_25 ^= ((/* implicit */long long int) arr_7 [i_1 + 1] [i_2]);
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) arr_7 [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_7] [i_0] [i_1 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18390596452410723105ULL)))))) : (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (6091560323936560137ULL) : (var_8)))))) ? (max((arr_5 [i_1] [i_1] [i_1 - 1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)134)) < (arr_24 [i_0] [(unsigned short)12] [i_6] [(unsigned short)12] [i_0])))))) : (((unsigned long long int) ((int) arr_21 [i_6] [i_0] [i_6] [i_6])))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((6091560323936560140ULL), (((/* implicit */unsigned long long int) (signed char)116))))) ? (12355183749772991479ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                            var_29 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 56147621298828480ULL)) ? (18390596452410723135ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122)))))) || (((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_8 [i_0] [i_0])))))));
                            arr_26 [i_0] [i_0] [i_6] [9ULL] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (arr_23 [i_6] [(_Bool)1])))) ? (var_8) : (min((56147621298828470ULL), (6091560323936560140ULL)))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    var_30 = ((/* implicit */signed char) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            {
                                var_31 ^= ((/* implicit */unsigned short) var_8);
                                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_0] [0ULL] [i_9])) ? (((long long int) arr_3 [14] [14])) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))))));
                                var_33 = ((/* implicit */long long int) (((!(((((/* implicit */_Bool) arr_32 [i_0])) || (((/* implicit */_Bool) arr_5 [i_1] [i_8] [i_9] [i_10])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18390596452410723105ULL)) && (((/* implicit */_Bool) 2476154346U)))))) : (min((((/* implicit */unsigned long long int) (unsigned char)134)), (min((arr_5 [(signed char)6] [i_1] [i_1 - 3] [i_1 - 2]), (((/* implicit */unsigned long long int) arr_4 [i_0]))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_11 = 4; i_11 < 13; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 4) 
                        {
                            {
                                arr_42 [i_0] [i_1 - 3] [i_0] [i_1 - 3] [i_1] [(short)7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_13] [i_11 + 2] [i_1] [i_0])) ? (((((/* implicit */_Bool) 14130307417048379289ULL)) ? (((/* implicit */int) arr_22 [i_0] [i_0] [(signed char)1])) : (((/* implicit */int) (unsigned char)134)))) : (((/* implicit */int) var_10))));
                                arr_43 [i_0] [i_0] [i_11] [i_12] [7LL] = ((/* implicit */long long int) ((short) ((unsigned long long int) 1818812950U)));
                                var_34 = ((/* implicit */long long int) (-(18390596452410723105ULL)));
                                var_35 += ((/* implicit */unsigned short) ((unsigned int) 18390596452410723090ULL));
                                arr_44 [i_0] [i_0] [(unsigned short)14] [i_0] [i_13] [i_1] = ((((/* implicit */_Bool) (unsigned char)117)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) (unsigned char)146))))));
                            }
                        } 
                    } 
                    var_36 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_11] [i_11] [i_11 - 4] [i_11] [i_1 + 1])) ? (56147621298828485ULL) : (((/* implicit */unsigned long long int) 2632324849U))));
                }
                for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((long long int) arr_3 [(signed char)0] [(signed char)0])) / (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)30106)), (-4611686018427387904LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_14] [i_14] [(unsigned short)0] [i_1 - 2] [i_1]))) : (arr_33 [2ULL]))))))));
                    var_38 = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0] [2U] [2U] [(_Bool)1]);
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 1; i_15 < 14; i_15 += 2) 
                    {
                        for (long long int i_16 = 1; i_16 < 12; i_16 += 4) 
                        {
                            {
                                arr_53 [(short)4] [i_15] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((_Bool) (_Bool)1))), (56147621298828525ULL)));
                                var_39 = min((((((/* implicit */_Bool) arr_19 [i_1] [i_15] [i_15] [i_0] [i_16 - 1] [i_16])) ? (((/* implicit */int) arr_19 [i_0] [(signed char)2] [i_1] [i_0] [i_16 - 1] [i_0])) : (((/* implicit */int) arr_19 [i_1 - 1] [i_14] [i_14] [i_0] [i_16 + 2] [i_16])))), (max((arr_36 [i_15 + 1] [i_15] [i_15 + 1] [i_15 - 1]), (arr_36 [i_15 + 1] [9] [i_15] [i_15 + 1]))));
                            }
                        } 
                    } 
                    var_40 &= ((/* implicit */unsigned int) (unsigned char)92);
                }
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned long long int) ((short) (+(((((/* implicit */int) (unsigned short)35429)) ^ (((/* implicit */int) var_2)))))));
    var_42 = ((/* implicit */long long int) max((var_42), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_7)) ? (18390596452410723082ULL) : (18390596452410723145ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25646)) ? (((/* implicit */int) (unsigned short)1094)) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (unsigned short)35429)) : (((/* implicit */int) var_17))))) : (-8123685569583043827LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)163)) > (((/* implicit */int) (unsigned char)120))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (1953671520))))))))));
}
