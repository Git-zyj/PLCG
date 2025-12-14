/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149761
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
    var_11 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_1)))) ? (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)30)) : (2097152)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [(signed char)3] [i_0] [i_1])) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_3] [i_1] [i_1] [(_Bool)1])))) : (((((/* implicit */_Bool) 251658240U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)818))));
                    }
                } 
            } 
        } 
        arr_12 [3LL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [6LL] [6LL]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_7 [0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (arr_10 [i_0] [4] [(unsigned char)8] [(signed char)8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-21646)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (17U))))));
        arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [(unsigned short)0] [3U])) ? (((/* implicit */int) arr_5 [(unsigned char)0] [(unsigned char)0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) 2097154)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(_Bool)0] [i_0] [i_0]))))) : (((arr_5 [6] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2819228692U)))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_14 = (!(((/* implicit */_Bool) 1567307000U)));
        var_15 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((arr_5 [i_4] [i_4]) ? (((/* implicit */int) (unsigned short)22905)) : (((/* implicit */int) var_2))))) ? ((~(var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_4 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_6)))))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            {
                                arr_28 [i_7] [i_7] [i_6] [i_5] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)114)) ? (((((/* implicit */_Bool) (-(2097152)))) ? (((((/* implicit */_Bool) (unsigned short)58551)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)22905)))) : (((((/* implicit */_Bool) (unsigned short)25072)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (unsigned short)42620))))));
                                arr_29 [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)51)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74)))))) ? (((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */int) arr_22 [i_7] [i_7] [i_7])) : (((/* implicit */int) var_2)))) : ((+(((/* implicit */int) arr_21 [i_4]))))))), (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)(-127 - 1))), ((short)-27549)))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)250)), ((unsigned short)55726)))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_24 [i_6] [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_22 [(_Bool)1] [i_5] [i_4]))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_5] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))) : (max((((/* implicit */unsigned long long int) arr_8 [i_4] [(unsigned char)1] [i_6])), (13533028385188557082ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_8), (((/* implicit */signed char) (_Bool)1))))), (max((1732224680), (((/* implicit */int) (_Bool)1)))))))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_5] [7U])))), (((/* implicit */int) max((arr_26 [i_4] [i_4] [i_4] [i_4] [i_6] [i_4]), (((/* implicit */unsigned char) var_6)))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56)))))) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (short)17949)))) : (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_7 [i_6] [i_6] [i_6])))), (((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) : (((arr_19 [i_10]) ? (((/* implicit */int) arr_17 [i_4] [i_9] [i_10])) : (((/* implicit */int) (signed char)111))))))));
                    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -558587318)))) ? (9884022526425889700ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4] [i_4] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4085566827U)))) ? (min((var_5), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (954379219U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_11 = 2; i_11 < 14; i_11 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            arr_40 [i_11 - 1] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_39 [i_11] [i_12])) : (((/* implicit */int) var_6))))) ? ((+(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (signed char)12))))));
            arr_41 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_39 [i_11] [i_12])) : (((/* implicit */int) arr_34 [i_11]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (unsigned short)20970)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_12] [i_11])))))));
            arr_42 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14509)) ? (arr_37 [i_11 + 2] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_11])))))) ? ((((_Bool)0) ? (2147483647) : (((/* implicit */int) (unsigned short)36)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_39 [i_12] [i_11])) : (((/* implicit */int) (signed char)(-127 - 1)))))));
        }
        arr_43 [i_11] [i_11 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)64)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27548)))))) ? (((arr_34 [i_11]) ? (2088132742U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))));
    }
    /* vectorizable */
    for (short i_13 = 0; i_13 < 19; i_13 += 3) 
    {
        arr_47 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (short)510)) : (((/* implicit */int) (unsigned short)5)))) : (((((/* implicit */_Bool) arr_46 [i_13])) ? (((/* implicit */int) arr_46 [i_13])) : (((/* implicit */int) (_Bool)0))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)200)) ? (-1178617554) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) arr_45 [i_13])))) : ((+(((/* implicit */int) (signed char)-24))))));
        arr_48 [i_13] [i_13] = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)230)) : (2147483632)))));
    }
}
