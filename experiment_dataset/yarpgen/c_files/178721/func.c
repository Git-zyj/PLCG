/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178721
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [15ULL] [i_3] [i_1] [i_0])) ? (-2018252891864516105LL) : (268434944LL))), (((/* implicit */long long int) (signed char)13))))) && (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1 - 1]))) <= (max((2018252891864516112LL), (((/* implicit */long long int) (short)-23171)))))))))));
                            var_16 -= ((/* implicit */short) max((((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_0 [i_4])) && (((/* implicit */_Bool) var_4)))))), (((max((arr_6 [i_0] [19LL]), (((/* implicit */long long int) (short)-32748)))) % (((arr_8 [(short)15] [(signed char)6] [13LL] [i_3 + 2]) / (var_3)))))));
                            arr_13 [i_0] [(short)1] [i_2] [(short)1] [i_1] [i_1] [i_4] = ((/* implicit */long long int) var_13);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((short)-23166), (((/* implicit */short) arr_15 [i_3 - 2] [i_1 - 3]))))))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) -9223372036854775801LL)) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 2018252891864516103LL)) || (((/* implicit */_Bool) -2582356448587877173LL))))) << (((((((/* implicit */_Bool) arr_10 [i_2] [i_1] [(signed char)4] [i_3 - 3] [i_5] [(signed char)7])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))) - (4423321489788291378LL))))))));
                            arr_16 [i_2] [i_5] [i_2] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */signed char) max((var_5), (max((((2582356448587877189LL) ^ (arr_6 [i_0] [i_1]))), (max((((/* implicit */long long int) arr_10 [(short)5] [i_2] [(signed char)15] [i_2] [i_2] [i_2])), (-2018252891864516127LL)))))));
                            arr_17 [i_0] [i_5] [i_1] [i_1] [i_5] [(short)4] [i_2] = ((/* implicit */short) max((max((var_14), (var_12))), ((-(arr_11 [i_0] [i_3 - 1] [i_5] [7LL] [(signed char)14] [i_5])))));
                        }
                        var_19 ^= ((/* implicit */short) arr_5 [i_0] [(signed char)12] [i_2] [(signed char)12]);
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((max((((/* implicit */long long int) (short)-25327)), (2582356448587877172LL))) + ((-9223372036854775807LL - 1LL)))))));
                        var_21 &= ((/* implicit */signed char) max((((((/* implicit */_Bool) -2582356448587877173LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_3 - 3] [16LL] [i_3] [(short)20] [i_0]))) : (var_2))), (((/* implicit */unsigned long long int) -2018252891864516105LL))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 3; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            arr_25 [20LL] [(signed char)7] [i_1] [i_6 + 3] [i_7] = 2582356448587877167LL;
                            var_22 = ((/* implicit */short) 268434944LL);
                            var_23 = ((/* implicit */short) max((var_23), (var_1)));
                            arr_26 [i_7] [14ULL] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) 2214086795000242535ULL);
                        }
                        arr_27 [i_0] [i_1] = ((/* implicit */signed char) -2018252891864516105LL);
                        var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) 9111827621354472281LL)) && (((/* implicit */_Bool) var_3))));
                    }
                    for (signed char i_8 = 3; i_8 < 18; i_8 += 3) /* same iter space */
                    {
                        arr_30 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) -1LL)) ? (17379803633605792520ULL) : (((/* implicit */unsigned long long int) -3509908723792772031LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6872)) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_2] [(signed char)3] [i_8])) : (((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) (signed char)-83))))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)23171))) >= (arr_3 [i_0] [i_1] [i_2])))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_9 = 4; i_9 < 20; i_9 += 3) 
                        {
                            var_25 ^= ((/* implicit */short) (-(arr_19 [i_0] [i_0] [i_2])));
                            arr_33 [i_1] [i_8 - 3] = ((arr_18 [i_1] [i_1 - 3]) / (var_14));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            var_26 = var_10;
                            arr_37 [i_1] [i_1] [i_2] [i_1] [i_1] = var_1;
                            var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -9111827621354472272LL)) ? (-268434944LL) : (arr_8 [6ULL] [(signed char)9] [i_2] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22213))) : (var_2)))))) ? (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (signed char)115)))), (((/* implicit */int) ((268434944LL) >= (var_4)))))) : (((/* implicit */int) (signed char)-71))));
                            arr_38 [i_0] [8ULL] [i_1] [i_1] [(signed char)14] [i_10] = var_9;
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
                        {
                            var_28 *= ((/* implicit */signed char) var_7);
                            arr_41 [i_0] [i_0] [i_8 - 3] [i_1] [5LL] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_11] [i_0] [i_2] [i_1] [i_11] [i_8 + 3]))) * (16209315757992765001ULL))) - (((((/* implicit */_Bool) arr_36 [i_8 - 1] [i_2] [13ULL] [i_0])) ? (arr_21 [i_0] [i_0] [(signed char)21] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93)))))));
                            arr_42 [i_1] [i_8 + 1] [(short)21] [i_1 - 1] [i_1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (short)-5752))))));
                        }
                    }
                    var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_14)))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6622)) ? (-2018252891864516129LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2018252891864516113LL)) >= (11859785588437423276ULL))))) : (((11046368784987812118ULL) | (((/* implicit */unsigned long long int) arr_11 [1LL] [i_1] [i_1] [i_1] [i_1] [(signed char)0]))))))));
                    /* LoopSeq 3 */
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)(-127 - 1)), ((signed char)-93))))) : (6034305681073740452ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-70))))) : ((-(9615685213212471905ULL)))));
                        var_31 = ((/* implicit */signed char) 11578447309076565487ULL);
                    }
                    for (short i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        var_32 = ((/* implicit */signed char) var_11);
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) 9111827621354472274LL))));
                    }
                    for (short i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        arr_51 [i_1] [i_2] [(short)10] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 17404439258953087494ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))) : (11046368784987812118ULL))), (((unsigned long long int) ((((/* implicit */_Bool) 536870911ULL)) ? (var_14) : (var_5))))));
                        var_34 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30359))))) < (((((/* implicit */unsigned long long int) arr_43 [i_0] [i_1] [(short)3])) + (var_11)))))) * (((/* implicit */int) (signed char)-114))));
                    }
                    var_35 = ((long long int) (+(((/* implicit */int) arr_12 [i_2] [(signed char)9] [i_2] [(short)5]))));
                }
                arr_52 [16ULL] [i_1] = ((/* implicit */unsigned long long int) 2018252891864516104LL);
            }
        } 
    } 
    var_36 = var_14;
    var_37 = ((/* implicit */short) ((((((/* implicit */int) (short)-1)) + (2147483647))) << (((10372034148527093128ULL) - (10372034148527093128ULL)))));
}
