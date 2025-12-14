/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179693
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    var_10 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-20709)) : ((+(((/* implicit */int) (short)-20709))))));
                    var_11 = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) var_0)) - (var_5))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_12 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((15773972898195923627ULL) > (((/* implicit */unsigned long long int) 6721405063452975973LL)))))));
                                arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_8 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_0 + 2] [i_1 + 1]) >= (((/* implicit */long long int) var_6))));
                                var_13 = ((unsigned char) arr_10 [i_1 + 2] [i_1 + 2] [i_2 + 1]);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */int) (short)20723)) * (((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1 - 1] [i_1 - 1]))))))));
                    var_15 = ((/* implicit */long long int) arr_7 [i_0] [i_1]);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) ((long long int) (signed char)127));
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned int) ((short) (~(((/* implicit */int) arr_14 [i_6])))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (unsigned int i_8 = 3; i_8 < 22; i_8 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((signed char) (~(((/* implicit */int) ((9007199254740990ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23407)))))))));
                            var_19 += ((/* implicit */unsigned int) max(((-(((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_22 [i_5])))))), (((/* implicit */int) arr_17 [i_5]))));
                            var_20 = ((/* implicit */signed char) 1865994975012033676LL);
                            /* LoopSeq 2 */
                            for (signed char i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                            {
                                arr_28 [i_5] [i_6] [(unsigned short)10] [i_6] [8U] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */long long int) arr_24 [i_9] [(short)16] [i_6] [i_5])), (var_1))))), (((((unsigned long long int) var_7)) >> (((/* implicit */int) (unsigned char)0))))));
                                arr_29 [i_5] [i_6] = ((/* implicit */unsigned short) arr_21 [i_8] [i_6]);
                                arr_30 [i_5] [i_6] [i_5] [i_8] = ((/* implicit */unsigned short) ((long long int) (short)-4719));
                            }
                            for (signed char i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((long long int) ((9104498414529293424LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))))));
                                arr_34 [i_5] = ((/* implicit */short) (((~(((((/* implicit */_Bool) 9104498414529293423LL)) ? (((/* implicit */int) arr_18 [8ULL])) : (((/* implicit */int) arr_24 [i_5] [0LL] [i_5] [i_5])))))) <= (((/* implicit */int) var_4))));
                                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9104498414529293411LL))));
                            }
                        }
                    } 
                } 
                arr_35 [(_Bool)1] [i_5] [i_5] = ((unsigned char) ((((((/* implicit */int) (unsigned char)94)) >> (((var_6) - (904654210))))) << (((8104697793114275009LL) - (8104697793114274985LL)))));
                arr_36 [i_5] [(_Bool)1] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)102))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_1);
    var_24 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_6)) : ((+(min((((/* implicit */long long int) var_9)), (var_7))))));
    /* LoopSeq 3 */
    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)1918))));
        arr_39 [i_11] &= max((((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_38 [i_11] [i_11])))))), ((~(-9104498414529293407LL))));
        var_26 = var_1;
        var_27 = ((/* implicit */signed char) ((unsigned long long int) 1747505174U));
    }
    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */long long int) (((((~(((/* implicit */int) (unsigned short)65518)))) + (2147483647))) << (((((var_0) + (3581467748428036343LL))) - (17LL)))));
        /* LoopSeq 2 */
        for (short i_13 = 2; i_13 < 10; i_13 += 4) 
        {
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) var_4)) != (((/* implicit */int) (!(((/* implicit */_Bool) (short)-20689)))))))))));
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                for (signed char i_15 = 1; i_15 < 12; i_15 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) (unsigned short)13)))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 4) 
                        {
                            arr_51 [i_12] [i_12] [(short)4] [i_15 + 1] [i_16] [8ULL] [i_12] &= ((/* implicit */unsigned long long int) arr_10 [9ULL] [i_14] [i_12]);
                            var_31 += ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_21 [(unsigned char)6] [i_16])) ? (((/* implicit */int) arr_0 [i_12])) : (((/* implicit */int) (short)11897)))) << (((((((/* implicit */int) (short)120)) | (((/* implicit */int) (short)-1)))) + (2))))) << (((((/* implicit */int) arr_12 [i_16] [i_16] [i_15] [(unsigned short)1] [(unsigned short)9] [i_12] [i_12])) + (97)))));
                        }
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            arr_54 [i_12] [i_12] [i_12] [i_13] [i_12] [i_14] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5932))) >= (((unsigned long long int) (unsigned char)126))));
                            var_32 = ((/* implicit */signed char) ((((16816263251822324510ULL) < (((/* implicit */unsigned long long int) var_0)))) || (((/* implicit */_Bool) arr_42 [i_12] [i_13 - 1] [i_15 + 1]))));
                        }
                        for (long long int i_18 = 0; i_18 < 13; i_18 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */signed char) ((short) 31215413U));
                            var_34 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                            arr_58 [i_15] [(short)11] [i_13] [7U] [i_15 - 1] [(unsigned short)0] = ((/* implicit */unsigned short) (-((+((+(arr_23 [22ULL] [22ULL])))))));
                            var_35 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_7)) ? ((+(10192443253002181625ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))))))), (((/* implicit */unsigned long long int) (unsigned short)35023))));
                        }
                        /* vectorizable */
                        for (long long int i_19 = 0; i_19 < 13; i_19 += 4) /* same iter space */
                        {
                            var_36 = ((/* implicit */signed char) 6LL);
                            arr_61 [i_15] [i_13 + 1] [i_13] = ((/* implicit */int) var_1);
                            arr_62 [i_12] [i_12] [i_14] [i_15] [i_15] [i_12] [i_13 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)5932))));
                            arr_63 [i_12] [i_12] [i_15] = ((/* implicit */long long int) (+(arr_5 [i_15 - 1] [i_13 + 2])));
                        }
                    }
                } 
            } 
            arr_64 [i_13 + 3] [i_13] [i_12] = ((/* implicit */signed char) (short)7965);
        }
        for (signed char i_20 = 0; i_20 < 13; i_20 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (long long int i_22 = 1; i_22 < 11; i_22 += 1) 
                {
                    {
                        var_37 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 4381491258565411441LL))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-75)), ((unsigned char)97)))) : (((/* implicit */int) var_4))));
                        arr_76 [i_12] [i_12] [i_21] [10] [i_22] [i_22] = ((/* implicit */unsigned char) var_0);
                    }
                } 
            } 
            var_38 = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) (unsigned short)8913)))));
        }
    }
    /* vectorizable */
    for (unsigned short i_23 = 0; i_23 < 13; i_23 += 2) /* same iter space */
    {
        var_39 += ((/* implicit */signed char) var_6);
        arr_81 [i_23] = ((/* implicit */short) var_2);
    }
}
