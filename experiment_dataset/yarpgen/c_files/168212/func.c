/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168212
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
    var_14 = ((/* implicit */short) var_4);
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_2))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)3840))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_0 [i_0]) : (arr_0 [i_0])))) : (((((/* implicit */_Bool) (unsigned char)102)) ? (var_10) : (((/* implicit */unsigned long long int) var_8))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))) : (arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */unsigned int) -908060529)) : (2139095040U))) : (((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6)))))));
                    arr_9 [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2709410226592047890ULL)) ? (((/* implicit */long long int) var_8)) : (arr_3 [i_0] [i_0] [i_2])))) ? (((((/* implicit */_Bool) 908060541)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_3 [i_0] [(unsigned char)7] [i_2]))) : (((((/* implicit */_Bool) 15245418301429434410ULL)) ? (((/* implicit */long long int) 4294967290U)) : (arr_3 [7ULL] [7ULL] [i_2]))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (3201325772280117209ULL) : (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) var_4)) ? (0ULL) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3201325772280117216ULL)) ? (var_8) : (((/* implicit */int) var_11)))))));
        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) : (arr_7 [i_3] [i_3] [i_3])))) ? (((var_11) ? (((/* implicit */unsigned long long int) 1668068731)) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) var_9)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)33379)) : (908060529)))) ? (((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) var_11)))))));
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_3)) ? (var_8) : (-908060530))) : (((((/* implicit */_Bool) arr_6 [i_4])) ? (arr_14 [i_4] [i_4]) : (-908060521)))))) ? (((((/* implicit */_Bool) 17771465805719927793ULL)) ? (((((/* implicit */_Bool) arr_15 [i_4])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146))))) : (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)16)) ? (-908060524) : (((/* implicit */int) (unsigned char)157))))));
        arr_16 [i_4] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4]))) : (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -908060541)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_4)) : (arr_0 [i_4])))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (var_4) : (6U)))) ? (((((/* implicit */_Bool) var_1)) ? (1372892409979518348LL) : (arr_3 [i_4] [i_4] [i_4]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [12LL] [i_4] [i_4])) ? (var_2) : (((/* implicit */unsigned int) arr_14 [i_4] [i_4]))))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) var_8)) : (3934670757U)))) ? (908060529) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))) : (3506979815U))) : (((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) arr_15 [i_5]))))))))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                for (long long int i_8 = 2; i_8 < 10; i_8 += 1) 
                {
                    {
                        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_23 [i_8 - 2] [i_8 + 1] [i_8 + 1] [i_7])) : (arr_24 [(signed char)6] [i_8] [i_8] [i_8 - 1] [i_8 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_24 [i_5] [i_6] [(unsigned char)4] [i_8] [i_5])) : (arr_19 [i_5] [i_7])))) ? (((/* implicit */long long int) 908060529)) : (((((/* implicit */_Bool) arr_1 [9ULL] [9ULL])) ? (-7LL) : (((/* implicit */long long int) 4152570576U)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -908060530)) ? (((((/* implicit */_Bool) 908060534)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5]))) : (297589733U))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5613))) : (arr_17 [i_5] [i_6]))))))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2)))) ? (((((/* implicit */_Bool) -494748086)) ? (arr_1 [i_8 - 1] [i_6]) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_7 [i_7] [i_8 + 1] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))));
                        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 274877906943ULL)) ? (((/* implicit */long long int) 0U)) : (arr_22 [i_5])))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (15245418301429434429ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */long long int) 908060530)) : (var_12)))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967276U)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_4 [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-5613)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) arr_10 [i_5])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))) : (arr_19 [0] [0])))) ? (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) (unsigned short)45618)) : (var_8)))) : (((((/* implicit */_Bool) var_3)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
        var_27 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2047))) : (-7978590087923024819LL)))) ? ((((_Bool)1) ? (((((/* implicit */_Bool) 28U)) ? (((/* implicit */unsigned long long int) 1804883984U)) : (3201325772280117205ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (var_8) : (1366993945)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -712293515640656748LL)) ? (((((/* implicit */_Bool) var_4)) ? (1903506921922575552LL) : (arr_0 [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    }
    var_28 = ((/* implicit */int) ((var_9) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_1)) : (var_2)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 603831186)) : (var_10))) : (((/* implicit */unsigned long long int) var_1)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_12)) : (var_10)))));
}
