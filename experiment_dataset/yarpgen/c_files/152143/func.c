/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152143
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12241658314104344038ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_2]))) : (arr_4 [i_0] [7U])))) ? (((/* implicit */long long int) ((unsigned int) (-9223372036854775807LL - 1LL)))) : ((-9223372036854775807LL - 1LL)))))));
                                var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (min((((unsigned long long int) (-9223372036854775807LL - 1LL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775792LL)) ? (-9223372036854775793LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4]))))))))));
                                var_16 = ((/* implicit */unsigned int) ((unsigned long long int) 9145401243223173061ULL));
                                arr_12 [i_0] [i_1] [i_1] [i_1] = ((long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2 - 3] [i_2])) ? (arr_8 [i_2 + 3] [i_2 - 1] [i_2]) : (arr_8 [i_2] [i_2 + 3] [i_2])));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) max(((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((min((-9223372036854775792LL), (((/* implicit */long long int) 13U)))) - (-9223372036854775771LL))) + (60LL))))), (((((/* implicit */_Bool) arr_10 [i_0 - 4] [i_2] [i_2] [i_2] [i_2 + 1])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_2 + 2])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [6LL] = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) var_13))))), (9223372036854775807LL)));
                                var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_10 [i_0 + 1] [i_2 + 1] [i_5 - 1] [i_5] [i_6 + 1])))) ? ((-(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23201)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 4; i_7 < 17; i_7 += 1) 
    {
        for (long long int i_8 = 4; i_8 < 17; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                {
                    var_18 ^= min((((((/* implicit */_Bool) arr_9 [i_8] [i_8 + 1] [i_8 - 4])) ? (((/* implicit */unsigned long long int) arr_27 [i_9] [i_7])) : (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (0ULL))))), (((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) (short)0))))));
                    /* LoopNest 2 */
                    for (short i_10 = 2; i_10 < 15; i_10 += 3) 
                    {
                        for (short i_11 = 1; i_11 < 17; i_11 += 3) 
                        {
                            {
                                arr_34 [i_7] [i_8 + 1] [i_9] [i_10 - 1] [i_7] [6ULL] [i_7] = ((/* implicit */unsigned int) ((min((((6547758198688284535ULL) % (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) > (16ULL)))))) < (((/* implicit */unsigned long long int) (-((+(var_6))))))));
                                arr_35 [0ULL] [i_8] [i_9] [i_7] = min((((/* implicit */unsigned long long int) (+(9079167667474491474LL)))), ((+(10635165323691856549ULL))));
                                arr_36 [i_7] [i_8] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */short) var_6);
                                arr_37 [i_7] [(signed char)5] [i_7] [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 47ULL)) || (((/* implicit */_Bool) (~(((9145401243223173069ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13444))))))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (15574764043128045858ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 14U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_8 - 4] [i_7]) <= (3265978559U))))) : (((((/* implicit */_Bool) (-(15830527086587534912ULL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (-6786695052840396600LL)))) : ((~(var_7)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 3; i_12 < 17; i_12 += 3) 
                    {
                        for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */unsigned long long int) -4110840813327248408LL)) | (18446744073709551598ULL))) != (((/* implicit */unsigned long long int) arr_14 [i_7] [i_7] [i_9] [i_12])))))));
                                arr_44 [i_7] [i_8 - 3] [i_7] [i_12 - 3] [i_7] = ((unsigned long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (short)-3574))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_8]))))), (max((((unsigned int) arr_29 [i_7] [(short)0] [(short)0] [i_9] [i_9] [i_8])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 15830527086587534918ULL)) ? (((/* implicit */int) arr_3 [1U])) : (((/* implicit */int) var_11))))))))))));
                                arr_45 [i_7] [i_7] [i_9] [i_12] [i_13] = ((/* implicit */long long int) ((unsigned long long int) (!(((arr_42 [i_7] [i_8] [i_9] [i_12 - 2] [i_13] [i_8]) == (14025810299813467647ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
    {
        for (signed char i_15 = 1; i_15 < 8; i_15 += 3) 
        {
            {
                arr_50 [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) 11093209333025180256ULL);
                arr_51 [i_14] [i_15] [i_15] = ((long long int) max((((/* implicit */unsigned long long int) 0U)), (((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */unsigned long long int) arr_14 [i_14] [i_15] [i_15] [i_15])) : (13332763285530293160ULL)))));
            }
        } 
    } 
}
