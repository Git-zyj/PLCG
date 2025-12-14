/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140825
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_10)), (((unsigned long long int) ((var_5) == (35184372088831LL)))))))));
    var_21 = ((/* implicit */unsigned long long int) -396552659);
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_13))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_23 ^= ((short) -396552677);
        arr_2 [i_0] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((int) -36453483)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) (unsigned short)40444)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_24 &= ((/* implicit */int) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)25084)))) : (var_14)));
                        var_25 = ((/* implicit */unsigned int) 396552676);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_4 = 2; i_4 < 22; i_4 += 3) 
            {
                arr_12 [13] [i_4] = ((/* implicit */short) var_0);
                arr_13 [i_4] = ((/* implicit */unsigned int) ((arr_11 [i_1] [i_4] [i_4 + 1]) <= (arr_11 [i_4] [i_4] [i_4 + 1])));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)24066)) ? (2006857207) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_4 - 1]))));
                    arr_17 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_4] [i_4])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_5]))) : (var_15))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_4 - 1])) ? (5893517028354196011ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                    arr_18 [i_0] [(_Bool)1] [i_0] [23] [i_4] [i_0] = (!(((/* implicit */_Bool) var_12)));
                    var_27 = ((/* implicit */unsigned short) ((unsigned long long int) 1165244540U));
                }
            }
        }
        for (short i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) ((max((arr_19 [i_6] [i_6]), (arr_19 [i_0] [i_6]))) >> (((10728124431978886146ULL) - (10728124431978886118ULL)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 4; i_7 < 22; i_7 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_8 = 4; i_8 < 21; i_8 += 3) 
                {
                    var_29 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_21 [i_8])), ((unsigned short)16320)))) ? (((/* implicit */long long int) var_1)) : (max((((/* implicit */long long int) (_Bool)1)), (arr_16 [i_7 - 4] [i_6]))))));
                    arr_28 [i_0] [(signed char)4] [i_8] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (9223372036854775790LL)));
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_8] [(unsigned short)11]))) : (arr_6 [i_0] [i_0] [i_7] [i_0])))) : (arr_20 [15LL] [15LL])))));
                }
                arr_29 [1LL] [1LL] [1LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_7 - 2] [i_6] [i_7] [i_6])) ? ((~(2ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_11 [i_0] [6LL] [(unsigned short)8]))))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 3) 
                    {
                        {
                            arr_35 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_9])) && (((/* implicit */_Bool) var_8))))), (((unsigned long long int) var_17))))));
                            var_31 ^= ((/* implicit */unsigned short) arr_14 [i_0] [i_6] [i_0] [i_9]);
                        }
                    } 
                } 
                arr_36 [i_6] [i_6] [i_0] = ((/* implicit */int) (((+(arr_30 [(short)4]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-36453494), (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_6] [i_6] [i_7])) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_7 + 2] [i_6])) : (((/* implicit */int) arr_3 [i_6])))) : (((/* implicit */int) arr_31 [i_0] [i_7 - 2] [i_7 - 3] [i_7 - 4])))))));
            }
            for (unsigned char i_11 = 1; i_11 < 23; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_32 += ((/* implicit */signed char) arr_22 [(_Bool)1]);
                            var_33 = (unsigned short)2392;
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    var_34 |= (+(4594475265731690653ULL));
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((((((/* implicit */_Bool) ((unsigned short) arr_37 [i_0] [22ULL] [i_11]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41483))) : (min((((/* implicit */unsigned long long int) var_18)), (var_14))))) | (((/* implicit */unsigned long long int) ((long long int) 396552674)))))));
                    arr_50 [i_11] [i_6] [i_11 + 1] [i_14] [i_11 + 1] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_25 [i_11 - 1] [i_14] [(unsigned char)20])) ? (arr_25 [i_11 - 1] [i_11 - 1] [7U]) : (arr_25 [i_11 + 1] [i_11 + 1] [i_11 + 1]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -396552678)) : (var_14))))))));
                    var_36 = ((/* implicit */unsigned long long int) var_19);
                }
            }
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 24; i_15 += 3) 
            {
                for (unsigned short i_16 = 3; i_16 < 22; i_16 += 3) 
                {
                    {
                        var_37 = ((/* implicit */unsigned long long int) arr_0 [22U] [(signed char)15]);
                        arr_56 [i_16] [i_6] [i_6] = ((/* implicit */_Bool) var_13);
                        arr_57 [i_16] [i_6] [i_15] [i_16 - 2] = ((/* implicit */unsigned short) 15984672650575660746ULL);
                        var_38 = ((/* implicit */unsigned int) ((arr_55 [i_16 + 2] [i_15] [i_6] [i_6] [i_0]) + (((/* implicit */long long int) arr_15 [i_0] [i_6] [i_16 - 2] [i_16]))));
                        var_39 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_48 [14U])) || (((/* implicit */_Bool) (unsigned short)32768)))) || (((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) 352046155U))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 2068780706)) <= (((((/* implicit */_Bool) var_12)) ? (15984672650575660746ULL) : (((/* implicit */unsigned long long int) 2068780705)))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 3) 
            {
                for (signed char i_18 = 1; i_18 < 22; i_18 += 3) 
                {
                    {
                        arr_64 [(_Bool)1] [(_Bool)1] [i_0] [i_18] [i_17] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (16ULL) : (((/* implicit */unsigned long long int) ((arr_61 [i_0] [(unsigned short)0] [i_17]) + (var_4))))));
                        var_40 = ((((arr_6 [(unsigned short)8] [i_18] [i_18 + 2] [i_18]) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -2068780706)) < (var_2))))))) ? (((((/* implicit */_Bool) arr_3 [i_18])) ? ((~(var_2))) : (arr_42 [(unsigned short)22] [(unsigned short)18] [i_18 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_0] [i_6] [i_6] [i_18] [(signed char)15]))));
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_19 = 1; i_19 < 12; i_19 += 3) 
    {
        var_41 = ((/* implicit */unsigned int) ((((arr_48 [i_19]) % (arr_48 [i_19]))) >= (((((/* implicit */_Bool) 2068780706)) ? (((/* implicit */int) var_7)) : (arr_48 [i_19])))));
        arr_67 [i_19] = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */int) arr_0 [i_19 + 2] [i_19 + 1])), (max((((/* implicit */int) var_6)), (var_1))))));
        arr_68 [12ULL] [12ULL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)-1), (arr_21 [i_19 + 2])))) ? (((long long int) 396552658)) : (min((((/* implicit */long long int) arr_52 [i_19] [i_19] [i_19])), (5469398669877282478LL)))));
        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_19 + 2] [i_19 + 3] [(unsigned short)12] [i_19 + 3] [i_19 + 4])) << (((/* implicit */int) arr_47 [i_19 + 1] [i_19 + 2] [i_19] [i_19 + 2] [i_19 + 3]))))) || ((_Bool)1)));
        arr_69 [i_19] [(unsigned char)13] = ((/* implicit */unsigned long long int) var_0);
    }
}
