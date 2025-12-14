/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150670
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
    var_11 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (3697245266U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)24177))))))))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (((unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_6)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [(_Bool)1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [2U] [i_1])) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned char) (signed char)2))))))));
                    arr_10 [(unsigned char)5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_2] [i_1] [(unsigned char)5] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24174))) : (arr_5 [i_0] [9ULL] [i_2] [i_2]))) ^ (18446744073709551607ULL)));
                    arr_11 [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_6 [i_0] [9U] [i_1] [i_1])), (((signed char) ((_Bool) 6257633078705098606ULL)))));
                }
            } 
        } 
        var_13 &= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)51837)) : (((/* implicit */int) (signed char)81))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)6] [7ULL])))))) : (min((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [(signed char)1])), (var_7)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            arr_17 [i_4] &= ((/* implicit */signed char) ((var_1) ? (((((/* implicit */_Bool) ((signed char) 1841439846774138908LL))) ? (((((/* implicit */int) (unsigned char)171)) | (((/* implicit */int) (signed char)98)))) : (((/* implicit */int) ((signed char) var_5))))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_13 [i_3] [13ULL])))), (((12189110995004453009ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
            arr_18 [i_3] [3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) ((_Bool) 1826007335403451360ULL))))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    {
                        arr_23 [(unsigned char)10] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 32256)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)103)))), (((/* implicit */int) ((arr_21 [i_4] [i_6]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_13 [i_3] [i_3]))))))))) : (12189110995004453009ULL)));
                        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_20 [(_Bool)1] [(unsigned short)5] [(_Bool)1])) || (((/* implicit */_Bool) arr_20 [i_3] [i_4] [i_6]))))) - (((/* implicit */int) ((unsigned short) (signed char)-53))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                var_15 = ((/* implicit */signed char) min((var_15), ((signed char)-54)));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((arr_26 [i_7]), (arr_15 [i_3] [(unsigned short)11]))))))))))));
                arr_30 [i_3] [i_7] [i_8] = ((/* implicit */signed char) var_0);
            }
            for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                arr_35 [i_3] [i_7] [i_7] [i_9] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_22 [i_9] [i_7] [i_3]))))));
                arr_36 [i_9] [(unsigned char)6] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24167)) ? (((((/* implicit */_Bool) arr_25 [i_3] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_32 [(signed char)2] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 3782712084U)))))))));
                arr_37 [i_9] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_26 [i_3])))));
                var_17 += ((/* implicit */unsigned long long int) (short)-7053);
            }
            for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                var_18 = ((/* implicit */unsigned short) min((((12189110995004453005ULL) & (((/* implicit */unsigned long long int) arr_19 [i_10] [i_10] [i_10] [i_10])))), (((/* implicit */unsigned long long int) ((unsigned short) arr_19 [i_3] [i_3] [i_3] [i_3])))));
                var_19 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_29 [i_3] [i_3]))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
                arr_41 [i_3] [i_3] = ((/* implicit */unsigned short) min((((arr_40 [i_10] [i_7] [i_3]) >> (((((/* implicit */int) arr_13 [i_7] [i_10])) - (53))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)56)) > (((/* implicit */int) arr_13 [i_3] [1ULL])))))));
            }
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1)))))));
            var_22 = ((/* implicit */_Bool) arr_16 [i_3] [i_7]);
            var_23 ^= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (short)32757))))));
        }
        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 4) /* same iter space */
        {
            arr_44 [(unsigned short)5] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_24 [i_11] [i_11]))))))));
            arr_45 [i_3] = ((/* implicit */unsigned int) (_Bool)1);
            /* LoopSeq 3 */
            for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        arr_52 [(signed char)6] [(signed char)6] [i_14] [i_14] [(signed char)10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_38 [i_3])) > (((unsigned long long int) (short)-32733))));
                        var_24 = ((unsigned char) (+(arr_49 [i_11] [(_Bool)1] [2U])));
                    }
                    for (short i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        arr_55 [i_3] [i_3] [i_11] [i_12] [i_12] [i_13] [i_15] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_34 [i_11] [i_11] [i_13] [(unsigned char)10]))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_50 [i_3] [i_11] [i_12] [10] [i_15] [i_15])) & (((/* implicit */int) arr_47 [i_3]))));
                        var_26 = ((/* implicit */unsigned char) arr_14 [i_12]);
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_58 [(signed char)12] [i_11] [i_11] [i_11] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_26 [(unsigned char)6])) ? (((/* implicit */int) (_Bool)0)) : (778264445)))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_34 [(_Bool)1] [i_12] [i_13] [i_16])) : (((/* implicit */int) arr_34 [i_3] [i_11] [i_12] [i_16]))));
                    }
                    var_28 = ((/* implicit */unsigned char) ((signed char) arr_56 [i_3] [i_11] [i_11] [i_12] [(signed char)14]));
                }
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((signed char) (signed char)-56)))));
                var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_43 [i_12] [7ULL])))) : (((/* implicit */int) arr_50 [i_3] [(_Bool)1] [i_12] [1ULL] [i_3] [i_12])))))));
                var_31 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)41358)))) : ((((_Bool)1) ? (-2837344764070731376LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-48)))))));
            }
            for (signed char i_17 = 0; i_17 < 15; i_17 += 4) 
            {
                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((arr_59 [i_3] [i_17]) + (((/* implicit */unsigned long long int) 778264455))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) : (max((((/* implicit */unsigned long long int) arr_25 [i_11] [i_11])), (((((/* implicit */_Bool) (unsigned short)41359)) ? (((/* implicit */unsigned long long int) 778264445)) : (0ULL))))))))));
                var_33 = ((/* implicit */unsigned short) ((5961043266634630255ULL) | (arr_59 [i_11] [i_17])));
                var_34 = min((((unsigned long long int) arr_15 [i_11] [i_3])), (((((/* implicit */_Bool) 4256932883075941428ULL)) ? (4256932883075941407ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))));
                var_35 += ((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 15; i_18 += 2) 
                {
                    for (unsigned short i_19 = 0; i_19 < 15; i_19 += 2) 
                    {
                        {
                            var_36 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_38 [i_17])) ? (((/* implicit */int) arr_13 [i_3] [i_19])) : (((/* implicit */int) arr_13 [(signed char)6] [i_3]))))));
                            arr_68 [i_3] [i_3] [(short)11] [i_3] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), ((~((~(arr_53 [8ULL] [i_11])))))));
                            var_37 = ((_Bool) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            }
            for (unsigned int i_20 = 0; i_20 < 15; i_20 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_21 = 0; i_21 < 15; i_21 += 2) 
                {
                    for (unsigned short i_22 = 0; i_22 < 15; i_22 += 2) 
                    {
                        {
                            arr_77 [i_3] [i_11] [i_20] [(unsigned short)13] = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) ((_Bool) 802083532))))));
                            arr_78 [7ULL] [i_22] [i_21] [5U] [i_11] [(signed char)3] [i_3] = ((/* implicit */unsigned char) max((((_Bool) ((unsigned long long int) (_Bool)1))), (((((((/* implicit */_Bool) arr_15 [i_3] [i_11])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0)))) > (((/* implicit */int) (signed char)-56))))));
                            var_38 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (arr_29 [i_11] [i_21])))) : (((12189110995004453009ULL) * (((/* implicit */unsigned long long int) 778264455)))))));
                        }
                    } 
                } 
                arr_79 [i_20] [i_20] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((6ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-64)) * (((/* implicit */int) (signed char)0))))))))) ^ (((arr_38 [i_3]) | (arr_38 [i_3])))));
                var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_74 [i_20] [i_11] [i_20] [i_20] [i_3] [i_3])) ? (1061608711U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_3] [i_11] [i_11] [i_3] [i_20] [i_20]))))))))));
            }
        }
        for (unsigned int i_23 = 0; i_23 < 15; i_23 += 4) /* same iter space */
        {
            var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4737483195518668484ULL))));
            /* LoopSeq 1 */
            for (unsigned int i_24 = 0; i_24 < 15; i_24 += 4) 
            {
                var_41 += ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) (unsigned short)47011)) + (((/* implicit */int) (unsigned short)24177)))) <= (((/* implicit */int) ((unsigned short) 2982627313U)))))) <= (((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) >> (((arr_84 [(_Bool)1] [i_23]) - (5861911940166893196ULL)))))));
                arr_85 [(_Bool)1] [(_Bool)1] [i_24] [(unsigned char)12] = ((/* implicit */unsigned short) min((((unsigned int) arr_39 [i_24])), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)54923)))))));
                arr_86 [i_23] [i_23] [i_24] [i_23] = ((/* implicit */unsigned int) ((signed char) (signed char)-104));
            }
            arr_87 [i_3] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (unsigned short)18524)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)86)))));
        }
        arr_88 [i_3] [(_Bool)1] = ((signed char) (signed char)91);
    }
    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_5), (((/* implicit */unsigned char) (signed char)99)))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47011))))))) : (((((/* implicit */int) var_1)) % (((((/* implicit */_Bool) (unsigned short)21074)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) var_10))))))));
    var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)47004))))), (min(((signed char)-56), ((signed char)-79)))))))))));
}
