/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158555
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [(unsigned short)9] [i_0])), (arr_5 [i_2] [i_1 + 4] [i_1]))))));
                        var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-15))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (_Bool)1)))))))) >> (((min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (_Bool)1)))))) + (24)))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            var_14 -= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-53))));
                            arr_12 [i_1] [i_1 + 3] [i_1 - 1] [i_4] [i_3] = ((/* implicit */int) (((_Bool)1) ? (4072620877U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                            var_15 = ((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1 + 1] [i_1 + 3] [i_4 + 1]));
                            arr_13 [i_1] [i_1] [(signed char)18] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [6LL] [i_3])) : (((/* implicit */int) arr_7 [i_1] [10LL] [i_3] [i_1])))) << (((arr_3 [i_0] [i_4 + 2] [i_1 + 3]) - (1040050687)))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)34284)), (1532209812)))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (7980017887267806683ULL))) : (min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_16 [i_0] [i_1] [8ULL] [i_3] [15ULL] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) var_8)))))))));
                            var_17 += ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)15012))));
                        }
                        for (int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned int) arr_0 [i_0]);
                            arr_21 [i_1] [i_1] [i_2] [i_3] [i_6] [i_6] [(_Bool)1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1])) ? (arr_15 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) * (((unsigned long long int) min((arr_8 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5))))));
                            var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (arr_16 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 3] [i_1 - 1]) : (18446744073709551613ULL)))));
                            arr_22 [i_1] [i_1 + 2] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned int) (-(5926512739491669402ULL)));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((((/* implicit */_Bool) 576460752303423488LL)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (_Bool)1))))));
                            var_21 = ((/* implicit */unsigned char) 0ULL);
                        }
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) var_5)), (13422947903234853005ULL))), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
    for (long long int i_8 = 1; i_8 < 11; i_8 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18227693398310897287ULL)) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6159647708412767219ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) : (4194303U)))) : (17230064972088479483ULL))))));
        /* LoopNest 2 */
        for (short i_9 = 1; i_9 < 12; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((arr_14 [i_8] [i_8] [i_8] [i_8] [(unsigned short)4] [i_8]) || ((_Bool)0))) || (((((/* implicit */_Bool) 846805740)) && (((/* implicit */_Bool) 18446744073709551615ULL))))))), (max((((((/* implicit */_Bool) var_8)) ? (arr_10 [i_10] [4LL] [i_8] [(signed char)20] [4LL] [i_8]) : (((/* implicit */unsigned long long int) 4294967295U)))), (((/* implicit */unsigned long long int) arr_9 [i_8] [i_9]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) arr_31 [i_8 - 1] [i_9] [10ULL]);
                                var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)15942)), (((((/* implicit */_Bool) (-(1642503184657530312LL)))) ? (((/* implicit */unsigned long long int) arr_31 [1U] [i_10] [i_12])) : (max((8745544270617939849ULL), (((/* implicit */unsigned long long int) arr_5 [i_12] [23U] [i_12]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((int) var_11)))));
}
