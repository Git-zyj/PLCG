/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180717
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
    var_10 *= ((/* implicit */int) ((((/* implicit */int) ((-250648482) != (-1)))) == ((-(((/* implicit */int) var_3))))));
    var_11 = ((/* implicit */int) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)117)) < (((/* implicit */int) var_5))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 + 2]))) & (var_6)))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_5 [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) arr_5 [i_1])))))));
        var_12 *= ((/* implicit */signed char) 0);
    }
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) arr_5 [i_2]);
        var_13 = ((var_9) & (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_2]))))));
        arr_13 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)0)), (max((arr_10 [i_2]), (arr_10 [i_2])))));
    }
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_15 [i_3] [i_3]);
        /* LoopSeq 4 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_1 [i_4]))))) ? (((int) ((unsigned long long int) (short)14620))) : (((int) max((arr_10 [i_3]), (((/* implicit */int) var_3))))));
            arr_23 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)191)), ((unsigned short)65535)));
        }
        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 1) 
        {
            var_15 = ((((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-14620)) : (((/* implicit */int) (short)-14620)))) : (var_1))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) (signed char)47)) != (((/* implicit */int) (unsigned short)50032))))) - (1))));
            arr_27 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_19 [i_5] [i_5 + 1] [i_5 + 1])))) && (((/* implicit */_Bool) ((signed char) arr_19 [i_3] [i_5 + 1] [i_5])))));
        }
        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            var_16 *= ((/* implicit */unsigned long long int) (short)(-32767 - 1));
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                /* LoopSeq 4 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    var_17 += ((/* implicit */short) ((((((/* implicit */int) (unsigned char)117)) | (((/* implicit */int) arr_17 [i_6])))) | (((((/* implicit */_Bool) 580354942)) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) arr_17 [i_6]))))));
                    var_18 *= ((/* implicit */_Bool) (-((-((+(((/* implicit */int) var_3))))))));
                    var_19 = ((/* implicit */unsigned long long int) ((_Bool) max((((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((int) var_2))))));
                    var_20 &= ((/* implicit */signed char) (-((~(((/* implicit */int) (short)14619))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (arr_32 [i_7] [i_8 + 1] [i_6] [i_8])))) ? (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (unsigned char)139)))))) : (max(((+(16592595538666742554ULL))), (((/* implicit */unsigned long long int) max(((short)0), ((short)0)))))))))));
                }
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                {
                    arr_39 [i_3] [(unsigned char)17] [i_3] = ((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_17 [i_3])))));
                    arr_40 [i_3] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) (unsigned char)117)))) ? (var_1) : ((+(((/* implicit */int) (unsigned short)50026)))))) >> (((((((/* implicit */_Bool) 14693442722484786647ULL)) ? (((/* implicit */int) max((arr_28 [i_3] [i_3]), (((/* implicit */short) (_Bool)1))))) : (max((1557608521), (((/* implicit */int) (_Bool)0)))))) - (25081)))));
                }
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */short) var_9);
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 2; i_11 < 18; i_11 += 4) 
                    {
                        arr_45 [(signed char)3] [i_3] [i_7] [i_10] [8ULL] = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))) | (2955616308U))), (((/* implicit */unsigned int) (_Bool)1))));
                        var_23 = ((/* implicit */long long int) (((((((_Bool)1) && ((_Bool)1))) || (((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */int) arr_26 [i_3] [i_6])) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) var_8)) || (arr_0 [i_6] [i_10])))), ((short)0))))));
                        var_24 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned long long int) arr_32 [i_6] [i_6] [i_6] [i_6]))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_11 - 2] [i_11 - 1]))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-14620)) ? (((/* implicit */unsigned int) arr_14 [(short)3])) : (var_6))) + (((/* implicit */unsigned int) var_1)))))));
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((arr_41 [i_11] [i_11] [i_11] [i_11] [i_11 - 1] [i_6]) + (9223372036854775807LL))) >> (((max((var_7), (((/* implicit */unsigned long long int) arr_35 [i_3] [(short)2] [i_7] [i_10] [i_11])))) - (15641958613349218844ULL))))))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_38 [6] [i_11 + 1] [i_6] [6] [i_11 + 1] [i_11 + 1])) + (((/* implicit */int) arr_38 [0] [i_11 + 1] [i_11] [i_11] [0] [i_11 + 1])))))))));
                    }
                    for (unsigned short i_12 = 1; i_12 < 18; i_12 += 1) 
                    {
                        arr_50 [i_3] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)15503))));
                        arr_51 [i_6] [i_7] [i_3] = ((/* implicit */signed char) (((!(arr_48 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_3]))) && (((/* implicit */_Bool) ((short) (-(((/* implicit */int) var_3))))))));
                        var_27 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
                        arr_52 [i_12] [i_3] [9LL] [i_3] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_26 [i_3] [i_12])), (min(((-(var_7))), (((/* implicit */unsigned long long int) var_8))))));
                    }
                    for (int i_13 = 4; i_13 < 16; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) var_6);
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (-(((/* implicit */int) var_2)))))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (~(-1724909010))))));
                    }
                    var_31 = arr_54 [i_3] [i_3] [i_3] [(unsigned short)5] [i_3] [i_3] [i_3];
                    arr_55 [i_3] [i_6] [i_7] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_48 [i_3] [i_3] [2] [2] [i_7] [i_3] [i_10])), (arr_4 [5U] [i_7]))))) | (((unsigned int) 477004372)))) < (((/* implicit */unsigned int) ((max((((/* implicit */int) (unsigned char)103)), (arr_36 [i_3]))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_3])) : (((/* implicit */int) (short)-14620)))))))));
                }
                for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
                {
                    arr_58 [i_3] [i_3] [i_6] [i_7] [i_7] = ((/* implicit */short) min((((/* implicit */int) arr_0 [i_3] [i_3])), (max((((/* implicit */int) arr_34 [i_3] [(signed char)4] [i_7] [i_14])), ((+(((/* implicit */int) arr_24 [i_3] [i_6] [i_3]))))))));
                    var_32 = ((/* implicit */signed char) max((((/* implicit */short) (signed char)(-127 - 1))), ((short)-23565)));
                }
                var_33 *= arr_5 [19ULL];
            }
            for (unsigned char i_15 = 2; i_15 < 17; i_15 += 4) 
            {
                var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_3])) < (((/* implicit */int) max((arr_0 [i_15 - 1] [i_15 + 1]), (arr_0 [i_15 + 1] [i_15 + 1])))))))));
                var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) 4213822596U)) ? (((/* implicit */int) (short)0)) : (arr_21 [i_3])))))))));
            }
            var_36 = ((/* implicit */unsigned int) ((min((arr_1 [i_3]), (arr_1 [i_6]))) ? ((-(((/* implicit */int) arr_31 [i_6] [i_6] [i_3] [i_3])))) : (600217706)));
            /* LoopSeq 1 */
            for (unsigned char i_16 = 0; i_16 < 19; i_16 += 1) 
            {
                var_37 = (!((((-(((/* implicit */int) (signed char)-68)))) <= (((/* implicit */int) (!(arr_1 [i_3])))))));
                var_38 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(((/* implicit */int) (short)14620))))) ? (((/* implicit */int) arr_35 [i_3] [i_6] [i_16] [6ULL] [i_16])) : (((/* implicit */int) ((8) != (((/* implicit */int) var_8))))))), (((/* implicit */int) ((unsigned char) arr_56 [i_3] [i_3] [i_3] [i_3] [i_3])))));
            }
        }
        /* vectorizable */
        for (int i_17 = 2; i_17 < 17; i_17 += 3) 
        {
            var_39 &= ((/* implicit */signed char) ((unsigned int) arr_30 [i_3] [i_17 - 2]));
            arr_65 [i_3] [i_3] = ((/* implicit */long long int) (-(var_0)));
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_48 [i_17] [i_3] [(unsigned char)14] [i_3] [i_17 - 2] [i_17] [i_17])) + (var_1))))));
        }
        arr_66 [(unsigned char)0] &= ((/* implicit */unsigned short) max((var_8), (max((arr_57 [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_57 [(short)17] [i_3] [i_3] [8] [i_3])))));
        arr_67 [i_3] = ((/* implicit */long long int) max((((unsigned long long int) -532480945)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_3] [(unsigned char)16]))) / (26414519U))))));
        arr_68 [i_3] [i_3] = ((/* implicit */unsigned char) 2948875716136977214ULL);
    }
    for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 3) 
    {
        arr_71 [i_18] &= arr_35 [9LL] [i_18] [i_18] [i_18] [i_18];
        var_41 -= ((/* implicit */unsigned short) arr_35 [i_18] [i_18] [i_18] [i_18] [i_18]);
        var_42 = ((/* implicit */int) ((_Bool) min((arr_54 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]), (arr_54 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))));
    }
}
