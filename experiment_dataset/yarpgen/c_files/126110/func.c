/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126110
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) arr_0 [i_1]);
                    var_15 = ((/* implicit */unsigned short) arr_1 [(unsigned short)9]);
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)22)), (((1209168116U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_1))))))) : (((/* implicit */int) ((unsigned short) var_13))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_13 [(_Bool)1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_3]))) <= (arr_6 [i_0] [i_1] [i_2]))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((((/* implicit */int) arr_10 [i_3])) + (((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)227)) || (((/* implicit */_Bool) (unsigned char)247))))) : ((~(((/* implicit */int) (_Bool)1))))));
                                var_17 = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_12 [i_1] [i_3 - 2] [i_2] [i_3])))), ((-(((((/* implicit */int) (unsigned char)55)) % (((/* implicit */int) arr_3 [(signed char)10] [i_3]))))))));
                                arr_14 [i_1] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) 891484672)), (min((((/* implicit */long long int) (_Bool)1)), (arr_9 [i_0] [i_1] [8LL] [i_1]))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)216)) / (((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) arr_2 [i_0] [i_0])))) : (((((/* implicit */_Bool) (unsigned short)26009)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)126)))))))));
                                var_18 -= ((/* implicit */long long int) ((int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1572864U))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 2) 
        {
            {
                var_19 |= ((/* implicit */_Bool) var_12);
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        {
                            arr_25 [i_7] [i_6] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_26 [i_5] [i_6 - 2] [i_7] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2415002156350948635LL)) ? (((/* implicit */int) (unsigned short)13666)) : (((/* implicit */int) var_3))))) ? (((unsigned long long int) 5133391981180180680LL)) : (((/* implicit */unsigned long long int) min((4212337449U), (((/* implicit */unsigned int) var_9)))))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
                            {
                                arr_30 [i_7] [(unsigned char)15] [i_7] [i_8] [1] [(signed char)18] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_20 [i_6 + 1] [i_6 + 1] [i_6 - 1])))));
                                var_20 = ((/* implicit */signed char) arr_15 [(signed char)14]);
                            }
                            for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
                            {
                                var_21 = (!(((/* implicit */_Bool) (-2147483647 - 1))));
                                var_22 = ((/* implicit */long long int) ((unsigned long long int) ((-28) <= (((/* implicit */int) (unsigned char)121)))));
                                var_23 = ((/* implicit */unsigned long long int) ((((long long int) var_12)) != (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_7] [(signed char)1] [i_6 - 1] [i_8] [i_10])))));
                                var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-64))));
                                var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_16 [(unsigned char)7])) : (((/* implicit */int) (unsigned short)26680))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5] [i_6 - 2] [i_6 - 2] [i_8] [i_10]))) : (((((-9223372036854775797LL) + (9223372036854775807LL))) << (((/* implicit */int) (unsigned char)50))))))) == (((((/* implicit */_Bool) 8380416)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))) : (5096603793817085366ULL)))));
                            }
                            var_26 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (8760133738367507387LL)))) ? (((/* implicit */int) arr_20 [i_5] [i_5] [i_5])) : (((/* implicit */int) ((unsigned char) arr_27 [i_5] [i_6 + 1] [(unsigned char)9] [5LL] [i_8])))))) ? (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)31457)))) == (((/* implicit */int) ((_Bool) -8380417)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46864)) ? (((/* implicit */int) arr_16 [11LL])) : (((/* implicit */int) arr_20 [i_5] [i_7] [i_5]))))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned short) (signed char)90);
                var_28 = ((/* implicit */long long int) (-(min((arr_22 [i_5] [i_5] [i_5] [i_6 + 1]), (((/* implicit */unsigned long long int) arr_17 [i_5]))))));
                /* LoopNest 3 */
                for (long long int i_11 = 1; i_11 < 16; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 4; i_13 < 18; i_13 += 3) 
                        {
                            {
                                var_29 -= ((/* implicit */_Bool) arr_16 [i_5]);
                                var_30 = ((/* implicit */_Bool) arr_38 [i_12] [i_13 - 3]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
