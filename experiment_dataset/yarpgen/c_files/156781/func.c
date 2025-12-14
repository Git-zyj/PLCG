/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156781
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [(_Bool)1] [(_Bool)1]) / (((/* implicit */int) ((1129148022037524067LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0])) != (max((-1129148022037524090LL), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))))) : ((+(((/* implicit */int) (unsigned short)65535))))));
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) (unsigned short)5911);
        arr_8 [i_1] = ((/* implicit */_Bool) var_6);
        arr_9 [i_1] &= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) -229944473)))))) / (max(((~(((/* implicit */int) (unsigned short)59615)))), (((/* implicit */int) arr_4 [i_1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */short) var_0);
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_11 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)65523)), (((((/* implicit */_Bool) (unsigned short)29)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65510)))))))));
            arr_16 [i_3] [24LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_2] [i_3] [i_3]))))) && (((/* implicit */_Bool) min(((~(arr_11 [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65511)) % (((/* implicit */int) (unsigned char)241))))))))));
        }
        for (short i_4 = 1; i_4 < 24; i_4 += 1) 
        {
            arr_21 [i_4] = ((/* implicit */_Bool) arr_14 [(unsigned short)24] [8U]);
            arr_22 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_5)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_4 - 1] [i_4 + 1] [i_4 + 1]))))) : (1606176240U)));
        }
        var_12 = ((/* implicit */long long int) (_Bool)1);
    }
    var_13 ^= ((/* implicit */unsigned int) 3LL);
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    arr_30 [i_7] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [(unsigned short)7]))))) ? (((((/* implicit */_Bool) arr_10 [i_5])) ? (arr_6 [i_5]) : (((/* implicit */long long int) arr_14 [i_7] [i_6])))) : ((~(arr_28 [i_5])))));
                    var_14 ^= ((/* implicit */long long int) ((unsigned short) 281200098803712LL));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_35 [i_8] [(_Bool)1] [i_5] [i_5] [i_8] &= ((/* implicit */signed char) arr_29 [i_6] [i_8] [i_9]);
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0))))))))));
                                var_16 = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) (unsigned short)44259)))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        {
                            var_17 = arr_18 [i_5];
                            /* LoopSeq 3 */
                            for (long long int i_12 = 4; i_12 < 8; i_12 += 4) /* same iter space */
                            {
                                arr_44 [i_5] [(unsigned short)7] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) 1073741823U);
                                var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_0 [i_5] [(short)8]))) == (((/* implicit */int) arr_33 [(unsigned short)8] [i_6] [(unsigned short)8] [i_11] [6LL])))))));
                            }
                            /* vectorizable */
                            for (long long int i_13 = 4; i_13 < 8; i_13 += 4) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_13 - 1]))));
                                var_20 = var_2;
                                arr_48 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((((/* implicit */long long int) arr_1 [14U])) & (var_4))) < (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65493)) | (((/* implicit */int) arr_15 [14LL] [i_6] [i_10])))))));
                                arr_49 [i_5] [i_10] [i_13 - 3] = (((!(((/* implicit */_Bool) (unsigned char)129)))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59614))));
                            }
                            for (unsigned short i_14 = 1; i_14 < 10; i_14 += 1) 
                            {
                                arr_52 [i_5] [i_6] [i_6] [i_11] [i_14] = (!(((/* implicit */_Bool) var_3)));
                                arr_53 [5LL] [5LL] [i_6] [i_10] [i_11] [2LL] [i_14 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_19 [i_14] [(unsigned char)23] [i_14 + 1]))) ? (((((/* implicit */_Bool) arr_19 [(unsigned char)9] [i_14] [i_14 - 1])) ? (((/* implicit */int) arr_19 [i_14 + 1] [i_14] [i_14 + 1])) : (((/* implicit */int) arr_19 [22U] [i_14 + 1] [i_14 + 1])))) : (((((/* implicit */_Bool) arr_19 [i_14] [i_14] [i_14 - 1])) ? (((/* implicit */int) arr_19 [i_14] [i_14 + 1] [i_14 + 1])) : (((/* implicit */int) arr_19 [i_14] [i_14 + 1] [i_14 + 1]))))));
                                arr_54 [i_5] [i_5] [i_6] [i_5] [i_11] [1LL] [i_6] = ((/* implicit */long long int) ((_Bool) 8994943087346815419LL));
                            }
                            arr_55 [i_5] [i_6] [i_10] [(unsigned char)3] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
                            arr_56 [i_5] [7LL] [4LL] [5U] = ((/* implicit */long long int) ((_Bool) 25355059U));
                            arr_57 [i_11] [i_10] [i_6] [7LL] = ((/* implicit */long long int) (+(((/* implicit */int) max(((short)-25647), (((/* implicit */short) arr_3 [i_11])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        for (long long int i_17 = 0; i_17 < 11; i_17 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!((!((_Bool)1))))))));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) arr_27 [i_5] [i_5] [i_5]))))))));
                                arr_65 [i_5] [(_Bool)1] [7U] [i_5] [i_5] = ((/* implicit */unsigned short) max((min((arr_26 [i_5] [i_5] [i_5]), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) var_3))));
                                arr_66 [i_5] [(unsigned short)10] [i_15] [i_16] [i_5] [i_17] [i_17] = ((((/* implicit */_Bool) -6028291932123217491LL)) ? (((((/* implicit */long long int) (+(1073741807U)))) + (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5]))) + ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) arr_36 [i_6])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_7);
}
