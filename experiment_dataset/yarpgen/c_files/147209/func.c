/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147209
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (signed char)6))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((min((-2220066699919037538LL), (-2220066699919037538LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) -2220066699919037541LL)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (signed char)16)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2 - 1] [i_1] [i_0] = ((/* implicit */int) min((arr_9 [i_2 + 2] [i_2 - 2] [i_2 - 2]), (((/* implicit */long long int) arr_3 [i_0]))));
                                arr_16 [i_0] [i_1] [(unsigned char)14] [i_0] [i_3] [i_4] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_2 - 1] [i_0] [i_4])) ? (arr_4 [i_0]) : (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12)))))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_2))))), (min((((/* implicit */long long int) arr_12 [0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_6))))) : (((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_0] [i_2 - 3])) ? (arr_5 [i_2 + 2] [i_2 - 3]) : (arr_1 [i_2 - 3] [i_1]))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_1] [(_Bool)1] [i_0] [i_0]))) : (arr_3 [i_0])))) ? (((/* implicit */unsigned long long int) arr_6 [i_2 + 2] [i_0] [i_0])) : (arr_11 [i_0] [i_0])))) ? (((((((/* implicit */int) (signed char)16)) & (((/* implicit */int) (_Bool)1)))) | ((~(((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_2 + 1] [(short)2] [(signed char)17])))))) : (max((((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2] [i_2 + 2] [11ULL])), (((((/* implicit */int) (signed char)-91)) | (((/* implicit */int) (_Bool)1))))))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (((-(((/* implicit */int) min(((signed char)60), ((signed char)16)))))) != ((~(((/* implicit */int) var_9)))))))));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */long long int) (short)26936);
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    {
                        var_17 -= ((/* implicit */short) ((((((((/* implicit */_Bool) arr_19 [(unsigned short)8] [(unsigned short)8] [13LL])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))) - (((/* implicit */int) (!(arr_18 [i_6])))))) == (((/* implicit */int) ((((arr_8 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3670))) : (arr_3 [i_5]))) > (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_10))))))))));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (short)-6251))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        var_19 -= max((((((/* implicit */_Bool) arr_23 [i_8] [10ULL] [10ULL] [i_8])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_23 [i_8] [i_8] [(_Bool)0] [i_8]))))));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            for (signed char i_10 = 3; i_10 < 17; i_10 += 1) 
            {
                {
                    arr_33 [i_8] [14LL] [14LL] [i_8] = ((/* implicit */unsigned short) max((arr_25 [i_8] [i_9] [i_9] [i_8]), ((-(arr_25 [i_8] [i_8] [i_8] [i_8])))));
                    arr_34 [i_8] = ((/* implicit */unsigned short) arr_30 [i_10] [(unsigned char)3] [i_9] [i_8]);
                    arr_35 [i_8] [i_10 + 1] = ((/* implicit */signed char) arr_8 [i_8] [i_9] [10LL]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_11 = 3; i_11 < 16; i_11 += 1) 
        {
            for (short i_12 = 2; i_12 < 16; i_12 += 1) 
            {
                {
                    arr_41 [(unsigned short)6] [(unsigned short)6] &= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)32480)) : (((/* implicit */int) var_10))))), (arr_22 [i_8] [i_11] [(unsigned short)13]))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (signed char)-2)))), (((((/* implicit */_Bool) arr_4 [14])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_10)), (arr_28 [i_8] [i_11] [i_12])))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_38 [i_12 + 1] [i_8] [i_8])), (arr_39 [i_8] [i_11 - 1]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_13 = 2; i_13 < 14; i_13 += 4) 
        {
            for (signed char i_14 = 0; i_14 < 18; i_14 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_13 + 3] [i_13 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_37 [i_13 + 1] [i_13 + 3])))) | ((~(18362281758773194176ULL)))));
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        arr_52 [i_8] [i_13 + 2] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) > (((((/* implicit */_Bool) var_12)) ? (arr_48 [i_8] [i_13] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) min((arr_12 [i_8] [i_8] [i_14] [i_14] [i_15] [i_15]), (arr_50 [i_8] [i_8])))))))));
                        arr_53 [i_15] [i_8] [i_8] [(short)3] = ((/* implicit */_Bool) (((_Bool)1) ? (arr_37 [i_13 + 2] [i_8]) : ((~(arr_9 [i_8] [i_13 + 1] [i_13 + 4])))));
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_3 [i_8])))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 0)), (-1233481605986163184LL)))) || ((!(((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) -938143750)))))));
                        arr_54 [i_8] [i_13 + 3] [i_8] [i_15] [i_13] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 908526722U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))))) <= ((~(arr_5 [(short)12] [i_13 - 1])))));
                    }
                }
            } 
        } 
    }
    var_23 *= ((/* implicit */unsigned short) var_12);
}
