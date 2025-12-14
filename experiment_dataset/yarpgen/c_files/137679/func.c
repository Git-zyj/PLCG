/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137679
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40988))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_0]))) - (var_2)))) ? (18446744073709551604ULL) : (max((11485558529691196658ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (unsigned short)40988))));
                    var_12 &= ((/* implicit */unsigned long long int) -6678103065552486231LL);
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    var_13 = ((/* implicit */unsigned int) arr_5 [i_1] [i_1]);
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)243)))))) : (arr_8 [i_1])));
                        arr_13 [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) var_7))));
                        arr_14 [i_1] [(unsigned char)18] [(unsigned char)18] [i_1] [(unsigned char)18] [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)24553)) : (((/* implicit */int) (unsigned short)53311))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 3; i_5 < 17; i_5 += 2) 
                    {
                        arr_19 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551599ULL)) && (((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1 + 2]))));
                        var_15 = ((/* implicit */signed char) arr_0 [i_5 - 1] [i_1 + 4]);
                    }
                    for (signed char i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        arr_23 [i_0] [i_1] [i_3] [i_6 + 1] = ((/* implicit */short) arr_20 [i_0] [i_1 + 1] [i_6 - 1]);
                        var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [4ULL] [i_0]))) : (arr_22 [i_0])))) <= (((unsigned long long int) 11681671129487803539ULL))));
                        var_17 = ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_1 [(signed char)15])) : (((/* implicit */int) var_4)))) % (((/* implicit */int) arr_4 [i_1 + 4])));
                        var_18 = ((/* implicit */long long int) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        var_19 &= ((/* implicit */unsigned long long int) (unsigned char)255);
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)221)) - (((/* implicit */int) (signed char)-91))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)91)), ((+(16888498602639360ULL)))));
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (unsigned char i_9 = 4; i_9 < 14; i_9 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned char) ((((7620976535070104315ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40979))))) << (((((-7792903648639078083LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) + (7792903648639078138LL)))));
                var_24 = max((((/* implicit */unsigned long long int) min((1646190387788253507LL), (((/* implicit */long long int) (short)-1))))), ((+(arr_21 [i_9] [i_9 - 4] [i_9] [i_9 - 4] [i_9 - 1] [i_9]))));
                var_25 = ((/* implicit */int) ((((unsigned int) 2351734480U)) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
        {
            {
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)12)) ^ (((/* implicit */int) (unsigned char)26))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 2; i_12 < 10; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_14 = 1; i_14 < 12; i_14 += 2) 
                            {
                                arr_49 [i_12] [i_12] [i_14] [i_14 - 1] [i_14] [i_14 + 1] [i_14 - 1] = ((/* implicit */unsigned long long int) arr_30 [(unsigned char)13] [(_Bool)1] [i_14]);
                                arr_50 [i_10] [i_10] [i_10] [i_12] [i_10] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned short)41002)), (4194303ULL)));
                                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */int) ((18446744073705357282ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))))) >> (((((/* implicit */int) (unsigned char)63)) >> (((((/* implicit */int) (signed char)91)) - (62))))))))));
                                arr_51 [i_10] [i_10] [i_12 - 2] [i_10] [i_12] = min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)106)), ((unsigned char)78)))), (((arr_10 [3ULL] [i_12 - 1] [i_13] [(signed char)0] [i_14 + 1]) ? (var_5) : (18446744073705357324ULL))));
                            }
                            /* vectorizable */
                            for (signed char i_15 = 2; i_15 < 10; i_15 += 4) 
                            {
                                arr_55 [i_10] [i_10] [i_10] [(unsigned char)3] [i_10] [i_12] [i_12] = ((/* implicit */long long int) arr_41 [i_10] [i_10] [i_12]);
                                var_28 = ((/* implicit */unsigned char) var_2);
                                var_29 = ((/* implicit */int) ((unsigned short) arr_28 [i_13] [i_12]));
                                var_30 = ((/* implicit */unsigned int) ((unsigned long long int) 13ULL));
                            }
                            var_31 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) arr_36 [i_10] [i_11] [i_12 + 3])), (((4194307ULL) * (var_5)))))));
                            var_32 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)11954)), ((-(((/* implicit */int) (signed char)-92))))))) - (((11ULL) & (4194304ULL)))));
                            var_33 = ((/* implicit */unsigned long long int) ((long long int) 4194292ULL));
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073705357324ULL)) ? (max((((/* implicit */int) (signed char)-91)), (1838963099))) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))) : (18446744073705357324ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_12] [i_12] [i_12] [i_12] [i_12 - 1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
