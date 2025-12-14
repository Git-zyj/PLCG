/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148529
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
    for (long long int i_0 = 3; i_0 < 24; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 4; i_2 < 23; i_2 += 4) /* same iter space */
            {
                var_14 ^= ((/* implicit */unsigned char) (~(arr_6 [i_2] [i_1] [i_0 - 1])));
                var_15 |= ((/* implicit */short) ((unsigned long long int) var_11));
            }
            /* vectorizable */
            for (long long int i_3 = 4; i_3 < 23; i_3 += 4) /* same iter space */
            {
                var_16 += ((/* implicit */long long int) (-((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_3 - 4] [(unsigned short)23]))))));
                arr_10 [i_0] [i_0] [i_3 - 4] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0 - 3] [i_1] [i_3 - 2] [i_1]))));
            }
            for (long long int i_4 = 4; i_4 < 23; i_4 += 4) /* same iter space */
            {
                var_17 = ((/* implicit */int) min((var_17), ((+(1577023562)))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 4; i_5 < 24; i_5 += 3) 
                {
                    for (int i_6 = 1; i_6 < 24; i_6 += 2) 
                    {
                        {
                            arr_18 [i_6] [i_5] [i_4] [i_5] [i_0 - 3] = ((/* implicit */unsigned int) (-((+(arr_7 [22ULL] [i_5 + 1] [i_5 - 3] [i_5])))));
                            arr_19 [i_5] [i_1] [i_4] [(unsigned char)12] [i_6] = (~((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_4] [i_5 - 3])))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_18 = ((/* implicit */int) max((((((/* implicit */_Bool) (~(var_3)))) ? ((~(var_5))) : (((/* implicit */long long int) (~(1160366054U)))))), (((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0 - 3] [i_0 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_7] [i_0 - 2] [12] [i_0 - 1] [i_0 - 1]))) : (arr_2 [i_1] [i_1] [i_0 - 2])))));
                        var_19 = ((/* implicit */unsigned char) var_13);
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned int) var_3);
            arr_25 [i_0] = ((unsigned char) var_9);
        }
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                for (unsigned int i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        {
                            arr_34 [i_12] [i_9] [i_9] [i_11] [(_Bool)1] [i_11] [i_10] &= ((/* implicit */unsigned int) (+(min(((-(arr_2 [i_12] [i_0 + 1] [i_0 + 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [(_Bool)1] [i_9] [i_11])))))))));
                            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)184))));
                            var_22 += ((/* implicit */long long int) min(((-(((/* implicit */int) arr_1 [i_9])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)15524)))))));
                        }
                    } 
                } 
            } 
            var_24 = (-(((/* implicit */int) (unsigned short)65519)));
        }
        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 2) /* same iter space */
        {
            arr_39 [i_13] [i_0 - 3] = ((/* implicit */unsigned int) var_11);
            var_25 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((unsigned short) arr_31 [i_0] [(unsigned char)18] [i_0] [i_0] [i_13]))) ? (arr_8 [(_Bool)1] [i_13] [i_13]) : ((-(((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_13]))))))));
        }
        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 2) /* same iter space */
        {
            arr_42 [2U] [i_14] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_29 [i_0] [i_14] [i_14])) ? (var_3) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
            var_26 = ((/* implicit */unsigned char) arr_30 [i_0 - 2] [i_0 - 3] [i_0] [i_0 - 3] [i_0] [i_0]);
        }
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (+((+(var_12))))))));
        var_28 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0 - 3] [i_0])))))));
        arr_43 [i_0 + 1] = (+(((/* implicit */int) arr_35 [i_0 - 2] [i_0 - 2])));
    }
    for (long long int i_15 = 3; i_15 < 24; i_15 += 4) /* same iter space */
    {
        arr_48 [i_15] = ((/* implicit */unsigned long long int) (~((-(((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (2711880797192600997LL)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_16 = 1; i_16 < 24; i_16 += 4) 
        {
            arr_51 [i_15] [(short)2] [i_16 - 1] = ((/* implicit */int) (-((+(arr_23 [(_Bool)1] [i_16])))));
            /* LoopNest 2 */
            for (unsigned short i_17 = 2; i_17 < 23; i_17 += 3) 
            {
                for (long long int i_18 = 0; i_18 < 25; i_18 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) (-(arr_32 [i_15 - 2] [i_16 - 1] [i_17] [i_18] [i_16] [i_17])));
                        arr_56 [i_15 + 1] [i_15 - 3] [(unsigned short)14] [i_15] [i_15] = ((unsigned char) (!(((/* implicit */_Bool) arr_5 [(unsigned char)12] [i_16 - 1] [i_16 - 1] [i_16 - 1]))));
                        var_30 = ((((/* implicit */_Bool) arr_29 [i_17 - 2] [i_16 - 1] [i_15 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_15] [i_16 - 1] [i_17])))))) : ((~(var_3))));
                    }
                } 
            } 
            arr_57 [i_16] [i_15] [(unsigned short)19] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned short)65532))))));
        }
        var_31 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_47 [i_15 - 1]))))));
        arr_58 [22U] [i_15] = ((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35184))) : ((+((+(-383385727619035703LL))))));
    }
    for (short i_19 = 1; i_19 < 17; i_19 += 2) 
    {
        var_32 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 386019412)), (2060529682U)));
        var_33 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_61 [i_19 + 1] [i_19 - 1]))))));
    }
    var_34 -= ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_20 = 1; i_20 < 23; i_20 += 2) 
    {
        var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_20 - 1] [i_20] [i_20]))) : (arr_53 [i_20 + 1] [i_20]))))));
        var_36 = ((/* implicit */short) (+((-(var_12)))));
        var_37 -= ((/* implicit */unsigned int) arr_6 [i_20] [(unsigned short)2] [i_20]);
        var_38 += ((/* implicit */short) (-(((long long int) arr_41 [i_20] [0LL]))));
    }
    for (long long int i_21 = 4; i_21 < 23; i_21 += 2) 
    {
        var_39 = ((/* implicit */long long int) ((unsigned char) (+((-(((/* implicit */int) arr_41 [i_21 - 4] [i_21 + 1])))))));
        /* LoopSeq 1 */
        for (long long int i_22 = 0; i_22 < 24; i_22 += 3) 
        {
            var_40 = ((/* implicit */_Bool) (~((~(((unsigned int) var_9))))));
            /* LoopSeq 1 */
            for (long long int i_23 = 2; i_23 < 23; i_23 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_24 = 1; i_24 < 23; i_24 += 4) 
                {
                    arr_75 [i_22] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    var_41 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_1 [i_21 + 1])), ((-(((/* implicit */int) ((signed char) arr_55 [i_23] [i_22] [i_21])))))));
                    /* LoopSeq 1 */
                    for (signed char i_25 = 1; i_25 < 23; i_25 += 2) 
                    {
                        arr_78 [10LL] [i_22] [i_22] [i_24] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(max((arr_16 [i_25] [i_24 - 1] [i_23] [i_22] [i_21]), (((/* implicit */long long int) arr_66 [i_22] [i_24 + 1])))))))));
                        arr_79 [i_21 - 4] [i_23 - 1] [i_23] [i_21 - 3] [i_25] [i_22] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_21 - 3] [(short)21] [i_23])) ? (((/* implicit */int) arr_68 [i_25] [i_24])) : (((/* implicit */int) var_4))));
                    }
                    arr_80 [i_21] [i_22] [i_24] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)43748)), (1295097357U)));
                    var_42 += ((var_8) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_24 + 1])) ? (((/* implicit */int) arr_44 [(short)10])) : (((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) arr_66 [18ULL] [i_22])))) : (((/* implicit */int) (!(var_8))))))) : ((~(max((var_9), (((/* implicit */unsigned int) arr_35 [i_21] [1U])))))));
                }
                /* vectorizable */
                for (signed char i_26 = 0; i_26 < 24; i_26 += 4) 
                {
                    arr_85 [(_Bool)1] [i_21] [i_22] [i_22] [i_23] [11U] = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
                    arr_86 [i_26] = ((/* implicit */int) var_3);
                }
                arr_87 [i_21] [i_21] [i_23 - 1] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_12 [i_23 - 1] [i_22] [9ULL])))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_67 [i_21 - 2] [i_21 - 2])))))))));
                /* LoopNest 2 */
                for (unsigned short i_27 = 0; i_27 < 24; i_27 += 4) 
                {
                    for (short i_28 = 0; i_28 < 24; i_28 += 3) 
                    {
                        {
                            arr_94 [i_21 - 1] [i_28] [i_23 - 1] [7U] [i_27] [(_Bool)1] = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) arr_90 [i_21 - 1] [i_21 + 1] [0LL] [7U] [i_21 + 1] [i_21 + 1] [i_21])))));
                            var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) (+(arr_37 [i_23 + 1] [i_21 - 1] [i_21 - 1]))))));
                            var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) arr_30 [i_21] [i_22] [(unsigned char)9] [(unsigned char)9] [i_21] [i_28])), (var_9)))))) ? (((/* implicit */int) ((unsigned char) (+(arr_53 [i_27] [i_28]))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_21] [i_22] [i_23] [i_27])))))))));
                            var_45 = ((/* implicit */signed char) ((unsigned char) (unsigned short)65534));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 2 */
        for (long long int i_29 = 0; i_29 < 24; i_29 += 4) 
        {
            var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_15 [i_21] [i_21] [i_29]))))))))))));
            var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) arr_6 [i_21] [i_21 - 4] [i_21 - 4]))));
            var_48 = ((/* implicit */long long int) arr_65 [i_29]);
        }
        for (unsigned char i_30 = 0; i_30 < 24; i_30 += 4) 
        {
            var_49 *= ((/* implicit */signed char) (+((~((~(arr_81 [i_21] [i_21] [i_30] [i_21 - 3])))))));
            var_50 = ((/* implicit */unsigned long long int) arr_33 [23LL] [i_21] [i_21]);
            var_51 = ((/* implicit */signed char) ((long long int) var_0));
        }
        var_52 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) var_7)))))))));
    }
    var_53 = ((/* implicit */int) (-((~((~(var_9)))))));
}
