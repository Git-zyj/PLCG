/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154638
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) -864029289)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_1)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(_Bool)0])) - (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) min((max((var_4), (var_4))), (arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (9)))) ? (var_3) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 65535)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_7)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)27839)) : (((/* implicit */int) (unsigned short)27836))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-32766))))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)108)) ? (15845095584753733382ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))))) ? (((/* implicit */int) max(((signed char)120), (((/* implicit */signed char) arr_5 [i_1]))))) : (((/* implicit */int) arr_5 [i_1])))))));
        arr_8 [i_1] = min((((arr_5 [i_1]) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */short) (~(((/* implicit */int) (short)10568))));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_7 [i_2] [i_2]) ^ (var_3)));
    }
    for (unsigned char i_3 = 3; i_3 < 13; i_3 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_4 + 1])), (((((/* implicit */_Bool) 9125281678331165238ULL)) ? (((/* implicit */unsigned long long int) arr_15 [i_3])) : (12942472085557862397ULL)))))) ? (min((((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned int) arr_6 [i_3] [i_3])))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_14 [i_3 + 1])), (min((arr_15 [13]), (864029289))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                var_16 = ((((267844947) == (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) var_11)) : (arr_15 [i_3 - 1]));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_3])) == (((/* implicit */int) arr_0 [i_3] [i_3])))))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_3 + 2])) ? (((/* implicit */int) (unsigned short)27839)) : (65535)));
                            var_19 = ((/* implicit */short) (_Bool)0);
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_9 [i_3 - 1])));
                            var_21 = ((/* implicit */unsigned int) ((arr_10 [i_4 + 1] [i_3 - 1]) ? (((/* implicit */long long int) ((arr_5 [i_3]) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_0 [i_3] [3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) : (arr_9 [i_6])))));
                        }
                    } 
                } 
                arr_29 [i_3] [i_4] [i_5] = ((/* implicit */int) (signed char)-112);
                arr_30 [i_5] [i_5] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_3 + 3] [i_4 + 1]))));
            }
            for (int i_8 = 1; i_8 < 12; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    arr_36 [i_3] [i_3] [i_8] [i_4] [i_4 - 1] [i_9] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_3])))))) ? ((~(arr_27 [i_3] [i_8] [i_3] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (signed char)77)))))))));
                    var_22 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_32 [i_8 - 1] [i_8 - 1] [i_8 - 1])))), (((/* implicit */int) arr_32 [(signed char)2] [(signed char)2] [(signed char)2]))));
                    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_35 [i_4 - 1] [i_4] [i_4 - 1] [i_9])) != (((/* implicit */int) var_10)))) ? (((((/* implicit */_Bool) (short)17135)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)174)))) : (((/* implicit */int) max((((/* implicit */signed char) arr_35 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_3])), (arr_33 [i_4 + 1] [(_Bool)1] [(_Bool)1] [i_9]))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    var_24 = ((((var_11) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_38 [i_3] [(short)4] [(short)4] [(short)4] [(short)4] [(short)4])))) <= (((/* implicit */int) var_7)));
                    var_25 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)53))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (unsigned short)27830))));
                    arr_40 [(signed char)13] [(unsigned char)11] [i_8] [i_10] = (+(((/* implicit */int) arr_0 [i_4 - 1] [i_3 + 1])));
                }
                var_27 = ((/* implicit */int) min((max((((((/* implicit */_Bool) arr_19 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1885149048U))), (((/* implicit */unsigned int) arr_33 [i_8] [i_8] [i_8 + 3] [i_8 + 1])))), (((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned char)81)))))))));
            }
            var_28 = ((/* implicit */short) arr_5 [i_3]);
        }
        for (short i_11 = 1; i_11 < 14; i_11 += 3) 
        {
            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_41 [i_3] [i_3 + 3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_11 - 1] [i_11 - 1] [i_3 - 3] [i_11 - 1]))) : (((((/* implicit */_Bool) var_7)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_3 + 3] [i_3] [i_3] [i_3]))))))))));
            arr_44 [i_3] [i_11] [i_3] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) max((arr_39 [i_3] [i_11 + 2] [i_11]), (((/* implicit */short) arr_32 [i_3] [i_3] [i_3 + 1]))))))), (((/* implicit */int) arr_21 [i_3 - 2]))));
            var_30 = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) arr_20 [i_3] [i_11 + 2] [i_3] [i_3 + 1])), (8ULL)))));
        }
        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) 
                {
                    for (int i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        {
                            arr_54 [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (var_1) : (((/* implicit */int) (short)-17136))))) ? (var_1) : (max((((/* implicit */int) var_11)), (var_3)))))) ? (((/* implicit */unsigned int) min((((var_1) & (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_16 [i_3]))))))) : (min((((/* implicit */unsigned int) 536870911)), (1885149048U)))));
                            arr_55 [i_13] = ((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (max((((((/* implicit */_Bool) 1885149056U)) ? (((/* implicit */int) (short)-8954)) : ((-2147483647 - 1)))), (((arr_37 [i_3] [i_3] [i_3] [i_3]) ? (((/* implicit */int) arr_33 [i_3] [(unsigned short)14] [i_3 + 2] [(unsigned short)14])) : (((/* implicit */int) arr_24 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))))))));
                            arr_56 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */int) max((arr_16 [i_3]), (((/* implicit */short) arr_5 [i_3 - 3]))))) : (((/* implicit */int) min((arr_22 [i_3] [i_3] [i_13] [i_14]), (((/* implicit */short) (_Bool)0)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3] [i_12])) == (((/* implicit */int) var_10)))))))) : (max((((/* implicit */long long int) max((2409818263U), (((/* implicit */unsigned int) var_3))))), (((arr_9 [i_3 + 3]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163)))))))));
                            arr_57 [i_13] [i_13] [i_13] [i_13] [15] = ((/* implicit */unsigned int) var_2);
                        }
                    } 
                } 
            } 
            arr_58 [i_3] = ((/* implicit */long long int) (short)-30432);
        }
        arr_59 [i_3] [i_3] = ((/* implicit */long long int) ((arr_23 [i_3] [i_3] [i_3]) < (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_3] [i_3] [i_3] [i_3])))));
    }
    var_31 = ((/* implicit */unsigned char) var_6);
    var_32 = ((/* implicit */short) ((var_8) >> (((var_1) - (1760107792)))));
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) ^ (30ULL)));
    var_34 = ((/* implicit */long long int) var_11);
}
