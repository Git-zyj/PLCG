/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145477
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
    for (signed char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] = min((((/* implicit */unsigned long long int) (_Bool)1)), (16607171810336093806ULL));
                                var_17 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_3])), (var_12)))), ((+(var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_2] [i_2]))))) : (max((min((17140695288049773838ULL), (((/* implicit */unsigned long long int) arr_5 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_15))));
                                var_19 = ((/* implicit */long long int) var_2);
                                var_20 = ((/* implicit */_Bool) 14390498014483977567ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 10; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16732873562231148571ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((arr_8 [i_0 + 2] [i_1] [i_2] [i_7]) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0 + 2])) : (((/* implicit */int) var_10))))) : ((-(var_5)))));
                                arr_22 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_7] [i_8] [i_8] [i_2])) ^ (arr_16 [i_0] [i_1] [i_7] [i_8])))) ? (((((/* implicit */int) var_15)) % (((/* implicit */int) var_9)))) : (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_11)))))))) & (min((min((arr_0 [i_7]), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_8)), (var_13))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 11; i_9 += 4) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 1; i_12 < 12; i_12 += 2) 
                    {
                        for (signed char i_13 = 0; i_13 < 13; i_13 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((((((max((var_16), (var_14))) + (2147483647))) >> (((arr_30 [i_9] [i_10] [i_11] [i_13]) - (10061349442905150159ULL))))), (((max((arr_33 [i_10] [i_12] [i_10] [i_10]), (arr_23 [i_9] [i_13]))) * (((/* implicit */int) (!(((/* implicit */_Bool) 14390498014483977567ULL)))))))));
                                arr_36 [i_10] [i_12] [i_11] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */int) min((arr_26 [i_10] [i_9 + 2]), (((/* implicit */unsigned char) var_1))))) < ((-(((/* implicit */int) var_13))))));
                                var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)26162)) : (((/* implicit */int) var_3))))), ((-(arr_27 [(signed char)12] [i_10] [i_10])))))) ? ((~((+(((/* implicit */int) (unsigned short)0)))))) : (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10)))) >> (((((((/* implicit */int) var_13)) ^ (((/* implicit */int) (signed char)-81)))) + (52275)))))));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((((/* implicit */_Bool) ((14390498014483977547ULL) / (14390498014483977566ULL)))) ? (((((/* implicit */_Bool) arr_27 [4LL] [i_12] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_9]))) : (arr_35 [i_12] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_33 [i_10] [i_11] [i_10] [(unsigned char)6]) == (((/* implicit */int) var_3)))))))) << (((min((((/* implicit */int) max((var_3), (var_3)))), (var_14))) + (1586870274)))))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(14390498014483977567ULL))), (((/* implicit */unsigned long long int) 4294967279U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_9 - 1] [i_9])))))) : (max((((((/* implicit */_Bool) -1286711881)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (4056246059225574058ULL))), (((/* implicit */unsigned long long int) (unsigned short)19))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 3; i_14 < 10; i_14 += 1) 
                    {
                        for (int i_15 = 3; i_15 < 9; i_15 += 4) 
                        {
                            {
                                var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_29 [i_14 - 1] [i_11])) : (((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) var_9)) : (var_16)))));
                                var_26 += ((/* implicit */int) min((((((/* implicit */_Bool) arr_27 [(_Bool)1] [i_10] [i_14 + 2])) ? (14390498014483977567ULL) : (arr_27 [(unsigned short)10] [i_14] [i_14 + 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_10)))) ? (((/* implicit */int) var_6)) : ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))))))));
                                arr_42 [i_9] [i_9] [i_9] [i_10] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((min((((/* implicit */unsigned int) arr_26 [i_10] [i_15])), (var_7))) < (((/* implicit */unsigned int) (+(-779213053)))))))));
                                var_27 += ((/* implicit */unsigned short) min((((/* implicit */long long int) ((max((var_7), (((/* implicit */unsigned int) var_15)))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)27968)) ? (arr_33 [i_9] [i_9] [i_9] [4LL]) : (var_16))))))), (281474976694272LL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29980))) + (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) (unsigned short)0))))) ? (arr_39 [i_9]) : (((/* implicit */long long int) min((((/* implicit */int) var_1)), (var_12)))))))))));
                                var_29 = ((/* implicit */unsigned char) ((((arr_45 [i_10] [i_10]) < (arr_46 [i_9] [i_9 + 2] [i_9] [i_10]))) ? (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_44 [i_9] [i_10] [i_11] [i_10] [i_11] [i_10]))))) : (max((((/* implicit */long long int) var_9)), (281474976694272LL))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-45)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) 
    {
        for (unsigned int i_19 = 1; i_19 < 8; i_19 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    for (unsigned long long int i_21 = 3; i_21 < 9; i_21 += 4) 
                    {
                        {
                            var_30 -= ((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))));
                            var_31 = ((((/* implicit */_Bool) (unsigned short)65517)) ? (6145108098731136896ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))));
                            arr_56 [i_21] [i_20] [i_19] [i_19] [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)29)))) * (((((/* implicit */int) (unsigned short)26054)) * (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) / (var_16)))) : (min((((/* implicit */long long int) arr_31 [i_19 - 1] [i_19] [i_19 - 1] [i_19 - 1])), (arr_12 [i_18] [i_19] [i_19] [i_19 + 2])))));
                            arr_57 [i_18] [i_19] [i_20] [i_19] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) && (((/* implicit */_Bool) (-(arr_23 [i_19 + 1] [i_19 + 2]))))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2886431099U))))), (var_5)))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_49 [i_20])))), ((!(var_9)))))) : (var_16)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 1) 
                {
                    for (long long int i_23 = 4; i_23 < 7; i_23 += 2) 
                    {
                        for (unsigned long long int i_24 = 4; i_24 < 9; i_24 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_47 [i_19] [i_19 + 2] [i_23] [i_23] [i_24 - 1])), (((((/* implicit */_Bool) arr_48 [i_24 + 1])) ? (((/* implicit */int) arr_48 [i_24 - 3])) : (arr_52 [i_18] [i_19] [i_19] [i_24 + 1])))));
                                arr_65 [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) arr_53 [i_18] [i_19] [i_23]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
