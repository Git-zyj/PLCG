/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180984
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
    var_19 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) arr_2 [i_0]);
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (_Bool)1)), (784240585)))))) / (((unsigned long long int) arr_0 [(signed char)7] [i_0 + 1]))));
        var_22 |= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) (unsigned char)64)))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) 7168400745121384976ULL);
        var_23 += var_0;
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (short i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (short)11902))) ^ (((((/* implicit */_Bool) (short)-19390)) ? (((/* implicit */int) (unsigned char)64)) : (2147483647)))));
                            arr_15 [(_Bool)1] [i_5] [i_4] [i_4] [i_5 + 3] = ((/* implicit */int) 18446744073709551603ULL);
                        }
                    } 
                } 
                arr_16 [14U] [i_3] [(short)20] = ((/* implicit */int) ((min((arr_8 [i_3]), (12ULL))) > (((/* implicit */unsigned long long int) ((long long int) arr_8 [i_3])))));
                arr_17 [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) min(((signed char)127), ((signed char)-40)))));
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */int) (signed char)111);
                                var_26 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)111)))), (min((((/* implicit */unsigned long long int) arr_20 [i_7])), (var_12)))))) ? (((int) min((((/* implicit */unsigned long long int) arr_1 [i_8])), (arr_3 [i_8] [i_6])))) : (((((/* implicit */_Bool) arr_12 [14] [14] [14])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_12 [i_6] [i_6] [10])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 21; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) ((int) (short)31113));
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((arr_19 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_3]) > (((/* implicit */int) arr_14 [i_9 + 1] [i_9 + 1] [i_9 + 1] [(signed char)11])))))));
                        arr_28 [i_9] [(signed char)0] [i_9] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_2] [i_6] [i_9 + 1] [i_9] [i_9 - 1])) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) arr_14 [i_2] [i_3] [i_2] [i_9 + 1]))));
                        var_29 = ((/* implicit */unsigned short) (unsigned char)123);
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned int) ((unsigned long long int) 13ULL));
                            var_31 = ((/* implicit */short) ((arr_23 [i_9 + 1] [i_6] [i_3] [i_3] [i_9 + 1] [i_10] [i_6]) + (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */unsigned long long int) 7418911918562343474LL)) : (9992765337535345890ULL)))));
                        }
                        for (int i_11 = 2; i_11 < 21; i_11 += 2) /* same iter space */
                        {
                            var_32 = ((/* implicit */short) ((arr_23 [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_9] [i_6]) < (((/* implicit */unsigned long long int) arr_0 [i_2] [i_9 - 1]))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)3351)) ? (((/* implicit */int) (unsigned char)64)) : (65535)));
                            var_34 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)100))) + (arr_25 [(short)7] [i_11 - 2] [i_6] [i_9 + 1] [i_6] [i_6])));
                        }
                        for (int i_12 = 2; i_12 < 21; i_12 += 2) /* same iter space */
                        {
                            arr_38 [i_6] [i_6] [i_6] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) arr_21 [i_2] [(unsigned short)1] [(unsigned short)5] [0] [0]);
                            var_35 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_27 [i_2] [i_3] [i_2] [i_3] [i_12] [i_12 + 1])));
                            arr_39 [(signed char)6] [i_6] = ((/* implicit */long long int) (unsigned char)246);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_36 ^= ((/* implicit */int) ((long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)15)))));
                            var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) arr_42 [i_9 + 1] [(signed char)12] [i_6]))));
                            var_38 |= var_0;
                            var_39 ^= ((/* implicit */short) ((8213626196034314623ULL) * (((/* implicit */unsigned long long int) 4294967292U))));
                        }
                    }
                    arr_44 [i_2] [i_6] [i_6] [15LL] = ((/* implicit */int) ((unsigned long long int) ((unsigned short) arr_19 [i_2] [i_3] [(signed char)6] [i_6])));
                }
                for (unsigned int i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    var_40 += ((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned short)27545))) ? (((/* implicit */long long int) ((int) arr_22 [i_2] [14ULL] [i_14]))) : (min((((/* implicit */long long int) -46743582)), (-8765640765109419839LL)))));
                    arr_47 [(unsigned short)10] = ((/* implicit */long long int) var_10);
                    arr_48 [i_2] [i_14] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_34 [i_14] [3U] [i_3] [14] [14])), (min((arr_35 [(short)2] [0ULL] [i_3] [(short)2]), (((/* implicit */unsigned int) var_5))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)32369))) > (-7062651365298158299LL))) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) (unsigned char)39))))) : (((((/* implicit */_Bool) -1841352783)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (short)-6052)))))) : (min((((/* implicit */unsigned long long int) arr_30 [i_2] [i_2] [i_2] [i_2] [i_14])), (18446744073709551606ULL))))));
                    /* LoopSeq 2 */
                    for (signed char i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        var_41 = ((/* implicit */int) ((arr_25 [i_2] [(short)13] [(short)17] [i_2] [i_2] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)16384))))));
                        var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((14439773354984327282ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520)))))) ? (arr_45 [i_2] [17U] [i_2] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41675))))))));
                        var_43 = ((/* implicit */long long int) (((~(arr_3 [i_15] [i_3]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((long long int) -121519921)) : (((/* implicit */long long int) ((unsigned int) (unsigned char)142))))))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        var_44 -= ((/* implicit */short) ((((/* implicit */_Bool) 2491232248271851472ULL)) ? (((/* implicit */int) ((short) (short)-13504))) : (((/* implicit */int) ((unsigned char) (short)-23560)))));
                        arr_55 [i_2] [i_2] [i_2] |= ((/* implicit */int) arr_42 [i_3] [i_14] [i_16]);
                    }
                }
            }
        } 
    } 
    var_45 = ((/* implicit */short) min((((((/* implicit */_Bool) -1048802335)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (2084918278U))), (((/* implicit */unsigned int) var_9))));
}
