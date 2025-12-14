/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126113
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((short) 2147475456))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (signed char)14)))));
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (long long int i_3 = 3; i_3 < 9; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_4))))) / (9223372036854775807LL)))) > (max((((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))))))))));
                        arr_11 [i_0] = (+(((2147483624) - (((/* implicit */int) (unsigned char)252)))));
                        arr_12 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65518)) ? (((/* implicit */int) (signed char)0)) : (2147483606)))) ? ((~(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) (signed char)-122)) ? (-1) : (((/* implicit */int) (unsigned char)0))))))) ? ((-(((long long int) var_5)))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_4))))) : (min((var_5), (((/* implicit */int) var_4)))))))));
                        arr_13 [i_3] [i_3] [i_2] [(unsigned short)5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_10 [i_0] [i_1 + 2] [i_3 - 1] [i_3 + 3])) + (2147483647))) << (((((/* implicit */int) var_8)) - (47922)))))) ? (max((((/* implicit */int) arr_4 [i_1 + 2] [(unsigned char)0] [i_1 + 2])), (max((var_5), (((/* implicit */int) var_11)))))) : (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_4))))))));
                        arr_14 [i_1 + 2] [i_3 - 2] [i_2] [i_1 + 2] [i_1 + 2] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)65522)) && (((/* implicit */_Bool) var_7)))) ? ((+(2147475456))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_0] [i_1 - 1] [i_2] [i_3 - 3])), ((unsigned char)252))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((int) (+((-(((/* implicit */int) (unsigned short)65535))))))))));
            arr_15 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_9)))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)37)) == (((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */int) (short)16))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_17 += ((((/* implicit */int) (signed char)-32)) | (((/* implicit */int) (signed char)122)));
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_5)) < (var_3))) ? (((/* implicit */int) arr_8 [i_4] [i_4 - 1] [i_4 - 1])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) var_2)) : (arr_2 [i_4 - 1])));
            var_19 = ((/* implicit */_Bool) (-(16775168)));
        }
        for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            arr_22 [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)-117)) <= (((/* implicit */int) (signed char)126))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4)))) : (arr_1 [i_0])))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(((/* implicit */int) (short)32756)))))));
        }
        var_21 += ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (short)16320)) ^ (((/* implicit */int) (signed char)122)))));
    }
    for (int i_6 = 2; i_6 < 19; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            arr_30 [i_6] [(signed char)0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)0)))), ((-(var_0)))))) ? (((var_9) * (((/* implicit */unsigned long long int) var_10)))) : (var_9)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) 4294967296ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)0)))))));
                arr_35 [i_6] [(unsigned short)12] [i_8] [i_6] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (var_5)))));
                arr_36 [(short)2] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(var_5)))) + (var_13)));
                arr_37 [i_6] [i_7] [i_7] [i_6] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_10)))));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                arr_40 [i_6 - 1] [i_9] [i_9] [i_6] &= ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */int) var_4))));
                arr_41 [i_6 + 1] [i_7] [i_6] |= ((/* implicit */short) ((((/* implicit */int) arr_32 [i_6 - 1])) | (((/* implicit */int) arr_32 [i_6 + 1]))));
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    for (signed char i_11 = 1; i_11 < 16; i_11 += 1) 
                    {
                        {
                            arr_49 [i_9] [i_9] [i_9] [i_9] [i_7] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_5)) : (var_3)))) ? (((/* implicit */int) ((signed char) var_1))) : (((/* implicit */int) arr_23 [i_11 + 3]))));
                            var_23 ^= ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (var_13)))));
                            arr_50 [i_11] [i_10] [i_9] [i_6] [i_9] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_3)));
                            arr_51 [i_7] [i_9] [i_9] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_48 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6 + 1])) < (((/* implicit */int) arr_48 [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6 + 1]))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                arr_56 [i_6 - 2] [i_6 - 2] [i_6] = ((/* implicit */signed char) (!(arr_26 [i_7])));
                arr_57 [(signed char)18] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)110)) > (((/* implicit */int) arr_48 [i_6] [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_6 + 1]))));
            }
        }
        arr_58 [i_6] = ((/* implicit */signed char) ((unsigned char) var_6));
        arr_59 [i_6] = max((((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_6 - 1]))) + (var_10))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))))));
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((_Bool) (+(((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
    {
        arr_63 [i_13] = (+(16777215));
        var_25 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 16777227))));
        arr_64 [i_13] &= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) var_1)))));
    }
    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
    var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
    var_28 = (+(((((/* implicit */_Bool) min((67108863ULL), (((/* implicit */unsigned long long int) (signed char)115))))) ? ((-(var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_12)))))))));
}
