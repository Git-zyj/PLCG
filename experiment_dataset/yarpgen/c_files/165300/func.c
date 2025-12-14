/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165300
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
    var_16 |= ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) var_2)))), ((!(((/* implicit */_Bool) (-(var_0))))))));
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_7))));
    var_18 ^= ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) == (max((((/* implicit */long long int) (_Bool)1)), (4968127478961412951LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((min((((/* implicit */unsigned short) (signed char)31)), (var_13))), (((/* implicit */unsigned short) var_11)))))) : (var_9)));
    var_19 -= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_6))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0])))) || (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))), ((((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */int) 9223372036854775807LL);
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((4968127478961412951LL), (arr_5 [i_0] [11])))))))))));
                var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)7] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))));
            }
            /* vectorizable */
            for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) /* same iter space */
            {
                arr_11 [i_3 - 1] [i_1] = ((/* implicit */int) ((long long int) arr_5 [i_1] [i_1]));
                var_23 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)12))));
            }
            for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_6 = 4; i_6 < 13; i_6 += 4) 
                    {
                        arr_19 [8LL] [i_1] [i_4] [i_1] [i_4] [i_5] [14U] = ((/* implicit */int) max((arr_16 [i_4 + 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_4 + 1])) && (((/* implicit */_Bool) arr_16 [i_4 + 1])))))));
                        arr_20 [i_0] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3594773007U)) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_5] [i_0] [i_0] [i_0])) == (((/* implicit */int) (unsigned char)7))))) : (((/* implicit */int) var_15))))) ? (arr_14 [i_4] [i_4] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_6 + 2] [i_4 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)125))) == (arr_5 [i_0] [(unsigned char)14])))))))))));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_14 [i_1] [i_4] [i_4 + 1])) ? (arr_13 [i_0]) : (arr_3 [i_1] [i_5] [i_1]))))))));
                        var_25 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((/* implicit */int) ((_Bool) arr_17 [i_0] [i_1] [i_4] [i_0] [i_6])))))), (((arr_7 [i_4 + 1]) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((arr_1 [i_6 + 1]) != (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_5 [i_5] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ? (arr_1 [i_0]) : (2390507369004017698LL))))));
                    }
                    for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        arr_24 [i_4] [12LL] [12LL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) -7044286927063160092LL);
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (!(((/* implicit */_Bool) var_7)))))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */int) ((max((-8873285715908364517LL), (((/* implicit */long long int) arr_4 [i_0] [i_0])))) == ((-(-6003634728139170929LL)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 20U)) ? (4761116377601045077LL) : (0LL)))))))));
                    }
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        var_29 -= ((/* implicit */long long int) (_Bool)1);
                        arr_29 [7LL] [i_5] [i_4] [i_1] [i_0] = ((min((((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) == (5209666910920911744LL))), (((((/* implicit */int) var_12)) != (arr_15 [i_1] [i_1] [i_1] [i_1] [i_8] [i_4]))))) ? (((/* implicit */long long int) arr_22 [(unsigned short)0] [6LL] [(unsigned short)0] [11LL] [i_8])) : (9223372036854775807LL));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) 21U))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_9 = 2; i_9 < 13; i_9 += 3) 
                    {
                        var_31 = ((/* implicit */short) (unsigned char)10);
                        var_32 = ((/* implicit */long long int) (_Bool)1);
                    }
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        arr_34 [i_0] [i_4] [i_5] [i_4] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_33 = ((/* implicit */unsigned char) (+(var_4)));
                        arr_35 [i_0] [i_0] [i_4 + 1] [i_4] [(unsigned char)3] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_0] [i_0] [i_4] [i_0] [i_0]))));
                    }
                }
                arr_36 [i_4] [i_4 + 1] = ((/* implicit */long long int) (unsigned char)1);
                arr_37 [i_4] [i_1] [i_4] = arr_13 [i_4];
            }
            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_0] [7] [7])) ? (min((1377583225269258424LL), (((5LL) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_0]))))))) : (((/* implicit */long long int) (-((+(((/* implicit */int) arr_26 [i_0] [i_1] [7U] [i_0] [i_1] [i_1] [i_1]))))))))))));
            var_35 ^= ((/* implicit */long long int) -1842037580);
            arr_38 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))))) ? ((~(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_10))));
            arr_39 [i_0] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_0] [11LL] [i_0] [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [1LL] [i_1] [i_1] [i_1]))))), (((var_1) / (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] [i_0])))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_11 = 4; i_11 < 12; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                {
                    arr_45 [i_0] [i_12] [i_12 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0])))))) / (min((min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_23 [i_0] [i_11] [i_11 + 3] [i_12] [i_12])))), (var_1)))));
                    arr_46 [i_12] [i_11] [i_0] [i_12] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_25 [i_12 + 1] [i_11 - 2] [i_11 - 2] [i_0] [i_11] [i_12 + 1])) ? (((/* implicit */long long int) -921237195)) : ((-(arr_8 [4LL]))))), (((long long int) (unsigned short)0))));
                    arr_47 [i_12] [i_11] [i_12] = ((/* implicit */unsigned char) var_3);
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 14; i_13 += 1) 
                    {
                        for (int i_14 = 0; i_14 < 15; i_14 += 2) 
                        {
                            {
                                arr_53 [i_12] [i_14] [i_12] [i_13] [i_12] [i_11] [i_12] = ((/* implicit */unsigned short) ((((arr_52 [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 1] [i_12]) ? (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1790))) : (arr_44 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))))) | ((-(arr_8 [i_11 - 4])))));
                                arr_54 [i_0] [i_11] [i_12 + 1] [i_12] [i_14] = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */long long int) arr_43 [i_12 + 1] [i_13 + 1])), (9223372036854775778LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_55 [4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_28 [i_0] [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [0LL] [i_0])) : (((/* implicit */int) (signed char)-38)))) : (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        arr_56 [i_0] = min((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) : (-9223372036854775779LL))));
    }
    for (long long int i_15 = 2; i_15 < 13; i_15 += 1) 
    {
        arr_59 [i_15] [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)30))));
        arr_60 [i_15] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_43 [i_15 - 2] [i_15 + 1]), (arr_43 [i_15 + 1] [i_15 - 1])))) >> (((((((/* implicit */_Bool) arr_43 [i_15 - 1] [i_15])) ? (((/* implicit */int) arr_43 [i_15 - 2] [i_15 - 1])) : (((/* implicit */int) arr_43 [i_15 + 1] [i_15 + 1])))) - (45489)))));
    }
}
