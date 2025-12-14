/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159531
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0 + 2] [i_0 - 3])))));
            var_19 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            arr_9 [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 + 3])) == (((/* implicit */int) (unsigned char)189))));
            var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) 4041593157U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (2863388373U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 3])))));
        }
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(1431578940U)))) ? (((((/* implicit */_Bool) (short)2446)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (1099511627775ULL))) : (((/* implicit */unsigned long long int) arr_0 [i_0 + 2] [i_0 + 3]))));
        var_22 += ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_14))));
        arr_10 [i_0] = ((/* implicit */_Bool) ((unsigned int) arr_0 [i_0 - 2] [i_0 - 3]));
        arr_11 [i_0] &= ((/* implicit */long long int) 1431578920U);
    }
    for (short i_3 = 4; i_3 < 19; i_3 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_12), (((/* implicit */unsigned char) arr_13 [i_3 + 1])))))))) ? (min(((+(arr_8 [i_3] [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_3 [i_3] [i_3] [i_3]))))))) : (((arr_8 [i_3 - 2] [i_3 + 2]) & (arr_8 [i_3 - 2] [i_3 + 2])))));
        var_24 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_7 [i_3 - 2])))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (18446744073709551594ULL)))) ? (((/* implicit */int) ((unsigned short) (unsigned char)190))) : (((((/* implicit */int) (unsigned char)18)) ^ (var_1)))))));
    }
    for (short i_4 = 4; i_4 < 19; i_4 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) max((max((((((/* implicit */_Bool) 1348755654348788278LL)) ? (((/* implicit */int) arr_3 [i_4 - 1] [i_4] [20LL])) : (-1741863910))), ((+(((/* implicit */int) arr_7 [14U])))))), (var_10))))));
        var_26 = ((/* implicit */unsigned char) min(((~(-64LL))), (((/* implicit */long long int) var_7))));
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_18 [i_4 - 4])))))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_28 = ((/* implicit */unsigned int) ((unsigned long long int) 18446744073709551611ULL));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 2) 
        {
            var_29 &= arr_7 [(unsigned char)15];
            /* LoopNest 2 */
            for (unsigned short i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                for (unsigned char i_8 = 2; i_8 < 12; i_8 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_9 = 1; i_9 < 14; i_9 += 1) 
                        {
                            var_30 += ((((/* implicit */_Bool) arr_6 [i_8 + 1] [3LL] [i_7 + 1])) ? (((((/* implicit */_Bool) 8337466757315946517LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_23 [i_5] [i_5] [i_7])))) : (((/* implicit */int) var_12)));
                            var_31 = ((/* implicit */unsigned short) ((var_13) & (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_8 + 2])))));
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */short) ((arr_18 [i_5 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (unsigned char)11))))));
                        }
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned long long int) 253374129U);
                            arr_37 [i_5] [(unsigned char)6] [(signed char)1] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (67LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_22 [i_11])));
                            arr_38 [i_5] [(_Bool)1] [i_7] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_7))));
                        }
                        for (unsigned int i_12 = 1; i_12 < 11; i_12 += 1) 
                        {
                            arr_41 [i_7 - 1] [i_12] [i_7 + 1] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((unsigned long long int) var_10));
                            arr_42 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) arr_40 [i_5 - 1] [(unsigned char)2] [i_7] [i_8]);
                            var_35 = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_5 - 1])) % (((/* implicit */int) arr_24 [i_5 - 1]))));
                        }
                        var_36 = arr_16 [i_5] [(short)8];
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 12; i_13 += 1) 
            {
                for (unsigned int i_14 = 2; i_14 < 14; i_14 += 3) 
                {
                    {
                        arr_49 [i_5 - 1] [i_5 - 1] [i_13] [i_14 - 2] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((557592020) % (((/* implicit */int) arr_32 [i_5] [i_6] [i_6] [i_14]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 9223372036854775807LL)))) : (((unsigned long long int) var_1))));
                        /* LoopSeq 2 */
                        for (int i_15 = 1; i_15 < 13; i_15 += 1) /* same iter space */
                        {
                            arr_54 [i_5] [i_6] [i_6 + 4] [14] [(_Bool)1] [i_15] = ((/* implicit */unsigned short) arr_18 [i_13 + 2]);
                            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_32 [i_6 + 1] [i_13] [i_13 + 2] [i_15 + 2])))))));
                            var_38 = ((unsigned char) ((((/* implicit */int) (unsigned short)3070)) + (((/* implicit */int) (unsigned char)227))));
                            var_39 = ((/* implicit */unsigned int) (~(((669159540) ^ (((/* implicit */int) var_14))))));
                        }
                        for (int i_16 = 1; i_16 < 13; i_16 += 1) /* same iter space */
                        {
                            var_40 = ((/* implicit */short) ((_Bool) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_56 [i_5] [i_6] [i_5] [0U] [i_16 - 1]))));
                            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) arr_53 [i_16] [i_13] [i_13] [i_13] [i_5 - 1] [i_5 - 1]))));
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_5 - 1])) ? (8U) : (((/* implicit */unsigned int) arr_26 [i_5 - 1]))));
                        }
                    }
                } 
            } 
        }
        for (int i_17 = 1; i_17 < 14; i_17 += 3) 
        {
            arr_61 [(short)1] = ((_Bool) arr_52 [i_17] [(unsigned char)8] [i_5] [i_5] [i_5] [i_5] [i_5 - 1]);
            var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) max((((_Bool) min((var_17), (((/* implicit */int) var_7))))), (min(((!(((/* implicit */_Bool) var_6)))), (((_Bool) var_12)))))))));
        }
    }
    var_44 += ((/* implicit */signed char) (-(-1383602017672271069LL)));
}
