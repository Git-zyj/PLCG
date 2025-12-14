/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168221
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
    var_10 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_5)))) ? (max((((/* implicit */int) var_3)), (-2147483647))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (var_0))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_1] [i_3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [7ULL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))) ? (((((((/* implicit */_Bool) (short)9252)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) 851456076))))))) : (min(((+(arr_3 [i_3] [i_3]))), (((/* implicit */int) (unsigned char)0))))));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                            {
                                arr_15 [i_4] [i_2] [i_4] &= ((/* implicit */unsigned short) (+(((unsigned int) min((((/* implicit */int) arr_14 [i_2])), (arr_3 [i_0] [i_1]))))));
                                var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? (2370444977U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23341)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((+((-9223372036854775807LL - 1LL)))))))));
                                arr_16 [i_3] [i_3] = (-2147483647 - 1);
                            }
                            /* LoopSeq 2 */
                            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                            {
                                var_13 &= ((/* implicit */long long int) arr_10 [(unsigned short)9] [i_1] [i_2] [i_3] [i_5] [i_5]);
                                var_14 &= ((/* implicit */unsigned short) arr_8 [i_0]);
                            }
                            for (unsigned short i_6 = 3; i_6 < 11; i_6 += 3) 
                            {
                                arr_22 [i_3] [i_3] [i_2] [i_3] [i_6] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_20 [i_6] [10] [i_6 - 3] [i_3] [i_3] [i_6] [i_1])) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_6 - 2] [i_3] [i_3] [(unsigned short)3] [i_1]))))));
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_7))));
                                var_16 &= ((short) ((unsigned char) arr_3 [i_6 - 1] [i_0 + 2]));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (int i_8 = 3; i_8 < 9; i_8 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_9 = 1; i_9 < 11; i_9 += 3) 
                            {
                                arr_32 [i_9] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned short) (+(((/* implicit */int) arr_12 [i_0] [4LL] [i_0]))))));
                                var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_7] [i_8] [i_9]))) : (var_8))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) arr_20 [i_0] [3U] [i_1] [2U] [i_9] [(signed char)6] [i_9]))))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_25 [11LL] [i_8] [i_9])) || ((!(((/* implicit */_Bool) arr_19 [i_1] [0] [(short)10] [i_0] [i_0] [i_1] [i_1])))))))))));
                            }
                            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
                            {
                                arr_37 [i_0] [i_1] [i_1] [1LL] [i_8] [i_10] = ((/* implicit */signed char) var_7);
                                arr_38 [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) -345447543))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_14 [i_1])) : (-2054562105)))) / (((var_8) % (((/* implicit */unsigned long long int) arr_25 [i_0] [(short)11] [i_7])))))) : (1682106888971100710ULL)));
                            }
                            var_19 &= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) ((short) 3425437591U))))));
                            /* LoopSeq 3 */
                            for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
                            {
                                arr_43 [i_0] [i_1] [i_1] [i_7] [5] [i_11] &= ((/* implicit */short) var_6);
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0] [i_0 - 1] [i_11] [i_0 + 2] [i_0]))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((((arr_17 [i_8] [i_8] [i_8] [i_8] [i_8]) / (arr_17 [i_0 + 1] [i_0 - 1] [(unsigned short)0] [i_0] [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0])))))));
                                arr_44 [i_0] [(unsigned short)3] [i_11] [i_8 + 3] [i_11] = ((/* implicit */unsigned char) max((arr_31 [i_0 + 2] [i_1] [i_8] [(_Bool)1] [i_7] [i_0] [i_7]), (((/* implicit */short) var_7))));
                            }
                            for (int i_12 = 1; i_12 < 8; i_12 += 3) /* same iter space */
                            {
                                var_22 = ((/* implicit */long long int) (-2147483647 - 1));
                                arr_47 [i_12] [i_8] [i_12] [i_7] [i_12] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_8 [i_12 - 1])), (var_3))))) % (var_8)));
                            }
                            for (int i_13 = 1; i_13 < 8; i_13 += 3) /* same iter space */
                            {
                                arr_50 [i_1] [i_1] = ((/* implicit */unsigned long long int) -4408539969154280704LL);
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_7)))))));
                                var_24 -= ((/* implicit */long long int) (+(((/* implicit */int) (!(((arr_35 [i_0] [i_0] [i_0 + 2] [i_0] [i_0]) != (((/* implicit */long long int) var_0)))))))));
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((((arr_10 [i_0] [(unsigned short)7] [i_0] [i_8] [i_8] [(unsigned char)9]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_0] [i_0]))) : (var_8))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (869529702U))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_7] [i_7] [i_8] [i_13]))))))));
                                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (((!(((/* implicit */_Bool) 2370444987U)))) ? (var_8) : (((/* implicit */unsigned long long int) max((arr_30 [i_8 - 3] [i_8] [i_1] [i_8] [i_8]), (arr_30 [i_8 + 1] [i_8 + 3] [i_1] [i_8] [i_8])))))))));
                            }
                            arr_51 [i_0] [i_1] [i_7] [(_Bool)1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1389818075))))), (arr_4 [i_1] [i_8])));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_14 = 3; i_14 < 9; i_14 += 3) 
                            {
                                arr_56 [i_0] [i_1] &= ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) arr_23 [i_0])) : (arr_48 [i_0] [i_8]))) != (((/* implicit */int) ((((/* implicit */int) (signed char)-2)) == (((/* implicit */int) arr_26 [i_8])))))));
                                var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_7] [i_8] [(unsigned short)4] [8])) << (((((((/* implicit */int) (signed char)-72)) + (99))) - (7)))))) % ((+(arr_18 [i_1] [i_7] [i_14])))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_15 = 0; i_15 < 12; i_15 += 3) 
                {
                    for (int i_16 = 2; i_16 < 9; i_16 += 4) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 3) 
                        {
                            {
                                var_28 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)42201)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_16] [i_16 - 1] [i_16 + 3] [i_1] [i_0 + 1] [i_1]))) : (var_4))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_16] [i_16] [i_16 - 2] [i_16 + 2] [i_15] [i_0 + 2] [i_16])) ? (((/* implicit */int) arr_49 [i_15] [i_0 - 1] [i_0])) : (((/* implicit */int) (unsigned char)124)))))));
                                arr_64 [i_0 + 2] [i_1] [i_15] [8LL] [8LL] [i_16] [i_15] = ((/* implicit */long long int) 3425437591U);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_18 = 1; i_18 < 17; i_18 += 4) 
    {
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            for (unsigned short i_20 = 0; i_20 < 18; i_20 += 2) 
            {
                {
                    arr_73 [i_18] [i_19] [i_20] = ((/* implicit */int) max((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */long long int) ((/* implicit */int) arr_65 [i_19]))) ^ (-8288610934431894985LL))))), (((/* implicit */long long int) (+(((/* implicit */int) ((arr_71 [(unsigned char)1] [i_18] [i_18]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_18] [i_19])))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 0; i_21 < 18; i_21 += 4) 
                    {
                        for (long long int i_22 = 2; i_22 < 17; i_22 += 2) 
                        {
                            {
                                var_29 -= ((/* implicit */int) (+(16128ULL)));
                                arr_79 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) (+(((((_Bool) var_0)) ? (((/* implicit */int) arr_67 [i_18])) : (((((/* implicit */_Bool) (unsigned short)13868)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)36360))))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) var_1))));
                }
            } 
        } 
    } 
}
