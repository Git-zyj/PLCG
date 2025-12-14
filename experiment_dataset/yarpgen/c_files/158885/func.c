/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158885
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
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) 1993034729U))));
                arr_6 [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((var_13) < (((/* implicit */int) arr_0 [i_0 + 2] [i_2])))))) & (arr_1 [i_0 + 3] [i_0 + 3]));
                arr_7 [i_1] = ((((/* implicit */_Bool) (short)255)) ? (((/* implicit */unsigned long long int) 2308501802U)) : (arr_3 [i_1] [i_1]));
            }
            for (long long int i_3 = 2; i_3 < 20; i_3 += 4) 
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (var_11) : (((/* implicit */long long int) arr_1 [i_1] [i_3 + 1]))))) ? (1986465493U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)55)), (var_4)))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1] [i_3]))))))) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_2))))))));
                arr_10 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_9), (arr_5 [i_1] [i_0 - 1]))))));
                var_17 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-6509)), (arr_3 [i_3] [i_3 - 1])))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_2), (var_5)))), (((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_4 [i_0] [i_1] [i_0] [i_3]))))))));
            }
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 2])) ? (((/* implicit */unsigned long long int) arr_12 [i_1])) : (var_14)));
                arr_14 [i_1] [i_1] [(unsigned short)14] [i_4] = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_4]);
            }
            arr_15 [i_1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)55)), (arr_4 [i_0] [i_0 + 3] [i_1] [i_0]))))))));
            arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) arr_1 [i_1] [i_0]);
        }
        var_19 &= ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])))))) % (var_10))), (((((/* implicit */_Bool) arr_4 [(_Bool)1] [(signed char)18] [i_0] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 3] [(unsigned char)6] [i_0] [i_0])))))) : (arr_12 [i_0])))));
        arr_17 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) var_6)) >= (max((((/* implicit */unsigned int) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55)))))), (((unsigned int) var_10))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_12))));
            var_21 -= ((/* implicit */unsigned long long int) max(((unsigned char)0), ((unsigned char)237)));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            arr_22 [i_0] |= ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */unsigned long long int) arr_21 [7U] [i_6] [i_0 - 2])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_4 [i_0] [i_0] [i_6] [i_6]))));
            arr_23 [5LL] = ((/* implicit */unsigned long long int) ((arr_4 [i_6] [i_6] [i_6] [i_0]) != (arr_4 [i_0] [i_6] [i_6] [i_0])));
            arr_24 [i_0] [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_1)) != (-814829925)))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_6])))))));
            /* LoopSeq 1 */
            for (int i_7 = 4; i_7 < 19; i_7 += 1) 
            {
                arr_27 [i_0] [i_6] [i_7] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_19 [i_7 + 2] [i_0 + 2] [i_0 + 2]))));
                arr_28 [i_7] [i_7] = ((/* implicit */int) arr_2 [i_7]);
                arr_29 [i_7] = ((/* implicit */long long int) var_2);
                arr_30 [i_6] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_4 [i_0] [(_Bool)1] [i_7] [i_7]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9120))))))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                arr_35 [i_0] [i_6] [i_0] = ((/* implicit */_Bool) ((arr_11 [i_0] [i_6] [i_6]) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_8])) ? (arr_5 [i_6] [i_6]) : (arr_1 [i_0] [i_8]))))));
                arr_36 [i_8] [i_6] [i_6] [i_0] = ((((/* implicit */_Bool) arr_26 [i_0 + 2] [i_0] [i_8])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_6] [i_6]))));
                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (arr_32 [i_0] [2LL] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [19U])))))) ? (((/* implicit */long long int) 3U)) : (((long long int) (unsigned char)21))));
                arr_37 [i_0] = ((/* implicit */unsigned char) ((((unsigned int) arr_26 [i_0] [i_6] [i_6])) >> (((((arr_11 [i_8] [(signed char)15] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_6]))))) + (823886313693061057LL)))));
            }
            for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                arr_41 [15U] [i_0] [i_6] [i_0] = ((/* implicit */unsigned int) var_2);
                arr_42 [i_6] = ((/* implicit */unsigned int) var_7);
                arr_43 [i_0] [i_0] [i_6] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_6] [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_9] [i_6] [i_6] [i_0 + 1])))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))));
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 14; i_10 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_11 = 1; i_11 < 12; i_11 += 1) 
        {
            arr_50 [i_11] = ((/* implicit */unsigned char) ((unsigned short) arr_11 [i_11 + 2] [i_11 + 2] [i_11 - 1]));
            var_23 ^= ((/* implicit */long long int) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_1))))) >> (((((((/* implicit */_Bool) var_12)) ? (3304546850U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_10] [i_11] [i_10] [i_10]))))) - (3304546830U)))));
            var_24 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_5)))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_12 = 1; i_12 < 12; i_12 += 4) 
        {
            arr_54 [i_12] [i_12 - 1] = ((/* implicit */long long int) ((unsigned int) arr_12 [i_12]));
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) 157622874U))));
        }
    }
    for (unsigned char i_13 = 3; i_13 < 20; i_13 += 1) 
    {
        var_26 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_9 [i_13] [i_13 - 2] [(unsigned char)20] [i_13 - 2])) ? (((/* implicit */int) arr_9 [8] [i_13 - 3] [12U] [i_13 - 3])) : (((/* implicit */int) arr_0 [i_13] [i_13 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_9 [i_13] [i_13 + 1] [(unsigned char)2] [i_13 - 1])) == (((/* implicit */int) arr_9 [i_13] [i_13 + 1] [(unsigned short)14] [i_13 - 1])))))));
        arr_57 [i_13] = min((((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (signed char)7)))), (((/* implicit */int) max((var_2), (((/* implicit */short) arr_31 [i_13 - 2] [i_13 - 3]))))));
    }
    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 1) 
    {
        arr_61 [i_14] = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) max((arr_32 [i_14] [(unsigned short)17] [i_14]), (arr_32 [i_14] [i_14] [i_14])))) : (min((((/* implicit */unsigned long long int) arr_34 [i_14] [i_14] [i_14] [17U])), (7473292249593619749ULL)))));
        arr_62 [i_14] [i_14] = ((/* implicit */unsigned short) (signed char)-71);
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (min((((/* implicit */unsigned int) var_5)), (2308501802U))) : (((/* implicit */unsigned int) var_7))))) || (((/* implicit */_Bool) var_4))));
}
