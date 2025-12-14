/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152055
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 1640469415)) ? (-6983083778107727120LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49796))))), (((((/* implicit */_Bool) ((arr_1 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (min((-4365885958498492953LL), (((/* implicit */long long int) 0U)))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-95)))))))));
                arr_7 [i_0] [i_0] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) -1640469415)) ? (((/* implicit */int) (signed char)117)) : (2147483647)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        var_14 = ((short) (((~(((/* implicit */int) (short)32760)))) < (((/* implicit */int) var_5))));
                        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((short) (_Bool)1)), (var_4))))));
                    }
                    var_16 |= ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_2 [i_2] [i_3])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) min((-663956488), (((/* implicit */int) (unsigned char)42))));
                                arr_30 [i_6] [i_9] [i_9] [i_6] [i_6] [i_6] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-93)) : (290815831)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 2) 
                    {
                        {
                            var_18 += ((/* implicit */unsigned char) var_6);
                            var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) 1640469427)), (min((((/* implicit */unsigned long long int) (signed char)-47)), (((((/* implicit */_Bool) (short)31)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63)))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (short)32760))))) ? (((/* implicit */int) (short)-1)) : (((int) arr_22 [i_6] [i_6] [i_6] [i_6]))));
                /* LoopSeq 4 */
                for (short i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_14 = 1; i_14 < 12; i_14 += 1) 
                    {
                        for (int i_15 = 3; i_15 < 10; i_15 += 4) 
                        {
                            {
                                var_21 += ((/* implicit */long long int) ((((/* implicit */int) ((((long long int) (unsigned short)0)) <= (((/* implicit */long long int) ((/* implicit */int) arr_29 [6LL] [i_15] [i_14 + 1] [i_14 + 1] [i_14 + 1])))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) -2147483647)))))));
                                var_22 = ((/* implicit */long long int) ((unsigned int) 2147483647));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) arr_16 [i_6]);
                }
                for (unsigned short i_16 = 1; i_16 < 11; i_16 += 3) /* same iter space */
                {
                    arr_46 [(short)8] [(short)8] [(signed char)0] [i_6] &= ((/* implicit */short) min((((/* implicit */long long int) ((int) ((1640469415) << (((((((/* implicit */int) var_4)) + (28408))) - (25))))))), (-2896549715257748416LL)));
                    var_24 = ((/* implicit */_Bool) (short)-31139);
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 13; i_17 += 3) 
                    {
                        for (long long int i_18 = 0; i_18 < 13; i_18 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */int) var_7);
                                arr_52 [i_6] [i_7] [i_6] [i_6] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_6] [i_17])) ? (((/* implicit */int) max((((unsigned short) (signed char)-47)), (((/* implicit */unsigned short) ((signed char) var_4)))))) : (((((((/* implicit */_Bool) 3707525312435911572ULL)) ? (((/* implicit */int) (signed char)-93)) : (-2024517601))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6] [i_6])))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_19 = 1; i_19 < 11; i_19 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_20 = 0; i_20 < 13; i_20 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) ((signed char) 10399464504818401678ULL))) : (((((/* implicit */_Bool) arr_32 [i_19 - 1] [i_19 + 1] [i_19 + 1])) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) var_6))))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (!(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (912862350599719629ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_6] [i_6] [(signed char)8] [i_6] [i_6] [4ULL])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-3))))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 1) 
                    {
                        for (unsigned char i_22 = 0; i_22 < 13; i_22 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) arr_56 [i_19] [i_19 + 2] [i_19] [i_19 - 1]);
                                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (var_10)))) ? (((((unsigned long long int) 3943376207675336357ULL)) / (((/* implicit */unsigned long long int) arr_61 [i_6] [(_Bool)1] [(_Bool)1] [i_6])))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) var_5))), (1640469396)))))))));
                            }
                        } 
                    } 
                    arr_66 [i_6] [3U] [i_7] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */int) (signed char)-47)) + (((/* implicit */int) (signed char)-107)))) : (max((42542130), (((/* implicit */int) arr_65 [i_19 - 1] [i_6] [i_19 - 1] [i_6] [i_19 + 1]))))));
                }
                for (unsigned short i_23 = 1; i_23 < 11; i_23 += 3) /* same iter space */
                {
                    arr_69 [i_6] = ((/* implicit */signed char) min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */int) arr_65 [i_7] [i_6] [i_6] [i_6] [i_23])) != (((/* implicit */int) var_2)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 1; i_24 < 10; i_24 += 1) 
                    {
                        for (int i_25 = 0; i_25 < 13; i_25 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)122)), (((((/* implicit */int) max((((/* implicit */unsigned short) (short)1687)), (var_5)))) / (((/* implicit */int) ((unsigned short) (signed char)-125)))))));
                                arr_76 [5] [i_6] [i_23] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))) / (16975772054124134076ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((unsigned long long int) var_13)))) * (((/* implicit */unsigned long long int) max((((var_10) / (((/* implicit */int) (unsigned short)1782)))), (((((/* implicit */int) var_4)) / (var_0))))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((long long int) (signed char)125))))) ? (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */long long int) min((arr_16 [i_6]), (((/* implicit */unsigned int) var_13))))) : (min((arr_67 [i_23] [i_6] [i_6]), (((/* implicit */long long int) var_12)))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                }
            }
        } 
    } 
    var_32 *= ((/* implicit */short) var_11);
    /* LoopNest 3 */
    for (signed char i_26 = 0; i_26 < 21; i_26 += 3) 
    {
        for (signed char i_27 = 0; i_27 < 21; i_27 += 3) 
        {
            for (int i_28 = 0; i_28 < 21; i_28 += 2) 
            {
                {
                    arr_85 [i_26] [(unsigned short)18] [i_28] [i_27] = ((/* implicit */long long int) ((((/* implicit */int) (short)1686)) | (((/* implicit */int) (signed char)95))));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) min((var_8), (var_9)))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) min((((/* implicit */short) (signed char)-27)), ((short)24116))))))));
                }
            } 
        } 
    } 
}
