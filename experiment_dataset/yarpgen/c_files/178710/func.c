/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178710
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_10)))))) ? (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_3))), (((/* implicit */unsigned long long int) (_Bool)1)))) : ((+(min((((/* implicit */unsigned long long int) var_13)), (var_12)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_1] = max((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_3 [i_0] [i_1])))), (((/* implicit */int) (_Bool)1))))));
                arr_5 [i_1] = var_8;
                var_15 = ((/* implicit */long long int) arr_3 [i_0] [i_0 - 4]);
                /* LoopSeq 3 */
                for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_7 [i_2] [i_2 + 1] [i_2 + 1]))))) : (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_0])) ? (((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_1])))) || (((/* implicit */_Bool) (signed char)0))))) : (((((/* implicit */_Bool) 1248005466190306086LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : ((~(((/* implicit */int) var_11)))))))))));
                        arr_11 [i_1] [i_1 + 1] [i_2] [i_3] = ((/* implicit */int) (!((!((!(((/* implicit */_Bool) var_7))))))));
                        var_18 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) (short)16015)))) && ((_Bool)1))) || (((/* implicit */_Bool) var_9))));
                    }
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_19 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((unsigned long long int) var_2))))) || ((_Bool)1)));
                            var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_4])) || (((/* implicit */_Bool) var_1))))), (1096528442)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_8 [(signed char)19] [i_1]))))));
                            arr_17 [i_0] [i_0] [12LL] [i_2 + 1] [i_0] [i_4] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_0] [i_4]))))))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-1)) | (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_8 [i_2 + 1] [i_5]))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_22 -= ((/* implicit */unsigned int) min((((((/* implicit */int) arr_7 [i_6] [i_6] [i_2])) * (((/* implicit */int) ((unsigned short) arr_13 [i_0] [i_0] [1LL] [1LL] [i_0 + 1] [i_0 - 4]))))), (((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 - 2] [(unsigned short)8] [i_6] [i_6] [i_4])), (6ULL)))))));
                            var_23 |= ((/* implicit */long long int) (((+(((/* implicit */int) arr_6 [i_1 - 1] [i_2 - 2] [i_2 - 2])))) + (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_15 [16U] [(unsigned short)4] [i_2] [i_4] [i_6]), (((/* implicit */long long int) arr_2 [8U]))))))))));
                            var_24 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_14 [i_0] [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_14 [i_2 + 1] [i_1]), (((/* implicit */unsigned char) (_Bool)1)))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (14805072630962228156ULL))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (arr_13 [i_0] [i_0] [i_2] [i_4] [i_4] [i_6]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) + (var_12)))))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((_Bool) arr_19 [i_4] [i_0] [i_0])))));
                        }
                        var_26 = ((/* implicit */_Bool) 18446744073709551609ULL);
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) arr_6 [(signed char)18] [i_1] [i_2 - 1]))));
                    }
                }
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 17; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) arr_22 [i_1]);
                        var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_15 [i_0] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_8])) || (((/* implicit */_Bool) arr_10 [i_1])))) ? ((+(((/* implicit */int) arr_19 [i_0] [i_7 + 1] [(signed char)19])))) : (((/* implicit */int) arr_24 [i_8 + 1] [i_7 - 1] [i_1 + 1] [i_0 - 1]))));
                    }
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_24 [i_0] [i_0] [i_0] [i_7]))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 4; i_10 < 19; i_10 += 1) 
                    {
                        var_30 *= ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_0] [i_1])) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_9] [i_0]))));
                        var_31 = ((/* implicit */_Bool) ((unsigned int) arr_31 [i_1] [i_1]));
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((short) arr_19 [i_0 - 2] [i_1] [i_0 - 2]))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (2687716230U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9))))))))));
                    }
                    var_33 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) arr_18 [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_1] [i_0 - 4] [i_0 - 1])))), (((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_9))) != (((unsigned long long int) arr_21 [i_1]))))));
                    var_34 = ((/* implicit */long long int) arr_22 [i_1]);
                    arr_33 [i_1] = ((/* implicit */short) max(((+(((/* implicit */int) ((signed char) arr_24 [i_9] [i_9] [i_0 + 2] [i_0 + 2]))))), (((/* implicit */int) min((arr_26 [i_1] [i_1]), (((short) arr_2 [i_1])))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_11 = 1; i_11 < 17; i_11 += 3) 
                {
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_13 = 3; i_13 < 19; i_13 += 3) 
                            {
                                arr_45 [17ULL] [17ULL] [i_1] [i_13] [i_13 - 3] [i_13] [i_0 + 2] = ((/* implicit */unsigned short) arr_30 [i_1] [i_12] [i_11 - 1] [i_1]);
                                var_35 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((-(arr_13 [i_0 - 4] [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_1 + 1] [i_0] [i_12]))) + (arr_21 [i_12]))));
                                var_36 &= ((/* implicit */signed char) arr_35 [i_0] [i_12]);
                                arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1] = (signed char)6;
                                var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (+(((((/* implicit */int) arr_27 [i_1] [i_12] [i_13])) * (((/* implicit */int) var_4)))))))));
                            }
                            var_38 = ((/* implicit */short) ((((((/* implicit */int) var_8)) - (((/* implicit */int) arr_28 [i_1] [i_1])))) != (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_28 [i_1] [i_1])) : (((/* implicit */int) arr_28 [i_1] [i_1]))))));
                            arr_47 [i_0] [i_12] [i_0] [(signed char)16] [(signed char)6] &= ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) arr_42 [i_12] [i_11] [i_11] [i_11] [i_11 - 1] [i_11 + 3])))), (((((/* implicit */_Bool) 16026547615687837398ULL)) && (((/* implicit */_Bool) arr_42 [i_12] [i_11] [i_11 + 3] [i_11] [i_11 + 2] [i_11 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_39 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_9))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), (var_12)))));
    var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) min((var_11), (var_7)))) : (((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))))))))));
}
