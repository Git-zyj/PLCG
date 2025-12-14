/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156826
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_11 [i_4] [i_2] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2 - 1] [i_3] [i_4]);
                                arr_12 [17ULL] [8LL] [8LL] [i_3 - 1] [i_2] = min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)127)))), ((((+(arr_4 [i_0] [i_2]))) + (((/* implicit */unsigned long long int) (((_Bool)1) ? (1485338260) : (((/* implicit */int) var_4))))))));
                                arr_13 [i_2] = ((/* implicit */short) max((var_13), (((((arr_4 [i_0] [i_2]) | (((/* implicit */unsigned long long int) arr_3 [i_2])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_4 + 2])))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (signed char)115))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_4 [i_0] [i_2]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (var_6))))))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) - (12453832150358162702ULL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_5 = 3; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_2] [i_1] [i_1] [(signed char)13] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) : (max((var_1), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))))))));
                        arr_18 [i_5 - 3] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_5 - 3] [i_2 - 2] [i_2 + 1] [12LL])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1)))), ((((_Bool)1) ? (((/* implicit */int) arr_9 [i_5 - 2] [i_2 - 3] [i_2 - 2] [4U])) : (((/* implicit */int) (short)-32755))))));
                        arr_19 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */short) min(((-2147483647 - 1)), (((/* implicit */int) (short)-1))));
                        arr_20 [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_3)) ? (min((arr_0 [i_0] [i_5 - 3]), (arr_0 [i_1] [i_1]))) : (var_13))));
                        arr_21 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */short) var_7);
                    }
                    for (int i_6 = 3; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_2] [(unsigned char)6] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_6] [i_2] [i_1] [i_2] [i_0])) ? (arr_1 [i_0] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (short)-8700)))))) ? (((/* implicit */int) (short)-32755)) : (((/* implicit */int) arr_23 [i_0] [i_2] [i_2] [(short)9] [11] [i_6 - 2]))))));
                        arr_27 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [13U] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])) : (1610612736)))) ? (((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))))) ? (((unsigned long long int) arr_1 [i_0] [i_2 - 3])) : (((/* implicit */unsigned long long int) max((((long long int) 4417774072667424584ULL)), (((/* implicit */long long int) ((var_3) < (((/* implicit */long long int) arr_3 [i_0]))))))))));
                    }
                    for (int i_7 = 1; i_7 < 20; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (var_17)))), (((((/* implicit */_Bool) (signed char)127)) ? (3680005231U) : (15U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_6 [i_0] [i_1] [i_2 + 1] [i_7] [(_Bool)1]) < (var_17))) || (((/* implicit */_Bool) max((((/* implicit */short) var_6)), (var_5)))))))) : (((((/* implicit */_Bool) 6191316674586296793LL)) ? (((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0] [i_2] [i_0])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))))));
                            arr_35 [i_0] [i_0] [i_2] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) var_8))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_7 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1])))) : (max((arr_22 [i_7 - 1] [(signed char)7] [i_7 - 1] [i_7]), (((/* implicit */unsigned long long int) var_0))))));
                            arr_36 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_29 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_8]))));
                        }
                        arr_37 [i_0] [i_2] [i_2] [i_2] [i_7] [i_7 - 1] = ((/* implicit */unsigned char) var_0);
                    }
                    arr_38 [i_2] = ((/* implicit */int) max((((/* implicit */long long int) ((var_13) < (((/* implicit */unsigned long long int) arr_24 [i_2 + 1] [i_2 - 2] [i_2] [i_2 - 1] [i_2 + 1]))))), (max((arr_24 [i_2 + 1] [i_2 - 2] [i_2] [i_2] [i_2 + 1]), (((/* implicit */long long int) var_5))))));
                    arr_39 [i_0] [i_1] [i_2] = (+(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))) != (var_9))))) - (max((((/* implicit */unsigned int) var_2)), (arr_16 [i_0] [i_2] [i_2] [i_2 + 1] [(_Bool)1] [i_2]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_17);
    /* LoopSeq 3 */
    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
    {
        arr_42 [i_9] = ((((/* implicit */_Bool) ((((/* implicit */int) (short)13897)) << (((arr_41 [i_9] [i_9]) - (15605720576589737836ULL)))))) ? (min((((/* implicit */unsigned long long int) var_4)), (arr_41 [i_9] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)65535))))));
        arr_43 [i_9] = ((/* implicit */int) 4554091893274477191LL);
        arr_44 [i_9] = ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)1)), (-6191316674586296794LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_7)), ((signed char)127))))) : (arr_41 [i_9] [i_9])))));
    }
    for (short i_10 = 2; i_10 < 14; i_10 += 3) 
    {
        arr_47 [i_10] [i_10] = ((/* implicit */int) (_Bool)1);
        arr_48 [i_10] = ((/* implicit */unsigned char) arr_22 [i_10] [i_10 + 2] [(signed char)7] [12U]);
        arr_49 [i_10] = arr_8 [i_10] [i_10] [i_10 + 1] [i_10];
    }
    for (short i_11 = 0; i_11 < 20; i_11 += 1) 
    {
        arr_52 [i_11] = ((/* implicit */int) ((max((((/* implicit */long long int) ((signed char) var_14))), (var_3))) << (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_11])) ? (((/* implicit */unsigned long long int) var_11)) : (arr_0 [i_11] [19]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6863627688702680033LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-117))) : (arr_24 [i_11] [i_11] [i_11] [i_11] [i_11])))))))));
        arr_53 [i_11] [i_11] = arr_40 [i_11];
    }
}
