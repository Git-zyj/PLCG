/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127825
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
    var_17 = ((/* implicit */signed char) max((max((var_13), (((/* implicit */unsigned long long int) (~(-4138622550805543201LL)))))), (var_13)));
    var_18 = ((/* implicit */long long int) max((var_13), (((/* implicit */unsigned long long int) ((((var_0) >> (((3020510425U) - (3020510401U))))) % (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
    var_19 = ((/* implicit */int) max(((!(((/* implicit */_Bool) var_2)))), (var_8)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                var_20 = ((/* implicit */unsigned int) ((arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 3]) ? (((((/* implicit */_Bool) -4138622550805543201LL)) ? (4138622550805543200LL) : (4138622550805543201LL))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                arr_8 [i_0 - 1] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned int) var_11);
                var_21 = 4138622550805543220LL;
            }
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_22 *= ((/* implicit */short) ((((/* implicit */int) var_14)) <= (((/* implicit */int) var_8))));
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    var_23 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_3)) ? (arr_9 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))));
                    var_24 = ((arr_12 [i_4] [(short)5] [(short)5] [i_1] [(short)5]) >= (arr_12 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]));
                }
            }
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        {
                            arr_26 [i_0] [i_1] [i_1] = ((/* implicit */short) (!(var_14)));
                            var_25 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (long long int i_9 = 3; i_9 < 12; i_9 += 2) 
                {
                    {
                        var_26 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49662))) * (0ULL))) * (((((/* implicit */_Bool) var_15)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) var_11))))));
                        /* LoopSeq 2 */
                        for (long long int i_10 = 2; i_10 < 10; i_10 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6021562119832154537LL)) ? (((/* implicit */unsigned long long int) arr_25 [i_0] [i_1] [i_8] [i_8] [(unsigned short)12])) : (arr_35 [7] [i_1] [(signed char)1] [i_8] [i_9 - 1] [7])))) ? (((/* implicit */int) arr_6 [i_1] [i_8] [i_9 - 3])) : (((/* implicit */int) (unsigned char)21))));
                            var_28 = ((((/* implicit */_Bool) (signed char)98)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) 4138622550805543200LL)));
                            arr_36 [i_0] [i_0] = ((/* implicit */short) (unsigned char)102);
                            var_29 = ((-8689855587257356131LL) / (((/* implicit */long long int) 15U)));
                            arr_37 [i_10 + 2] [i_0] [i_8] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_15);
                        }
                        for (long long int i_11 = 2; i_11 < 10; i_11 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33390))) / (var_16))) >> (((/* implicit */int) var_7))));
                            var_31 = ((/* implicit */short) ((((/* implicit */long long int) arr_9 [i_11 - 1] [i_9 - 1])) < (-4138622550805543201LL)));
                            var_32 -= ((/* implicit */signed char) (unsigned char)102);
                            var_33 = (~(((/* implicit */int) arr_4 [i_0])));
                            var_34 = ((/* implicit */unsigned int) (~(8093765864624600466LL)));
                        }
                        arr_42 [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) 1946799726);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_0 - 1] [i_1] [i_8] [(unsigned short)8]))));
                            arr_46 [i_0] [i_12 - 1] [i_12] [i_12] [i_12 + 3] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
        {
            var_36 = ((/* implicit */long long int) (~(var_13)));
            var_37 = ((/* implicit */_Bool) var_7);
            var_38 = ((/* implicit */_Bool) ((arr_27 [i_0 + 2] [i_13] [i_13]) / (((/* implicit */unsigned long long int) -7112780096962018909LL))));
            /* LoopNest 3 */
            for (unsigned int i_14 = 2; i_14 < 11; i_14 += 4) 
            {
                for (unsigned long long int i_15 = 4; i_15 < 10; i_15 += 3) 
                {
                    for (signed char i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_0 + 1] [i_0] [i_15 - 2] [i_15] [11ULL]))));
                            var_40 = ((/* implicit */int) -4138622550805543202LL);
                            var_41 = ((/* implicit */unsigned long long int) ((arr_38 [i_0] [0ULL] [i_0] [i_15] [i_16]) < (((/* implicit */unsigned long long int) ((var_8) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
                            arr_57 [i_0] [i_13] [i_13] [i_14] [4LL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)102))));
                            var_42 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17100))) : (8203435281341305322ULL)));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_17 = 2; i_17 < 11; i_17 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_18 = 0; i_18 < 13; i_18 += 4) 
            {
                var_43 = ((/* implicit */long long int) ((unsigned long long int) (-(var_5))));
                var_44 = var_13;
            }
            var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((unsigned long long int) 3177138404U)))));
        }
        for (unsigned short i_19 = 1; i_19 < 9; i_19 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
            {
                var_46 = ((/* implicit */long long int) min((var_46), (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_47 [(_Bool)1])))));
                var_47 ^= ((/* implicit */short) ((arr_7 [i_20 + 1] [i_20 + 1] [i_20 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
            }
            var_48 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_0 - 1] [i_19 + 2] [i_19] [i_19]))));
            var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_34 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [(unsigned char)5] [i_19 + 1] [i_19 - 1])) : (var_11)));
        }
        var_50 = ((/* implicit */short) var_16);
    }
    var_51 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_15))))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_11)) : (var_10))))) ? (((/* implicit */unsigned long long int) var_11)) : (12799273908662722291ULL)));
}
