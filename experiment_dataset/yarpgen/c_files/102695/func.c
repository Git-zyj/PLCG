/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102695
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) (unsigned short)23803)), (arr_2 [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)1)))))))) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))))));
        var_21 = ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (((long long int) ((arr_2 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) (~(min((arr_1 [i_1]), (((/* implicit */int) arr_4 [13LL] [i_1]))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 24; i_2 += 2) 
        {
            for (unsigned short i_3 = 2; i_3 < 23; i_3 += 3) 
            {
                {
                    var_23 = ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((max((((/* implicit */unsigned long long int) 1090715534753792LL)), (2945425987759421310ULL))) / (((/* implicit */unsigned long long int) (-(var_17)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) / (arr_8 [i_1] [i_1] [i_3 - 2])))));
                    var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)23808)), (arr_1 [i_1])));
                    var_25 *= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (min((9726931679936904662ULL), (((/* implicit */unsigned long long int) -16LL))))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (_Bool)1)));
                    var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((_Bool) min((536870911), (((/* implicit */int) arr_3 [i_3] [i_2])))))), (((unsigned char) arr_8 [i_3 + 1] [i_2 - 3] [i_3]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_5 = 4; i_5 < 22; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        for (int i_8 = 1; i_8 < 24; i_8 += 1) 
                        {
                            {
                                var_27 ^= ((/* implicit */long long int) (~(((/* implicit */int) var_16))));
                                var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(arr_18 [i_4] [i_4]))))));
                                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) var_16))));
                                var_30 -= ((/* implicit */signed char) ((unsigned long long int) arr_13 [i_5 - 4] [i_8 + 1]));
                                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) / (536870926)))) ? ((-(((/* implicit */int) (unsigned short)41714)))) : (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_22 [i_4] [i_4] [i_6] [i_7] [i_8 - 1])))))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned long long int) ((((var_11) ? (34358689792LL) : (((/* implicit */long long int) arr_16 [i_4] [i_4])))) * (((arr_10 [i_6]) / (var_17)))));
                }
            } 
        } 
        var_33 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 536870911)) ? (((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_10))))));
        var_34 *= ((unsigned short) ((var_18) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_18 [i_4] [i_4]))));
        var_35 ^= ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) var_10)))));
    }
    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        var_36 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) + (2ULL)));
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                var_37 = ((/* implicit */_Bool) (-(16726604230610689484ULL)));
                var_38 -= (-(((((/* implicit */_Bool) (short)4944)) ? (max((var_13), (((/* implicit */unsigned long long int) (unsigned short)65535)))) : (1720139843098862148ULL))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_12] [i_10] [i_10] [(_Bool)0])) ? (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL))))) / (-1143521534610486098LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1143521534610486081LL)))))))))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        {
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_28 [i_13] [i_12] [i_10] [i_9]) / (arr_28 [i_14] [i_13] [i_12] [i_9])))) ? (((long long int) arr_28 [i_14] [i_13] [i_9] [i_9])) : (((((/* implicit */_Bool) arr_28 [i_14] [i_13] [i_12] [i_9])) ? (arr_8 [i_14] [i_10] [i_9]) : (arr_8 [i_14] [i_13] [i_12])))));
                            var_41 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((max((((/* implicit */unsigned short) (signed char)2)), (arr_5 [i_12] [i_9]))), (((/* implicit */unsigned short) arr_36 [i_14] [i_12] [i_13] [i_12] [i_12] [i_9])))))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_9] [i_10])) / (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) (unsigned char)181)) ? (arr_7 [i_12] [(unsigned short)4] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)4))))))));
                var_43 ^= (-(((((/* implicit */_Bool) ((signed char) (signed char)-108))) ? (((/* implicit */unsigned long long int) ((int) 357199236))) : (arr_35 [i_12] [i_10] [i_9] [i_9]))));
            }
            var_44 = ((/* implicit */signed char) 357199236);
        }
        var_45 *= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 16776704LL)) : (var_12))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_15 = 3; i_15 < 18; i_15 += 3) /* same iter space */
        {
            var_46 = ((/* implicit */_Bool) ((var_11) ? (arr_15 [i_15 - 2] [i_15 + 1] [i_15 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9] [i_15] [17])))));
            var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_15] [i_15] [i_9])) ? (arr_10 [i_15 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
            var_48 = ((/* implicit */int) (-(17509477359695427911ULL)));
            var_49 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (arr_19 [9LL] [(signed char)16] [i_15] [24U]) : (((/* implicit */unsigned long long int) 16776704LL)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98)))));
        }
        /* vectorizable */
        for (long long int i_16 = 3; i_16 < 18; i_16 += 3) /* same iter space */
        {
            var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)2)) ? ((~(4398042316800ULL))) : (((/* implicit */unsigned long long int) (~(arr_37 [i_9] [i_9] [(signed char)9] [i_9]))))));
            var_51 = arr_39 [i_16] [i_16 + 2] [i_16 + 2] [i_16 - 2] [i_9];
            var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) (~(-2147483626))))));
        }
    }
    var_53 = ((/* implicit */signed char) ((var_18) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) var_2))));
    var_54 = ((/* implicit */int) var_3);
    var_55 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) -2147483626))));
}
