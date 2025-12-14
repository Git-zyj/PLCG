/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158037
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
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_16))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [4LL] &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)59753))) - (9223372036854775807LL)));
        arr_3 [(unsigned char)9] [i_0] = (i_0 % 2 == zero) ? (((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((signed char) (signed char)-75))))) << (((((((/* implicit */_Bool) ((((/* implicit */int) (short)25887)) >> (((arr_0 [i_0]) - (3818106407992288147ULL)))))) ? (((/* implicit */unsigned int) var_15)) : (627471583U))) - (627471553U))))) : (((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((signed char) (signed char)-75))))) << (((((((/* implicit */_Bool) ((((/* implicit */int) (short)25887)) >> (((((arr_0 [i_0]) - (3818106407992288147ULL))) - (7438403529665354966ULL)))))) ? (((/* implicit */unsigned int) var_15)) : (627471583U))) - (627471553U)))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (arr_6 [i_1] [18ULL]))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) var_7))))))))));
        var_20 = ((/* implicit */_Bool) arr_5 [i_1] [i_1]);
        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)64)) && (((/* implicit */_Bool) arr_4 [i_1] [i_1]))));
    }
    for (long long int i_2 = 1; i_2 < 10; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_4 [(signed char)4] [(signed char)4])), (((((/* implicit */int) var_5)) << (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_15)) : (arr_7 [0LL]))) - (1642425203LL)))))));
        var_23 = ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_2] [i_2 + 1])) : (((/* implicit */int) arr_1 [(signed char)6] [i_2]))))) || (((/* implicit */_Bool) arr_6 [i_2] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2 + 1])) || (((/* implicit */_Bool) arr_7 [i_2 - 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)30)) ? (arr_0 [12ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_0 [2U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
    }
    var_24 |= var_6;
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_25 = var_15;
        arr_11 [10ULL] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_3] [i_3]))));
        var_26 = 1066523301;
    }
    for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (-1148223864)))) ? (arr_12 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))))) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115)))));
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_6 = 1; i_6 < 15; i_6 += 4) 
            {
                var_27 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_6] [(signed char)11] [i_6 + 4]))));
                var_28 = ((/* implicit */int) max((var_28), (((int) arr_13 [i_4]))));
                arr_20 [i_4] [i_5] [i_6] [(short)15] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_5] [i_6])) ^ (((/* implicit */int) var_12))));
            }
            for (int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)192)))) >= (((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */int) arr_4 [i_4] [i_4])) : (((/* implicit */int) var_16)))))))) : (3667495713U))))));
                arr_25 [i_4] [i_4] [i_7] = (~(((((/* implicit */int) (short)-26311)) ^ (((/* implicit */int) arr_4 [i_5] [i_4])))));
            }
            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                arr_29 [i_4] [i_5] [i_8] [9ULL] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)18949)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (signed char)-84)) : ((-2147483647 - 1))))) : (arr_28 [i_4] [i_4] [i_4])))));
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) arr_26 [i_4] [i_5])))) : (((/* implicit */int) var_9)))))));
                var_31 ^= ((((/* implicit */_Bool) arr_21 [i_4] [i_4])) ? (((long long int) arr_24 [i_5] [i_4])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_8] [i_8] [i_5] [i_4])) ? (((/* implicit */int) arr_23 [i_4] [i_4] [i_5] [i_8])) : (((/* implicit */int) (unsigned short)209))))));
            }
            var_32 = ((/* implicit */unsigned long long int) arr_28 [(short)15] [i_4] [i_5]);
        }
        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
        {
            var_33 ^= ((/* implicit */unsigned char) -4388143650485113696LL);
            arr_33 [i_4] = ((/* implicit */long long int) (unsigned short)61338);
            var_34 = ((/* implicit */_Bool) arr_28 [i_4] [i_9] [i_9]);
            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_9] [i_4])))))));
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
        {
            arr_36 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_23 [i_10] [i_4] [i_4] [i_4])))));
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 19; i_12 += 4) 
                {
                    for (short i_13 = 2; i_13 < 17; i_13 += 1) 
                    {
                        {
                            arr_44 [13U] [i_10] [i_11] [i_12] [(signed char)5] = ((/* implicit */signed char) ((long long int) arr_15 [i_13 + 2] [i_10] [i_11]));
                            var_36 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_13 + 1] [i_13] [i_13 + 1] [i_13 - 1] [i_13])) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) ((_Bool) arr_30 [(signed char)2] [i_10] [i_10])))));
                        }
                    } 
                } 
            } 
            arr_45 [i_10] [i_10] = ((/* implicit */unsigned short) (unsigned char)0);
        }
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_37 += ((((((/* implicit */_Bool) arr_19 [i_14] [7] [i_14] [(unsigned char)8])) ? (arr_12 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) <= (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-99)))))))))));
        arr_49 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_23 [i_14] [i_14] [i_14] [(signed char)13])) ? (arr_35 [i_14] [i_14] [i_14]) : (var_15)))))) ? (((((/* implicit */_Bool) arr_27 [0] [0] [0] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) max((var_7), ((short)26287))))) : (((((/* implicit */_Bool) var_5)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-26296))))))) : (((/* implicit */long long int) ((/* implicit */int) ((min((var_17), (((/* implicit */int) arr_48 [i_14] [i_14])))) <= (((((/* implicit */_Bool) arr_31 [i_14] [i_14])) ? (-1735968026) : (((/* implicit */int) arr_32 [i_14] [i_14]))))))))));
    }
    var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4U))));
}
