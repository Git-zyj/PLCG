/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186208
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
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_6 [19] [(unsigned short)1] [19] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) ((var_0) << (((arr_2 [i_1] [i_2]) - (1052593919)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (short)32767)), (arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 2]))), (((/* implicit */unsigned long long int) ((arr_9 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 1]) >= (arr_9 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2]))))));
                                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((-(var_11))))))));
                                arr_12 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (~(((arr_10 [i_0 + 2] [18] [i_0] [i_0 + 1] [i_0 + 1]) << (((((/* implicit */int) var_4)) - (1)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                {
                    arr_16 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 + 2]))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((unsigned long long int) arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_7] [i_6 - 1] [i_7]));
                                var_17 |= ((int) arr_17 [i_1] [i_5] [i_1] [i_5]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) (-(arr_13 [i_0] [i_0] [i_0 + 2])));
                    /* LoopNest 2 */
                    for (signed char i_8 = 3; i_8 < 22; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) arr_23 [i_0] [i_1] [i_1] [i_9]);
                                arr_28 [i_0 - 1] [i_1] [i_1] [i_8] [i_8] [15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [11] [i_0] [i_0] [i_0 - 1] [i_8 - 3] [(unsigned short)13] [i_8])) && (((/* implicit */_Bool) arr_1 [i_8 + 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                        {
                            {
                                arr_35 [i_0 + 2] [i_11] [(unsigned char)21] [i_0] = ((/* implicit */unsigned short) arr_17 [i_0] [5LL] [i_5] [i_1]);
                                var_20 = ((/* implicit */signed char) 4985101265190941595LL);
                                var_21 = ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                }
                for (long long int i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((long long int) (+(((var_11) & (var_0)))))))));
                                var_23 += ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) & (((/* implicit */int) var_1)))));
                                var_24 += ((/* implicit */_Bool) var_1);
                                var_25 = ((/* implicit */short) min((((/* implicit */long long int) arr_30 [i_0 + 1] [i_1] [i_0 + 1] [i_13] [i_14] [i_0 + 2])), (max((var_11), (((/* implicit */long long int) arr_30 [i_0] [i_0] [i_14] [(signed char)4] [i_0] [i_14]))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) arr_37 [i_0 + 1] [(_Bool)1] [(_Bool)0]);
                }
                /* LoopNest 3 */
                for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    for (int i_16 = 3; i_16 < 22; i_16 += 2) 
                    {
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) arr_31 [i_0 + 2] [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 1] [3ULL]);
                                var_28 = ((/* implicit */unsigned short) min((var_28), (arr_40 [i_0 + 2] [i_1] [i_0 + 2] [11] [i_17] [i_17 + 1])));
                                var_29 = ((/* implicit */_Bool) ((((int) arr_1 [i_0 - 1])) & (((/* implicit */int) min((arr_43 [i_16 - 1] [i_17 + 1] [i_17] [i_17] [i_17 + 1]), (arr_43 [i_16 - 3] [i_17 + 1] [i_17 + 1] [i_17] [i_17]))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_18 = 0; i_18 < 23; i_18 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_19 = 0; i_19 < 23; i_19 += 2) 
                    {
                        var_30 = ((/* implicit */long long int) ((int) ((long long int) ((long long int) (short)-32767))));
                        var_31 = ((/* implicit */int) min((var_31), (min(((+(((/* implicit */int) ((((/* implicit */int) arr_29 [i_0] [5])) == (((/* implicit */int) var_3))))))), (((/* implicit */int) ((unsigned short) (~(-5499897201838504509LL)))))))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((var_2) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [(_Bool)1] [(unsigned char)18] [i_0 - 1]))))))))));
                    }
                    var_33 ^= ((/* implicit */long long int) (((+(((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_0] [i_1] [12] [i_18]))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [(unsigned short)21] [i_1] [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (signed char i_20 = 0; i_20 < 23; i_20 += 3) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 1) 
                        {
                            {
                                var_34 += ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                                var_35 = (+(((/* implicit */int) ((unsigned char) arr_48 [i_0] [i_0] [i_0 - 1]))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_22 = 0; i_22 < 23; i_22 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_23 = 0; i_23 < 23; i_23 += 4) 
                    {
                        for (signed char i_24 = 0; i_24 < 23; i_24 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */long long int) min((var_36), (var_0)));
                                var_37 += ((/* implicit */unsigned char) (+(max((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_22] [i_0] [i_22]))))), (((int) var_12))))));
                                arr_72 [i_0] [i_1] [(short)15] [(unsigned short)2] [i_24] [i_23] = min((((/* implicit */long long int) (-(((/* implicit */int) arr_40 [i_0] [i_1] [i_0 + 1] [i_23] [i_1] [i_24]))))), (((long long int) var_10)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                    {
                        for (unsigned short i_26 = 0; i_26 < 23; i_26 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */short) min((((/* implicit */int) ((signed char) var_10))), ((~(((/* implicit */int) arr_11 [i_0 + 2] [(_Bool)1] [i_25 + 1] [i_25 + 1] [i_25 + 1]))))));
                                var_39 = ((/* implicit */unsigned char) ((arr_30 [9] [i_1] [i_1] [9] [13ULL] [i_1]) & (((/* implicit */int) ((unsigned char) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_3 [i_0] [11]))))))));
                                var_40 -= ((/* implicit */signed char) ((var_10) / (((/* implicit */int) var_3))));
                                var_41 += ((/* implicit */signed char) ((((/* implicit */int) var_3)) >= (((/* implicit */int) ((unsigned char) var_10)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_27 = 0; i_27 < 23; i_27 += 2) 
                    {
                        for (int i_28 = 0; i_28 < 23; i_28 += 2) 
                        {
                            {
                                var_42 &= ((/* implicit */long long int) ((unsigned short) ((var_2) + (((/* implicit */unsigned long long int) var_13)))));
                                var_43 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)65528)), ((~(((/* implicit */int) arr_52 [i_0 + 1] [i_1] [i_0 + 1] [i_27]))))));
                                arr_84 [i_1] [i_22] [i_22] [i_28] = ((/* implicit */long long int) var_3);
                                arr_85 [i_0] [i_1] [(unsigned short)5] [i_27] [i_28] &= ((/* implicit */unsigned int) ((int) (+(arr_44 [i_27] [i_27] [(unsigned short)2] [i_27] [i_27]))));
                            }
                        } 
                    } 
                    var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) -2121740581))));
                }
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    arr_90 [i_0] [(unsigned char)3] [4] [15] = ((/* implicit */unsigned long long int) ((long long int) ((signed char) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                    /* LoopNest 2 */
                    for (long long int i_30 = 0; i_30 < 23; i_30 += 2) 
                    {
                        for (long long int i_31 = 0; i_31 < 23; i_31 += 2) 
                        {
                            {
                                arr_96 [i_0 + 2] [(signed char)2] [i_1] [i_29] [i_0 + 2] [10] = ((/* implicit */unsigned short) ((long long int) arr_48 [i_0 + 2] [i_0 - 1] [i_0 - 1]));
                                arr_97 [(signed char)8] [i_1] = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_4 [i_31] [i_31] [i_31] [i_31])))), ((-(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_29] [i_30]))))));
                                arr_98 [i_29] = ((/* implicit */int) arr_61 [i_0 + 2] [i_1] [i_29] [i_0 + 2] [i_31]);
                            }
                        } 
                    } 
                }
                var_45 = ((/* implicit */short) ((long long int) var_5));
            }
        } 
    } 
    var_46 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (var_2)));
}
