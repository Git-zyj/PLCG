/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12629
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
    var_18 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) (signed char)102)) / ((~(((/* implicit */int) (unsigned char)127)))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13045))) : (var_8)))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1152921504606846975ULL))))))))) ? (((min((21ULL), (((/* implicit */unsigned long long int) 4221894563U)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)511))))) : (((/* implicit */unsigned long long int) min((arr_2 [i_0]), (((/* implicit */int) ((unsigned char) 5473182773084733686LL)))))))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((max((min((((/* implicit */long long int) -2147483640)), (arr_1 [i_0] [i_0]))), (((/* implicit */long long int) max((((/* implicit */int) (signed char)-9)), (477776498)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_16))))) : (max((var_11), (var_11)))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_21 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_2 [i_1])))) ? (((((/* implicit */_Bool) var_8)) ? (arr_2 [i_1]) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (arr_3 [i_2])))) : ((-(var_11)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned int) max((arr_2 [i_1]), (((/* implicit */int) var_14)))))))) : ((-(var_5)))));
            arr_8 [i_2] = ((/* implicit */unsigned char) var_10);
            arr_9 [(unsigned char)11] [i_2] [i_2] = (~((+(arr_1 [i_2] [i_2]))));
        }
        for (int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
        {
            var_23 = (+(((/* implicit */int) arr_11 [i_1] [i_1] [i_3])));
            var_24 = ((/* implicit */unsigned short) min((((long long int) (~(var_5)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) arr_3 [i_3])) : (min((((/* implicit */unsigned int) (unsigned short)19797)), (4221894553U))))))));
            var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_16)))) == (((/* implicit */int) min((arr_10 [i_3] [i_3]), (arr_10 [i_3] [i_3]))))));
        }
        var_26 ^= ((/* implicit */int) arr_0 [i_1] [i_1]);
        /* LoopSeq 2 */
        for (int i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            arr_16 [i_1] [i_4] = ((((/* implicit */_Bool) arr_15 [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) ((arr_5 [i_1] [i_4 - 1]) >= (var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) : (min((arr_13 [i_4 + 2] [i_4 + 1] [i_4 - 1]), (arr_13 [i_4 + 2] [i_4 + 1] [i_4 - 1]))));
            arr_17 [i_1] [i_4] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (var_8))) : (((/* implicit */unsigned long long int) var_7)))));
            var_27 = max((((int) var_1)), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-72)), (arr_6 [i_4] [i_4] [i_4 + 1]))))))));
            arr_18 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) min((((arr_15 [i_4 - 2]) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4 + 2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(unsigned char)8])) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (var_3)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [i_4 + 2] [(unsigned char)10]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))))));
            var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_4 + 1])) ? (arr_5 [i_4 + 2] [i_4]) : (arr_5 [i_4 + 2] [i_4])))) ? ((-(((/* implicit */int) arr_4 [i_4 - 1] [i_4 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)23)))))));
        }
        for (unsigned char i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            arr_21 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+((-(((/* implicit */int) var_17))))))), (max((arr_5 [i_5] [i_5 + 2]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5)))))))));
            arr_22 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_1] [i_1])) ? (max((arr_1 [i_5 + 2] [i_5 + 2]), (arr_1 [i_5 - 1] [i_5 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(2036005535U))))))))));
        }
    }
    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
    {
        arr_25 [(signed char)8] [i_6] = ((/* implicit */signed char) (-((+(arr_3 [i_6])))));
        /* LoopSeq 2 */
        for (short i_7 = 4; i_7 < 13; i_7 += 1) 
        {
            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (~(((((/* implicit */_Bool) -1639574335)) ? (arr_24 [i_7 - 1]) : (((/* implicit */long long int) 1990299557)))))))));
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (+(max((((/* implicit */int) (_Bool)1)), (89782298))))))));
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            arr_32 [i_8] = ((/* implicit */unsigned long long int) (-(arr_13 [i_6] [i_8] [i_8])));
            arr_33 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_6])) ? (arr_29 [i_8]) : (((((/* implicit */_Bool) 477776478)) ? (((/* implicit */int) arr_31 [i_8])) : (var_0)))));
        }
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
        {
            arr_38 [11ULL] = ((/* implicit */_Bool) arr_28 [i_6] [i_9] [i_9]);
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((unsigned short) (short)14)))));
            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((max((73072713U), (4294967294U))) == (((/* implicit */unsigned int) min((arr_29 [i_6]), ((~(((/* implicit */int) (unsigned char)132))))))))))));
        }
    }
    /* vectorizable */
    for (signed char i_10 = 2; i_10 < 15; i_10 += 3) 
    {
        arr_41 [i_10 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_10 - 2])) ? (((((/* implicit */_Bool) arr_40 [i_10])) ? (((/* implicit */int) (unsigned short)27561)) : (((/* implicit */int) arr_40 [i_10])))) : (((/* implicit */int) arr_40 [i_10 - 2]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
        {
            arr_45 [i_10] [i_10 + 2] [i_10] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_44 [i_10 + 2] [i_10] [i_10 - 2]))));
            arr_46 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */int) arr_42 [i_10])) : (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) arr_39 [i_10 - 1])) : (((/* implicit */int) var_10))))));
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)5)) ? (8388607) : (((/* implicit */int) (unsigned short)15027))));
        }
        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_10] [i_10])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -5123031820183406628LL)) ? (((/* implicit */long long int) -1756062962)) : (1073741823LL)))))))));
            var_35 += ((/* implicit */unsigned long long int) arr_49 [i_10 + 2] [i_10 + 3]);
            /* LoopNest 3 */
            for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 4) 
            {
                for (unsigned short i_14 = 0; i_14 < 18; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        {
                            arr_57 [i_10] [7U] [i_13 + 2] [i_14] [i_14] [i_14] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_53 [i_10] [i_13 + 1] [i_14] [i_10 + 1] [i_15])) ? (arr_53 [i_10 + 1] [i_13 + 1] [i_13] [i_10 + 1] [i_15]) : (arr_53 [i_10] [i_13 + 1] [i_13] [i_10 + 1] [i_15])));
                            arr_58 [i_10 - 1] [i_10 - 1] [i_10] &= ((/* implicit */long long int) arr_52 [15] [i_10 + 3] [i_15] [i_15]);
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned int) 909426263))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)14))));
                        }
                    } 
                } 
            } 
        }
        var_37 = ((/* implicit */unsigned short) ((long long int) arr_44 [i_10 + 2] [i_10 - 2] [i_10]));
    }
    var_38 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_13), (var_13)))) || ((!(((/* implicit */_Bool) var_14))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -905058025)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (unsigned short)58896))))) ? (((/* implicit */long long int) ((var_11) << (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244)))))))));
    /* LoopSeq 2 */
    for (signed char i_16 = 4; i_16 < 13; i_16 += 4) 
    {
        var_39 = ((/* implicit */int) (+(4221894569U)));
        arr_61 [i_16] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 909426250))));
    }
    for (short i_17 = 0; i_17 < 18; i_17 += 4) 
    {
        arr_65 [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_54 [i_17] [i_17]), (((/* implicit */int) var_14))))) ? (((((/* implicit */int) max((var_14), (arr_51 [i_17] [i_17] [i_17] [(_Bool)1])))) + (((int) 3727597329012197460LL)))) : (((((((/* implicit */int) var_6)) + (2147483647))) << (((var_11) - (471406408U)))))));
        var_40 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)110))));
    }
}
