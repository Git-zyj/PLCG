/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185782
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) (~(arr_0 [(unsigned short)2]))))));
        var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65535))));
        var_12 -= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
            {
                var_13 = ((/* implicit */short) ((_Bool) arr_7 [i_3 - 1] [i_1 + 3] [(_Bool)1]));
                arr_9 [i_1] [i_3] = ((short) (signed char)109);
                var_14 -= ((/* implicit */short) ((((/* implicit */int) (signed char)-88)) < (((/* implicit */int) arr_4 [(unsigned short)10] [i_1 - 1]))));
            }
            /* LoopSeq 3 */
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                var_15 ^= ((/* implicit */short) 9223367638808264704ULL);
                /* LoopSeq 3 */
                for (int i_5 = 3; i_5 < 8; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) >= (((long long int) 32767U))));
                        arr_20 [i_1] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 4] [i_1] [i_1 + 4])) || (((/* implicit */_Bool) ((3939576580343438908ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))));
                        arr_21 [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        arr_25 [i_1] [i_4] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                        var_17 = ((/* implicit */_Bool) var_2);
                        var_18 = ((/* implicit */unsigned char) (short)14505);
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (unsigned char)0))));
                        var_20 = ((/* implicit */short) (unsigned short)65512);
                    }
                    arr_26 [i_1] [i_1] [i_1] [3LL] = ((/* implicit */short) (!(arr_16 [i_5] [i_5 - 2] [i_5 - 2] [(unsigned short)1] [i_5 - 3] [i_5])));
                }
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)(-32767 - 1)))))) >> (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1))))));
                    var_23 = ((/* implicit */unsigned short) 2735748415U);
                }
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                {
                    arr_31 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_24 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1]))));
                    var_24 -= ((/* implicit */signed char) var_8);
                }
                var_25 = ((/* implicit */long long int) var_2);
                /* LoopNest 2 */
                for (short i_10 = 3; i_10 < 10; i_10 += 3) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4129709552932564117LL)) ? (arr_7 [i_1 + 1] [2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            var_27 -= ((/* implicit */signed char) ((arr_16 [i_1 - 1] [i_1 + 4] [i_2] [i_2] [i_10 - 1] [i_11]) ? (((/* implicit */int) arr_16 [i_1 - 1] [i_1 + 1] [i_2] [i_2] [i_10 - 3] [i_10])) : (((/* implicit */int) (unsigned char)0))));
                            arr_37 [i_1] [i_1] [i_4] [i_11] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) arr_32 [i_1 + 2] [i_1 + 2] [i_2] [i_10 + 1] [i_10 - 1] [i_10 + 1]))));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (unsigned short)57344))));
                        }
                    } 
                } 
            }
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                arr_40 [i_1] [i_1] [i_1] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-105))));
                var_29 = ((/* implicit */short) (_Bool)1);
            }
            for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                arr_45 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_6))));
            }
            arr_46 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (arr_2 [i_1 + 3])));
            arr_47 [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_22 [i_1] [i_1 + 3] [i_1 + 4] [i_1 + 2]);
            var_31 = ((/* implicit */short) (~(-3055590059463188837LL)));
        }
        arr_48 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2047))) > (arr_2 [(_Bool)1])))))) * (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
        var_32 = ((/* implicit */_Bool) min((var_32), (((((/* implicit */_Bool) (~((-2147483647 - 1))))) || (((/* implicit */_Bool) 6397908691028103591LL))))));
    }
    for (unsigned int i_14 = 1; i_14 < 13; i_14 += 1) 
    {
        arr_51 [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_50 [i_14])) : (((/* implicit */int) ((((((/* implicit */_Bool) -4847746046294083281LL)) && (((/* implicit */_Bool) var_9)))) || (((((/* implicit */_Bool) arr_50 [i_14 - 1])) || ((_Bool)1))))))));
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            for (signed char i_16 = 0; i_16 < 16; i_16 += 3) 
            {
                for (short i_17 = 0; i_17 < 16; i_17 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_18 = 0; i_18 < 16; i_18 += 3) 
                        {
                            arr_62 [i_16] = ((/* implicit */long long int) ((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            arr_63 [i_16] [i_17] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) > (17313002958906885770ULL)));
                            arr_64 [i_15 + 1] [i_16] [i_15 + 1] [i_16] [i_14] = ((/* implicit */short) (+(((/* implicit */int) arr_58 [i_15 + 1] [i_15 + 1] [i_14 + 2] [i_14] [i_14] [i_14 + 1]))));
                            var_33 = ((/* implicit */_Bool) (short)(-32767 - 1));
                            var_34 = ((/* implicit */short) arr_52 [i_14] [i_14] [i_17]);
                        }
                        for (short i_19 = 1; i_19 < 13; i_19 += 4) /* same iter space */
                        {
                            arr_68 [i_16] [i_16] [i_16] [i_17] [i_19 - 1] = ((/* implicit */unsigned short) (signed char)-78);
                            arr_69 [6LL] [i_15 + 1] [(unsigned short)7] [i_16] [i_19 - 1] = ((/* implicit */_Bool) arr_49 [(unsigned short)6]);
                        }
                        for (short i_20 = 1; i_20 < 13; i_20 += 4) /* same iter space */
                        {
                            arr_73 [i_16] [15LL] [i_16] [i_17] [i_20] = ((/* implicit */long long int) ((short) var_2));
                            arr_74 [(signed char)9] [i_15] [(signed char)9] [i_17] [i_20] [i_16] = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned char) 2038719975))), ((~(max((1134753802U), (((/* implicit */unsigned int) (unsigned char)0))))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 16; i_21 += 4) 
                        {
                            arr_79 [i_21] [i_15] [i_21] |= ((/* implicit */unsigned long long int) (+(253952LL)));
                            arr_80 [i_14] [i_14] [(signed char)15] [i_14] [(signed char)15] [(signed char)15] [i_16] = ((/* implicit */long long int) var_8);
                            arr_81 [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_77 [i_16] [i_16])) >> (((((/* implicit */int) arr_58 [i_15 + 1] [(unsigned short)3] [(unsigned short)3] [(signed char)11] [i_14 + 3] [(unsigned short)3])) + (11279)))));
                            var_35 -= ((/* implicit */signed char) (short)10509);
                        }
                        for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 1) 
                        {
                            arr_85 [(unsigned char)1] [i_15] [i_15 + 1] [i_16] [i_16] [i_17] [(short)14] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)0)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (~(13094380618298120697ULL)))))))));
                            arr_86 [i_17] [i_16] [i_16] [i_14 + 2] [i_14 + 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_77 [i_16] [i_16])) || (((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))))));
                        }
                    }
                } 
            } 
        } 
        arr_87 [i_14] [i_14] = ((/* implicit */short) min(((~((~(((/* implicit */int) (short)26682)))))), (((/* implicit */int) var_1))));
    }
    var_36 = ((/* implicit */unsigned long long int) max((var_36), (var_8)));
}
