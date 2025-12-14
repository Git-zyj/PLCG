/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111280
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
    var_19 = ((/* implicit */signed char) (-((+(((/* implicit */int) max(((signed char)-67), (((/* implicit */signed char) var_7)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_13))))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((((/* implicit */_Bool) (signed char)-106)) ? (var_17) : (((/* implicit */int) arr_1 [i_2])))) : (((/* implicit */int) (unsigned char)186)))))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1336838198)) || (((/* implicit */_Bool) arr_4 [i_3 + 2] [i_3 + 2] [i_3 - 1]))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned char) ((signed char) ((int) var_14)));
        /* LoopNest 2 */
        for (signed char i_4 = 3; i_4 < 20; i_4 += 4) 
        {
            for (signed char i_5 = 1; i_5 < 20; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_24 -= ((/* implicit */unsigned char) (((~(((/* implicit */int) var_12)))) | (((/* implicit */int) var_13))));
                        var_25 = ((/* implicit */int) ((arr_16 [i_6] [i_5] [i_4] [i_0]) & (arr_16 [i_0] [i_4] [i_5 - 1] [i_0])));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) arr_13 [i_4]);
                            var_27 = ((/* implicit */int) arr_20 [i_0] [i_4 + 1] [i_5 - 1] [i_6] [i_7]);
                            var_28 = ((/* implicit */signed char) ((unsigned short) arr_10 [(unsigned short)15]));
                        }
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))));
                            arr_24 [i_0] [i_4 + 2] [6ULL] [i_0] [i_0] [i_0] [i_4 + 2] = ((/* implicit */unsigned char) ((unsigned long long int) arr_19 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5]));
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_16)))))))));
                            var_31 = ((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) arr_3 [i_0])));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)67))))))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_17) : (((/* implicit */int) var_10)))));
                            arr_27 [i_0] [i_4] [i_4] [i_0] [i_9] [i_9] = ((/* implicit */_Bool) ((unsigned short) ((int) (unsigned char)223)));
                            var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [i_9] [i_4] [i_5 - 1] [(_Bool)1] [i_9] [i_4 - 1] [i_6]))));
                        }
                        var_35 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)66)) && (((/* implicit */_Bool) (unsigned char)164))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */_Bool) ((long long int) arr_10 [i_0]));
                            var_38 = ((/* implicit */signed char) var_11);
                        }
                        for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4 + 2]))));
                            var_40 = ((/* implicit */int) (~(arr_9 [i_12] [i_12 + 1] [i_5 + 2] [i_4 + 2])));
                            arr_34 [i_0] [i_4] [(unsigned short)2] [10LL] [i_12] &= ((/* implicit */long long int) ((_Bool) (~(var_1))));
                        }
                        for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 1) /* same iter space */
                        {
                            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) arr_36 [i_4 + 1] [0U] [i_5 + 2] [0U] [(signed char)16] [i_13 - 1] [i_13 + 1]))));
                            var_42 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(short)0]))) ^ (arr_30 [i_0] [i_4 - 3] [20LL] [i_10]))));
                            var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) var_16))));
                            var_44 = ((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 + 2])) ? ((~(1336838198))) : ((-(((/* implicit */int) arr_37 [i_0] [i_4] [i_5 + 1] [i_10] [i_13 + 1])))));
                            arr_38 [i_0] [i_4] [i_5] [i_10] [i_0] = ((/* implicit */long long int) var_16);
                        }
                        var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_0] [i_4] [i_4 + 2])) ? (((/* implicit */int) arr_32 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1] [(unsigned char)16] [i_10])) : (((/* implicit */int) arr_32 [i_0] [i_4] [i_4] [i_4] [i_5 + 2] [18] [i_10])))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
                    {
                        arr_41 [i_0] [i_4 - 2] [i_5] = ((/* implicit */unsigned char) (-(-1129190506)));
                        var_46 = ((/* implicit */unsigned short) (~(arr_4 [11ULL] [i_4] [i_14])));
                    }
                }
            } 
        } 
    }
    var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 977651993)) || (((/* implicit */_Bool) (unsigned short)0))));
    /* LoopNest 2 */
    for (long long int i_15 = 2; i_15 < 11; i_15 += 2) 
    {
        for (unsigned long long int i_16 = 2; i_16 < 11; i_16 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    for (unsigned short i_18 = 1; i_18 < 9; i_18 += 1) 
                    {
                        {
                            arr_53 [i_16] = ((/* implicit */unsigned char) (unsigned short)38023);
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (int i_19 = 0; i_19 < 12; i_19 += 3) /* same iter space */
                            {
                                var_48 -= ((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_39 [i_16 - 2] [i_18 - 1] [(signed char)15] [i_15 - 1]))));
                                var_49 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_15 - 2] [i_16 - 2])) * (((/* implicit */int) var_8))));
                                arr_58 [i_15] [i_18] [i_15] [(short)10] [i_15] |= ((/* implicit */long long int) var_13);
                                var_50 -= ((/* implicit */unsigned short) arr_31 [i_15] [i_15] [i_15]);
                            }
                            /* vectorizable */
                            for (int i_20 = 0; i_20 < 12; i_20 += 3) /* same iter space */
                            {
                                var_51 = ((/* implicit */int) (short)-14890);
                                var_52 = ((/* implicit */signed char) arr_48 [i_15 - 2] [i_16] [i_16] [i_16 + 1]);
                                arr_62 [i_15] [i_16] [i_15] &= ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 10153500154461119968ULL)))));
                            }
                            /* vectorizable */
                            for (int i_21 = 0; i_21 < 12; i_21 += 3) /* same iter space */
                            {
                                var_53 = ((/* implicit */unsigned short) var_14);
                                var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_32 [i_15 - 1] [i_16 + 1] [i_16 - 2] [i_21] [i_21] [i_15] [i_21])))))));
                            }
                            var_55 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (!(var_10)))))) ^ ((-(((/* implicit */int) arr_25 [i_18 + 3] [i_18] [i_18 + 2] [i_18] [i_18 - 1] [i_18 + 3] [i_18]))))));
                            var_56 = ((/* implicit */unsigned long long int) min((var_56), (((/* implicit */unsigned long long int) (-(((long long int) var_11)))))));
                            arr_65 [i_15] [i_16] [i_16] [i_16] = ((/* implicit */_Bool) max(((+((-(((/* implicit */int) var_11)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 3865331071403880863LL)) <= (arr_35 [i_15 + 1]))))));
                        }
                    } 
                } 
                var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) (+(((arr_43 [i_16 + 1]) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) arr_43 [i_16 + 1])))))))));
                arr_66 [i_16] [i_16] = ((/* implicit */int) (unsigned char)32);
            }
        } 
    } 
    var_58 = ((/* implicit */unsigned short) var_6);
}
