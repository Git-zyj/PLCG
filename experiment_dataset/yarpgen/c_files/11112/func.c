/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11112
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */signed char) max((var_10), (var_2)));
                    arr_9 [i_0] [i_1] [13ULL] [(signed char)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82))) : (12659213486434357962ULL)));
                    arr_10 [11LL] [0LL] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65520))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40689))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)49711)) && (((/* implicit */_Bool) 8227725652975922915LL)))))));
                    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (unsigned short)49711))));
                    var_12 ^= ((/* implicit */long long int) (unsigned short)0);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) ((int) (unsigned short)4929));
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_0 [i_3]))));
                var_16 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (signed char)3)) ? (((((/* implicit */_Bool) arr_2 [i_4 - 2])) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_14 [i_3] [(signed char)6] [i_4])))) : (((/* implicit */int) var_2)))));
            }
        } 
    } 
    var_17 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(4294967295U)))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15814)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_5)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_5 = 2; i_5 < 12; i_5 += 1) 
    {
        arr_18 [i_5 + 2] = ((/* implicit */int) var_1);
        var_18 ^= ((/* implicit */signed char) ((((arr_15 [i_5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5]))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_12 [i_5] [i_5]))))));
        arr_19 [6LL] [i_5 + 3] &= ((/* implicit */signed char) (((~(var_8))) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-2560960372362303357LL)))));
    }
    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        var_19 = (signed char)114;
        arr_24 [i_6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_2)) ? (arr_7 [(signed char)1] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_6] [i_6])) + ((~(((/* implicit */int) arr_2 [14LL])))))))));
    }
    for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        arr_28 [i_7] = ((((/* implicit */int) ((arr_23 [i_7]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -653608576))))))) << (((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49726))) : (6604531772268431103LL))))) - (49722LL))));
        var_20 = max((((/* implicit */long long int) arr_2 [i_7])), (((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) | (var_0))) : (((/* implicit */long long int) ((arr_21 [i_7]) << (((((/* implicit */int) (unsigned short)65504)) - (65488)))))))));
        var_21 += ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((int) arr_25 [8U]))) + (-5724450571653880091LL))), (((/* implicit */long long int) var_7))));
        var_22 ^= ((long long int) min((((/* implicit */unsigned long long int) arr_25 [6LL])), (arr_7 [i_7] [13] [8] [i_7])));
    }
    for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
        {
            var_23 |= ((/* implicit */long long int) ((max((max((((/* implicit */long long int) var_1)), (8980184566441135627LL))), (((var_8) % (((/* implicit */long long int) 125829120)))))) != (max((max((((/* implicit */long long int) (signed char)-73)), (-6604531772268431093LL))), (((/* implicit */long long int) ((signed char) var_9)))))));
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            var_24 += ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) arr_29 [(signed char)2])))) ? (((((/* implicit */_Bool) (signed char)-12)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_11] [i_9] [i_11]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (unsigned short)22322))))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)-83)) | (((/* implicit */int) var_4)))))))));
                            arr_41 [i_12] [i_9] [i_9] [(signed char)4] = ((/* implicit */unsigned long long int) var_4);
                            var_25 = (signed char)-113;
                            var_26 = ((/* implicit */unsigned int) max(((((-(var_5))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) arr_35 [i_9] [i_9] [i_9])))))));
                        }
                        arr_42 [i_9] [i_8] [i_8] [10LL] [i_10] [(signed char)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((signed char) -7840478906043198402LL))) : (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))))), (arr_38 [i_8] [(unsigned short)10] [(signed char)9] [i_9] [i_10] [i_10] [i_11]))))));
                    }
                } 
            } 
        }
        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) * (((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_32 [i_8])))))) : (((arr_30 [i_13]) << (((((/* implicit */int) ((signed char) arr_31 [i_8]))) + (150))))))))));
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    {
                        arr_50 [i_8] [i_13] [i_14] [i_15] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)67), ((signed char)4))))))), ((+(((((/* implicit */int) arr_39 [(signed char)2] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) | (((/* implicit */int) var_2))))))));
                        var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) 281474976710655ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) -8980184566441135636LL)) ? (((((/* implicit */_Bool) (signed char)75)) ? (var_1) : (2198841089U))) : ((+(var_7)))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_16 = 0; i_16 < 20; i_16 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned short) max(((signed char)-46), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_8] [i_13] [i_8] [i_13])) && (((/* implicit */_Bool) (signed char)100)))))));
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 20; i_18 += 1) 
                    {
                        {
                            arr_59 [i_13] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 208882032)) ? (((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (signed char)124)))) : (((/* implicit */int) (signed char)127))))), (min((18446462598732840978ULL), (((/* implicit */unsigned long long int) 4294967295U)))));
                            var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65506)) ? (((/* implicit */int) max(((unsigned short)22769), (((/* implicit */unsigned short) var_4))))) : ((+(((/* implicit */int) (signed char)-68)))))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_49 [i_16]), ((signed char)-65))))));
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) 1727328055U))));
                var_33 ^= ((/* implicit */unsigned short) 10817293470998651252ULL);
            }
            for (signed char i_19 = 0; i_19 < 20; i_19 += 1) /* same iter space */
            {
                arr_62 [i_13] [i_19] = ((/* implicit */signed char) ((unsigned short) (signed char)15));
                var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65502)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)8)), (((((/* implicit */int) var_4)) | (((/* implicit */int) (signed char)71))))))) : (var_9)));
                arr_63 [(unsigned short)3] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max(((signed char)94), ((signed char)16)))))))));
            }
            var_35 = ((/* implicit */unsigned short) max((arr_53 [(signed char)12] [11U] [14U] [i_13] [14U]), (((/* implicit */int) var_4))));
        }
        arr_64 [i_8] = ((signed char) (+(0U)));
    }
}
