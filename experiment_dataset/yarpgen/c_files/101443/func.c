/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101443
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
    var_15 = ((/* implicit */unsigned long long int) var_4);
    var_16 = (((!(((/* implicit */_Bool) (~(-1259324101)))))) ? (var_7) : (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */int) var_5)), (var_3))))));
    var_17 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (var_6)))) : (var_3))) ^ (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_2 [i_0])))) ? (((/* implicit */int) arr_5 [20ULL] [i_1] [i_1])) : (((/* implicit */int) (signed char)126))))));
            /* LoopSeq 4 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                arr_10 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [(_Bool)1] [i_0]) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (signed char)0))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? ((((+(((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_2 - 1])))) ^ ((~(var_3))))) : (((((/* implicit */_Bool) min((17640393276948869225ULL), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_8 [i_2 - 1] [i_2] [4] [i_0])))));
                var_19 = max(((-(arr_2 [i_2 - 1]))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_9 [i_0] [i_1])) > (((/* implicit */int) (signed char)-1)))), (((_Bool) arr_5 [i_1] [i_1] [i_2]))))));
            }
            for (long long int i_3 = 2; i_3 < 18; i_3 += 1) 
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10029)) ? (1879048192) : (((/* implicit */int) (short)-15840))))) : (1636697410828797406ULL))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_3])) % (((/* implicit */int) arr_4 [i_0] [i_0])))), (((/* implicit */int) min((((/* implicit */signed char) arr_8 [i_1] [i_1] [i_1] [i_1])), ((signed char)110))))))))))));
                var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_1)))));
                arr_15 [i_3 - 1] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) (unsigned short)511)), (1611549874)));
                var_22 = ((/* implicit */unsigned int) var_10);
            }
            for (signed char i_4 = 2; i_4 < 20; i_4 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned long long int) arr_5 [i_4] [i_4 + 1] [i_4]);
                var_24 -= ((/* implicit */signed char) (~(((/* implicit */int) (short)16815))));
                arr_18 [i_0] [i_4 + 1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (arr_13 [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4 - 2])))) ? (arr_13 [i_4 - 1] [7ULL] [i_4] [i_4 - 1]) : ((~(((((/* implicit */int) (unsigned short)62577)) << (((var_7) - (7268208798579042901ULL)))))))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_1] [i_4 - 2]) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) ((unsigned short) var_5)))))) || (((((/* implicit */_Bool) arr_11 [i_0])) || (((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))))));
            }
            for (signed char i_5 = 2; i_5 < 20; i_5 += 1) /* same iter space */
            {
                arr_23 [i_0] = min((min((9223372036854775807LL), (((/* implicit */long long int) (short)32767)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(2147483632)))) ? (((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_8))))));
                arr_24 [i_0] [i_0] [(short)20] [i_5 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_17 [(short)8] [i_1] [(short)8] [i_5])), (arr_4 [i_1] [i_1])))) ? (var_7) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (var_14))) & (((/* implicit */int) var_5)))))));
                var_26 = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_11)), (var_12)))))));
                /* LoopSeq 1 */
                for (unsigned short i_6 = 2; i_6 < 18; i_6 += 2) 
                {
                    var_27 |= ((/* implicit */signed char) max((((/* implicit */short) (signed char)15)), ((short)-32767)));
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), ((~(max((arr_2 [i_0]), (arr_2 [i_1])))))));
                }
            }
            arr_27 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_25 [i_0] [i_1]))) - (((/* implicit */int) var_13))));
            var_29 = ((/* implicit */_Bool) min((max((var_6), (((/* implicit */unsigned long long int) (+(var_14)))))), (((/* implicit */unsigned long long int) ((arr_16 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_0] [i_0]))))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) max((min(((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [13LL] [i_0]))) : (925379193U))), (((/* implicit */unsigned int) (signed char)-109)))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (var_3) : (((/* implicit */int) (short)22363)))) >> (((arr_29 [i_0] [i_0] [i_0]) - (13586834222575219251ULL)))))))))));
            arr_30 [i_0] = ((/* implicit */long long int) (signed char)103);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 1538953475)) ? (1521338891049998215ULL) : (13ULL))));
            var_32 = ((/* implicit */_Bool) min((var_32), (((((/* implicit */unsigned long long int) ((((_Bool) arr_20 [i_0] [(short)11] [i_8] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) var_6)) ? (var_1) : (var_1)))))) != (((unsigned long long int) 2147483647))))));
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_8])) || (((/* implicit */_Bool) -1945280036))));
        }
        for (int i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            arr_36 [i_0] [i_9] = ((/* implicit */unsigned char) arr_19 [i_9] [i_0] [i_0]);
            var_34 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_9] [i_9] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) / ((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_9]))))));
            var_35 -= ((/* implicit */unsigned int) arr_17 [i_0] [i_9] [i_9] [i_0]);
            /* LoopSeq 3 */
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                var_36 += ((/* implicit */unsigned short) max((1ULL), (((/* implicit */unsigned long long int) (signed char)106))));
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((_Bool) var_11))) : (((/* implicit */int) ((((/* implicit */int) arr_28 [(unsigned short)10] [i_10])) < (((/* implicit */int) var_4)))))))) & (((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned long long int) max((arr_13 [i_0] [i_9] [i_10] [i_0]), (((/* implicit */int) (short)22353))))) : (var_6)))));
            }
            for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                var_38 = ((/* implicit */signed char) min((var_38), (var_4)));
                arr_45 [i_11] = max((((/* implicit */unsigned long long int) arr_43 [i_0] [i_9] [i_0])), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_0 [i_0])), (var_8)))) ? (min((((/* implicit */unsigned long long int) var_1)), (arr_2 [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0]))))));
                arr_46 [7LL] = ((/* implicit */unsigned int) min((arr_28 [i_0] [i_11]), ((!(((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned char) (signed char)117)))))))));
                var_39 = ((/* implicit */int) var_1);
            }
            /* vectorizable */
            for (int i_12 = 3; i_12 < 20; i_12 += 2) 
            {
                var_40 = ((arr_40 [i_0] [i_12 - 1] [i_12 + 1]) == (arr_40 [19] [i_12 - 2] [i_12 - 2]));
                arr_50 [2LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_9] [i_12] [i_12]))))) ? (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)92))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                var_41 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_9] [i_12] [i_12]))) == (((((/* implicit */_Bool) arr_41 [i_0] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_9)))));
                arr_51 [i_12] = ((/* implicit */unsigned int) ((arr_2 [i_12 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_12 + 1] [i_12 - 2])))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) /* same iter space */
            {
                arr_54 [i_0] [19LL] [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_42 [i_0])))) > (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [2ULL]))) : (893589840836642232ULL)))));
                arr_55 [i_13] [15ULL] = ((/* implicit */unsigned int) ((int) var_3));
            }
            /* vectorizable */
            for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 2) /* same iter space */
            {
                arr_58 [i_0] [i_0] [i_14] [i_0] = ((/* implicit */unsigned long long int) ((int) var_8));
                arr_59 [i_0] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_0])) ? (((/* implicit */int) arr_42 [i_0])) : (((/* implicit */int) arr_42 [i_9]))));
                var_42 = var_4;
            }
        }
        var_43 = ((/* implicit */signed char) var_11);
        var_44 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_4))))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_62 [(_Bool)1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [12] [i_15] [i_15])), (max((((/* implicit */unsigned long long int) arr_32 [i_15])), (var_9)))))) ? ((~(((/* implicit */int) arr_39 [(unsigned char)8])))) : (((/* implicit */int) (short)22363)));
        /* LoopSeq 1 */
        for (short i_16 = 0; i_16 < 12; i_16 += 2) 
        {
            var_45 = ((/* implicit */long long int) max((min((((var_13) ? (var_6) : (arr_2 [i_15]))), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_15] [i_15] [i_15] [14])) == (((/* implicit */int) (unsigned short)25682)))))) / (-9132766448287729040LL))))));
            arr_66 [(_Bool)1] [i_15] [i_16] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_26 [i_15] [i_16] [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_26 [i_15] [i_16] [i_16] [19] [i_15] [i_16])) : (var_3))), (((/* implicit */int) arr_26 [i_15] [4] [i_15] [i_16] [i_15] [i_16]))));
            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) (~(((((((/* implicit */_Bool) 9223372036854775777LL)) ? (925379193U) : (((/* implicit */unsigned int) 2147483638)))) & (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)37311)) % (((/* implicit */int) (unsigned char)221))))))))))));
            var_47 ^= ((/* implicit */long long int) max((((/* implicit */int) ((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)3530)))) >= (((/* implicit */long long int) var_0))))), ((~(((((/* implicit */int) var_11)) | (((/* implicit */int) var_12))))))));
            var_48 = ((/* implicit */short) min((var_48), (((short) arr_5 [i_15] [i_15] [i_15]))));
        }
        arr_67 [i_15] [i_15] = ((/* implicit */long long int) (~(((((/* implicit */int) arr_42 [12ULL])) - (((/* implicit */int) (short)-32758))))));
        arr_68 [(unsigned char)9] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */int) arr_60 [i_15] [i_15])) : (((/* implicit */int) var_10))))), (((3115272002024973119LL) >> (((var_6) - (10285640696317517510ULL)))))));
        var_49 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) 2305843009213693952LL))), (((((/* implicit */_Bool) arr_31 [(signed char)8] [i_15] [i_15])) ? (arr_2 [i_15]) : (var_6)))))) ? (((((/* implicit */_Bool) arr_44 [i_15] [i_15] [10] [i_15])) ? (((((/* implicit */int) (unsigned char)10)) * (((/* implicit */int) (signed char)51)))) : ((~(((/* implicit */int) arr_20 [i_15] [i_15] [i_15] [i_15])))))) : (min((max((var_3), (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) 12323852487926852899ULL)) ? (((/* implicit */int) (unsigned short)30283)) : (((/* implicit */int) arr_56 [i_15] [i_15] [i_15] [i_15]))))))));
    }
    var_50 -= ((/* implicit */_Bool) var_4);
}
