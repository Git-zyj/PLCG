/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163091
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))) : (var_13)));
            arr_5 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) 15211911640387651600ULL)) ? (531228497U) : (3144868835U))) ^ ((-(var_11)))));
        }
        for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned int) var_4);
            arr_9 [i_0] [i_2] = arr_1 [i_2];
        }
        for (int i_3 = 3; i_3 < 22; i_3 += 3) 
        {
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3 - 1])) ? (-643033117) : (((/* implicit */int) arr_0 [i_3 + 2]))));
            /* LoopSeq 2 */
            for (int i_4 = 3; i_4 < 24; i_4 += 1) 
            {
                arr_16 [i_4 - 1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3 - 1] [i_3 - 3] [i_4 + 1]))) & (var_11)));
                arr_17 [i_0] [i_3 + 3] [i_3 + 3] [i_3 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) var_10)) : (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned int) -1195236373)) : (arr_4 [i_4 - 3])))));
            }
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)14919))));
                arr_21 [i_0] [i_0] [i_5] = ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) var_12)) : (arr_3 [i_0] [i_3 + 1]));
                arr_22 [20U] [i_0] [4U] [(short)9] = ((/* implicit */unsigned int) ((unsigned long long int) arr_18 [i_3 + 2] [i_3 + 3] [i_0]));
                var_18 = ((/* implicit */int) ((short) 6543392910801602343ULL));
                arr_23 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) var_10);
            }
            var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */long long int) 3229186695U))))) ? ((+(var_9))) : (((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0])))))));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_3 [i_0] [(short)15])) - (arr_12 [i_3 - 1] [i_3 - 2] [i_0] [i_0])));
        }
        for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            arr_27 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))));
            var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -1272540855)) || (((/* implicit */_Bool) arr_11 [i_0])))))) < (arr_4 [i_0]));
        }
        arr_28 [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) arr_20 [i_0] [i_0] [i_0]));
        arr_29 [i_0] = ((/* implicit */unsigned short) (unsigned char)255);
        var_22 += ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (signed char i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_8 = 2; i_8 < 24; i_8 += 3) 
        {
            arr_35 [i_7] [i_7] [i_8] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) (short)24385)))) : (((/* implicit */int) arr_33 [i_8])))), (((/* implicit */int) ((signed char) 1830413354)))));
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */_Bool) -1830413355)) ? (((/* implicit */long long int) arr_26 [16U] [i_8 - 1])) : (var_8))) <= (max((((/* implicit */long long int) arr_7 [(signed char)23])), (arr_24 [14LL])))))))));
            arr_36 [i_8] [i_7] = ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned long long int) min((arr_25 [i_7] [i_8 - 1]), (arr_25 [i_7] [i_7]))))));
            arr_37 [i_8 - 1] [i_8] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_11) >= (3763738827U))))) : (max((((/* implicit */long long int) arr_0 [i_7])), (1449965634141593031LL)))))) ? (max((531228497U), (var_11))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_12)))))))));
            arr_38 [i_8] [5] = ((/* implicit */_Bool) 1830413370);
        }
        /* vectorizable */
        for (unsigned int i_9 = 1; i_9 < 21; i_9 += 1) 
        {
            arr_41 [i_9] [i_9 + 3] = ((/* implicit */unsigned long long int) var_10);
            /* LoopSeq 3 */
            for (unsigned short i_10 = 1; i_10 < 24; i_10 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */long long int) ((arr_44 [i_9 - 1] [i_9 - 1] [i_9 + 3] [i_9 - 1]) << (((((/* implicit */int) arr_15 [i_10 - 1] [i_10 - 1] [i_10 - 1])) - (15355)))));
                arr_45 [i_7] [i_9] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_9] [i_9])) ? ((+(var_6))) : (((/* implicit */long long int) arr_3 [i_9 - 1] [i_9 - 1]))));
            }
            for (unsigned short i_11 = 1; i_11 < 24; i_11 += 3) /* same iter space */
            {
                arr_50 [(unsigned short)12] [(unsigned short)12] &= var_1;
                arr_51 [i_7] [i_9] [i_9] [i_7] = ((/* implicit */_Bool) ((var_12) >> (((arr_44 [i_7] [i_9] [i_9 - 1] [i_11 - 1]) - (479300306836344917ULL)))));
            }
            for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_13 = 2; i_13 < 21; i_13 += 2) 
                {
                    arr_57 [i_9] = ((/* implicit */signed char) var_6);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 1; i_14 < 24; i_14 += 1) 
                    {
                        var_25 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_39 [i_9 + 2] [i_9] [i_13 + 2]))));
                        var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_14 [i_14 - 1]))));
                        arr_61 [i_14] [i_13] [i_9] [i_9] [i_7] = ((/* implicit */int) var_7);
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_14 - 1] [i_13 + 1] [i_9 - 1])) ? (((2321737805316605304LL) ^ (1449965634141593031LL))) : (((/* implicit */long long int) var_10))));
                    }
                    var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -185535040)) ? (((/* implicit */int) arr_49 [i_7] [i_13])) : (arr_60 [i_7] [2U] [i_13] [i_7] [i_12] [i_7])))) && (((/* implicit */_Bool) var_4))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_15 = 3; i_15 < 23; i_15 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) var_9))));
                    arr_64 [i_7] [6LL] [i_9] [i_15 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) < (((/* implicit */unsigned long long int) -1830413367))))))));
                }
                for (unsigned long long int i_16 = 3; i_16 < 23; i_16 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 2; i_17 < 24; i_17 += 4) 
                    {
                        var_30 = ((arr_6 [i_9 + 4] [i_17]) & (arr_6 [i_9 + 1] [i_17]));
                        arr_70 [i_9] [i_12] [i_12] [i_12] [(unsigned short)15] [i_9] [i_9] = ((/* implicit */long long int) (+(arr_63 [i_9] [i_9 + 3] [i_9 + 3] [i_16 + 1])));
                        var_31 += ((/* implicit */unsigned long long int) arr_54 [i_9 + 1] [i_9 - 1] [(short)19] [(short)19] [i_9 + 2]);
                        arr_71 [i_7] [i_9] = ((/* implicit */unsigned char) ((unsigned int) 3763738799U));
                    }
                    arr_72 [i_9] [i_9] [i_12] [i_12] [6U] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_16 + 2] [i_16 + 1] [i_16 - 1])) ? (((531228517U) >> (((var_1) - (1237391116829395947ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) == (var_5)))))));
                    var_32 = ((/* implicit */unsigned short) arr_20 [i_7] [i_9 + 2] [i_16 + 1]);
                }
                /* LoopSeq 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_19 = 1; i_19 < 21; i_19 += 1) 
                    {
                        arr_78 [i_9] [i_18] [i_9] [i_9] [i_9] = ((/* implicit */int) (~(var_7)));
                        arr_79 [i_9] [i_9] [i_9 + 1] [i_9] [i_12] = ((/* implicit */unsigned char) var_4);
                        arr_80 [i_9] [(unsigned char)22] [(unsigned char)22] [i_18] = ((/* implicit */unsigned short) arr_20 [i_9 + 1] [i_19 + 3] [i_19]);
                        arr_81 [i_7] [i_7] [i_9] = ((/* implicit */signed char) var_10);
                    }
                    arr_82 [i_9] [i_12] [i_9 - 1] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (arr_10 [i_9 + 1] [i_9 + 2]) : (((/* implicit */unsigned long long int) arr_52 [i_9] [i_9]))));
                    arr_83 [i_7] [i_9] [i_9 + 4] [i_9] [i_18] = ((/* implicit */unsigned int) (((+(var_13))) % (((/* implicit */unsigned long long int) var_7))));
                }
                for (int i_20 = 2; i_20 < 23; i_20 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_88 [i_9] [i_9] [i_12] [i_12] [i_21] = ((/* implicit */unsigned long long int) arr_63 [i_9] [i_21] [i_21] [18]);
                        var_33 *= 531228497U;
                    }
                    var_34 += ((((/* implicit */int) (unsigned short)20851)) < (((/* implicit */int) (unsigned char)255)));
                }
            }
        }
        /* LoopSeq 1 */
        for (unsigned int i_22 = 0; i_22 < 25; i_22 += 3) 
        {
            arr_93 [i_7] [19ULL] [i_7] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) ((-1830413337) < (var_10)))), (var_5)))));
            var_35 *= ((/* implicit */short) var_6);
            var_36 *= ((/* implicit */unsigned int) var_7);
        }
    }
    var_37 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) var_10)) ^ (min((var_13), (((/* implicit */unsigned long long int) -6567400816264674029LL)))))), (((/* implicit */unsigned long long int) var_6))));
}
