/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137195
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
    var_11 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) (~(var_6)))) ? (min((0U), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) var_6))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) max(((!(((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) arr_6 [i_0] [i_1])))))))));
                arr_8 [i_0] = ((((/* implicit */_Bool) (-((-(arr_3 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3066334371756901254LL))))) <= (((/* implicit */int) ((arr_4 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3477))))))))) : (((((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_7 [i_0] [(signed char)0] [(signed char)0])))) & (arr_5 [i_0] [i_0] [i_0]))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (-(((((/* implicit */int) arr_2 [i_1])) % (arr_5 [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 2; i_3 < 23; i_3 += 2) 
        {
            arr_13 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2]))) : (9314674997683468982ULL)));
            arr_14 [i_3] = ((/* implicit */unsigned char) var_4);
        }
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            arr_18 [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4])))))));
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (max((511U), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            var_15 &= ((/* implicit */unsigned int) (~(((((((/* implicit */int) arr_10 [i_2])) >= (((/* implicit */int) var_5)))) ? (((/* implicit */int) arr_17 [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                            arr_28 [i_6] = ((/* implicit */unsigned short) max((1068437329U), (((/* implicit */unsigned int) (unsigned short)3485))));
                            arr_29 [i_5] [i_5] [i_5] [i_6] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_26 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7]))))), ((unsigned short)3477)));
                            arr_30 [(_Bool)1] [(unsigned char)12] [i_5] [i_5] [i_6] = ((/* implicit */int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_7)))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) (unsigned char)30)) ? (arr_21 [i_2] [i_2]) : (arr_21 [(unsigned char)3] [6LL]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_19 [i_2] [i_2] [i_2] [i_4]), (((/* implicit */short) (signed char)85))))))))));
            var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 9223372036854775788LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8573))) : (4294966804U))) <= (((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) arr_27 [13LL] [13LL] [13LL]))), ((-(1725869182))))))));
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 23; i_8 += 3) 
            {
                for (unsigned char i_9 = 1; i_9 < 23; i_9 += 1) 
                {
                    {
                        arr_38 [i_8] [i_4] [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62059)) ? (((/* implicit */int) arr_25 [(signed char)14] [(_Bool)1] [i_2] [i_2] [i_2] [17] [i_2])) : (-2045178526)))))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (short)-6469)) && (((/* implicit */_Bool) -948943066))))))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_4] [i_9] [i_8] [(_Bool)1] [i_4] [i_2] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_2] [i_8]))))) : (((((/* implicit */int) arr_19 [i_2] [i_4] [i_8] [i_9 + 1])) - (((/* implicit */int) arr_37 [i_2] [i_4] [i_8] [4LL]))))))) ? (((/* implicit */int) min(((short)-8557), ((short)32765)))) : (((/* implicit */int) arr_17 [i_2]))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                {
                    var_19 -= max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) 2862117521735350947LL)) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_2])))));
                    arr_46 [i_2] [i_10] [i_11] |= ((/* implicit */int) var_10);
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) arr_52 [i_2] [5LL] [i_11] [15LL] [i_2]);
                                var_21 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_41 [i_11] [i_11] [i_11]))))) > (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (12ULL) : (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) var_8)))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (short)-26170))) ? (((((/* implicit */_Bool) 3066334371756901279LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4))) : ((-(((((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_2])) ? (arr_45 [(unsigned short)15] [(unsigned short)15] [(unsigned short)15] [(unsigned short)20]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_2] [i_10]))))))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_10 [i_2]))));
        arr_53 [(unsigned char)15] = ((/* implicit */short) var_4);
    }
    for (int i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_48 [9LL] [9LL] [i_14])) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(-841386997)))))))));
        arr_58 [i_14] &= ((max(((~(((/* implicit */int) (short)32746)))), (((/* implicit */int) (short)-8579)))) != (((/* implicit */int) var_3)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_15 = 2; i_15 < 23; i_15 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                arr_63 [(unsigned short)21] [i_15] [i_16] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_33 [i_14] [i_15])) : (((/* implicit */int) (unsigned short)23882)))));
                var_25 = ((/* implicit */short) ((((((((((/* implicit */_Bool) var_2)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_54 [i_14])) - (22073)))));
                var_26 = ((/* implicit */unsigned long long int) var_2);
            }
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_14])) ? (arr_44 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        }
        for (signed char i_17 = 2; i_17 < 23; i_17 += 2) /* same iter space */
        {
            arr_67 [23ULL] [i_17] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_26 [13ULL] [i_14] [i_14] [i_14] [i_17 - 1] [i_17])) : (var_6)))) ? (min((arr_21 [i_14] [i_14]), (((/* implicit */unsigned long long int) (unsigned short)3484)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_47 [17U]))))))) >= (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (arr_49 [i_17] [i_17] [i_14]) : (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_48 [i_14] [(unsigned short)0] [i_14])) : (((/* implicit */int) arr_33 [i_14] [i_17]))))))))));
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) 0ULL))));
            arr_68 [i_14] [(_Bool)1] [(short)5] = ((/* implicit */unsigned int) var_8);
        }
    }
    var_29 = ((/* implicit */unsigned int) 4398044413952LL);
}
