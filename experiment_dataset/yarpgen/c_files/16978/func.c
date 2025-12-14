/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16978
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (var_0)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) max(((-(var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3062882122U)) ^ (-7429054324397400522LL)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_0] &= ((/* implicit */signed char) ((arr_7 [i_0] [i_1] [i_2] [i_1]) | (((((/* implicit */_Bool) 0)) ? (3553690521098719718ULL) : (((/* implicit */unsigned long long int) -776761024318524925LL))))));
                        /* LoopSeq 3 */
                        for (int i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (((~(var_0))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))))));
                            arr_13 [i_2] [i_1] [i_2] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14893053552610831886ULL)) ? (36028728299487232LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4 + 1])))));
                            var_13 = ((/* implicit */_Bool) var_0);
                        }
                        for (signed char i_5 = 1; i_5 < 15; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */long long int) ((var_4) ? (var_2) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) & (var_2)))));
                            arr_16 [i_0] [i_2] = ((/* implicit */int) 3365136558U);
                        }
                        for (unsigned short i_6 = 2; i_6 < 15; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) / (((((/* implicit */_Bool) 776761024318524924LL)) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_0] [i_3] [i_0] [i_0])) : (var_0)))));
                            var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 776761024318524925LL)) ? (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (signed char)92))))) : (((/* implicit */int) (_Bool)0))));
                            var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (arr_11 [i_6] [i_0] [i_6] [i_6] [i_0] [i_6 - 2] [i_6 - 2])));
                            var_18 ^= ((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_2] [i_3] [i_3] [i_6]);
                        }
                        var_19 ^= ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0]))))) ^ (((unsigned int) -2196731672376861471LL))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 13; i_7 += 1) 
                    {
                        arr_22 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((arr_14 [i_2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((_Bool) arr_2 [i_1] [i_1])), (var_7)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_2] [i_2] [i_7] [i_8] = ((/* implicit */_Bool) (((+(arr_7 [i_8 - 1] [i_1] [i_1] [i_7 - 2]))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
                            arr_27 [i_0] [i_2] [i_2] [i_2] [i_2] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_8] [i_2] [i_7 + 4] [i_2] [i_7 - 1])) & (((/* implicit */int) (short)-9956))))) ? ((-(((/* implicit */int) arr_19 [i_7] [i_7 - 1] [i_2] [i_7 + 3] [i_7 - 2])))) : (((/* implicit */int) ((((/* implicit */int) arr_23 [i_8 - 1] [i_2] [i_7 + 3] [i_2] [i_7 + 3])) == (((/* implicit */int) arr_23 [i_7 + 4] [i_2] [i_7 - 1] [i_2] [i_7 + 4])))))));
                            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_23 [i_0] [i_2] [i_2] [i_2] [i_2])), ((unsigned char)255)))) ? ((~(((/* implicit */int) (unsigned char)14)))) : (((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) (unsigned short)63739)) : (((/* implicit */int) (signed char)-111)))))) & (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_8]))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            arr_31 [i_0] [i_2] [i_2] [i_7] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (var_0))))));
                            arr_32 [i_0] [i_0] [i_2] [i_0] [i_9] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_7 + 4] [i_7] [i_7] [i_2])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_7 - 2] [i_2] [i_1] [i_2])))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)133)) || (var_3))) && ((!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_7]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_2] [i_0] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (-776761024318524926LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 776761024318524919LL))))) : (((/* implicit */int) ((unsigned short) -776761024318524932LL)))))));
                            arr_33 [i_0] [i_1] [i_2] [i_7 + 4] [i_7 - 1] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((unsigned char) (unsigned short)31694)))) ? ((-9223372036854775807LL - 1LL)) : (776761024318524926LL)));
                            var_21 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_0))))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_2))));
                        }
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((unsigned int) ((unsigned short) ((0) & (((/* implicit */int) (unsigned char)128)))))))));
                        arr_34 [i_2] [i_1] = ((/* implicit */signed char) arr_24 [i_0] [i_1] [i_2] [i_7] [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        arr_39 [i_2] = ((/* implicit */short) ((long long int) ((var_1) * (var_2))));
                        arr_40 [i_0] [i_2] [i_2] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -776761024318524932LL)) ? (((/* implicit */int) arr_37 [i_10] [i_2] [i_2] [i_0])) : (((/* implicit */int) (short)-16732))));
                        arr_41 [i_1] [i_1] [i_10] &= ((/* implicit */unsigned char) ((var_0) * (((/* implicit */unsigned long long int) 1948264496))));
                        arr_42 [i_2] [i_1] [i_1] [i_2] [i_10] = ((/* implicit */_Bool) var_6);
                    }
                    for (unsigned short i_11 = 2; i_11 < 13; i_11 += 3) 
                    {
                        arr_47 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7488271273465396376LL)) ? (((/* implicit */int) arr_18 [i_11] [i_11 - 2] [i_11 + 4] [i_11 + 1] [i_11 + 3] [i_11 + 1])) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_11 + 3] [i_11 + 1] [i_2] [i_1] [i_1] [i_0])))))))));
                        arr_48 [i_11] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) var_8);
                        var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (unsigned short)3125)) : (((/* implicit */int) (short)-22430))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_4)), (arr_28 [i_11 + 4] [i_11] [i_11 - 1] [i_1] [i_11 + 3])))) : (((int) arr_28 [i_11 + 4] [i_11 + 2] [i_11 - 1] [i_0] [i_11 + 3]))));
                        arr_49 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_29 [i_2]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6629133875052092212ULL)) ? (((/* implicit */unsigned long long int) arr_43 [i_0] [i_0] [i_2] [i_11 + 2] [i_2] [i_11])) : (6629133875052092212ULL)))) ? (((/* implicit */int) ((signed char) var_3))) : (((((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_2] [i_11] [i_11 - 2])) ? (((/* implicit */int) arr_37 [i_11] [i_2] [i_2] [i_0])) : (((/* implicit */int) (unsigned short)33842)))))) : (((((/* implicit */_Bool) arr_36 [i_11 + 2] [i_11 + 2] [i_11 - 1] [i_11 - 1] [i_11 - 2])) ? (((/* implicit */int) ((unsigned short) (signed char)124))) : (((/* implicit */int) ((_Bool) (unsigned short)4095)))))));
                    }
                    arr_50 [i_1] [i_1] &= var_6;
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (short i_12 = 1; i_12 < 21; i_12 += 2) 
    {
        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            {
                arr_55 [i_13] [i_13] [i_12 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_12])) ? (((/* implicit */int) arr_52 [i_12])) : (((/* implicit */int) arr_51 [i_12 - 1]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (arr_51 [i_12])))) : (((((/* implicit */int) var_3)) << (((((/* implicit */int) (short)30141)) - (30139)))))));
                arr_56 [i_12 - 1] [i_13] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max(((signed char)-73), (((/* implicit */signed char) ((_Bool) var_9)))))), (var_2)));
                /* LoopSeq 1 */
                for (short i_14 = 3; i_14 < 20; i_14 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 3; i_15 < 21; i_15 += 1) 
                    {
                        for (long long int i_16 = 1; i_16 < 21; i_16 += 4) 
                        {
                            {
                                arr_66 [i_12 + 1] [i_13] [i_14 + 2] [i_15 + 1] |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_60 [i_14 - 1] [i_14 - 1]))))) : ((~(var_9))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_51 [i_12]), (((/* implicit */unsigned char) var_7))))))))));
                                arr_67 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_14])) ? (((/* implicit */int) (signed char)-125)) : (((((/* implicit */int) (unsigned short)44732)) << (((((/* implicit */int) (unsigned char)32)) - (17)))))));
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)4095))))), (max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20801))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)0))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 1; i_17 < 19; i_17 += 1) 
                    {
                        for (signed char i_18 = 0; i_18 < 22; i_18 += 4) 
                        {
                            {
                                var_27 += ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) var_5)))));
                                var_28 ^= ((/* implicit */short) (~(((/* implicit */int) (short)32767))));
                            }
                        } 
                    } 
                    arr_73 [i_14] [i_13] [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((var_7) ? (((/* implicit */int) arr_71 [i_12] [i_12] [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1] [i_12 + 1])) : (((/* implicit */int) arr_65 [i_12] [i_13] [i_14]))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_64 [i_12] [i_12] [i_13] [i_12] [i_12] [i_12]))));
                }
            }
        } 
    } 
}
