/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11834
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_1 [i_0])))) << (((((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) - (4898148414333323472LL)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_13 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */int) arr_6 [(unsigned char)3] [i_2] [i_1] [i_0]))))) - (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_2]))) : (-1309888052583234170LL)))));
                    arr_7 [i_2] [i_2] [i_2] &= ((/* implicit */_Bool) ((signed char) ((signed char) var_6)));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
                }
            } 
        } 
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((var_3), (((/* implicit */unsigned long long int) -1929383193324203575LL)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0])))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_0 [i_0])))) : (((arr_5 [(unsigned char)12] [i_0] [i_0]) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_4 [i_0] [(signed char)8]))))));
        arr_9 [i_0] = arr_1 [i_0];
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_15 = ((/* implicit */unsigned short) (signed char)-100);
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16777215LL)) ? (1929383193324203575LL) : (-1929383193324203568LL)));
            }
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                arr_20 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2897307810597354302LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_4] [i_6]))) : (-1929383193324203575LL)))) ? ((~(arr_14 [i_3] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0))))));
                /* LoopSeq 2 */
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    arr_23 [16ULL] [i_4] [i_3] [9LL] [19] [i_7] = ((/* implicit */unsigned char) ((unsigned long long int) arr_22 [i_3 + 1] [i_3] [9ULL]));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2897307810597354302LL)) ? (((/* implicit */int) (unsigned short)10782)) : (((/* implicit */int) (signed char)52))))) ? (arr_15 [i_3] [i_4] [i_6 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3 - 1] [i_3] [i_6 - 1])))));
                }
                for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    var_18 += ((/* implicit */signed char) arr_14 [(unsigned short)4] [i_4]);
                    arr_26 [i_3] [i_6 - 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_3] [i_8])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 + 1] [i_3])))));
                }
            }
            var_19 = ((/* implicit */long long int) ((unsigned char) arr_21 [i_3 - 1] [i_4] [i_4] [i_4]));
            arr_27 [i_3] = ((/* implicit */unsigned long long int) var_10);
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    for (long long int i_11 = 2; i_11 < 20; i_11 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((arr_15 [i_11 - 1] [i_4] [i_3 - 1]) < (arr_34 [i_3 - 1] [i_9] [i_10] [i_9])));
                            arr_36 [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-31300)) : (((/* implicit */int) arr_33 [i_3] [i_9] [i_3] [i_3]))))));
                            arr_37 [i_3 + 1] [i_3 + 1] [i_4] [i_4] [i_9] [i_3] [i_11] = arr_24 [i_3] [(unsigned char)10] [i_9] [i_9] [i_11 + 2] [i_11 - 1];
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((unsigned long long int) 16LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [9] [i_3 + 1]))) < (-2897307810597354303LL)))))));
            }
            for (int i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
                {
                    var_22 += ((/* implicit */int) arr_10 [i_4] [(signed char)6]);
                    arr_43 [i_3] [i_4] [i_12] [i_12] [i_13] = (unsigned short)10782;
                }
                for (unsigned short i_14 = 0; i_14 < 22; i_14 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */short) arr_15 [(short)0] [i_4] [i_4]);
                    arr_46 [i_3] [i_12] [i_4] [(signed char)6] [(_Bool)1] [i_3] = ((/* implicit */signed char) ((unsigned short) ((signed char) (unsigned short)65535)));
                    var_24 = ((/* implicit */long long int) ((arr_35 [i_3] [i_3] [i_3 - 1] [i_14]) * (((((/* implicit */_Bool) arr_30 [i_3] [i_3] [i_12] [i_3])) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (unsigned short)54754))))));
                    var_25 &= ((/* implicit */int) ((arr_17 [i_12]) >= (((/* implicit */unsigned long long int) 16777215LL))));
                }
                for (signed char i_15 = 4; i_15 < 20; i_15 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_48 [i_3] [i_4] [i_3] [i_15]))));
                    arr_49 [i_3] [i_4] [i_12] [i_12] [i_3] [i_15] = ((/* implicit */_Bool) ((arr_44 [i_3 + 1] [i_3] [i_12] [i_12]) - (arr_25 [5ULL] [1LL] [i_15 - 4] [i_3 + 1])));
                }
                for (signed char i_16 = 4; i_16 < 20; i_16 += 2) /* same iter space */
                {
                    var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_4] [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_29 [i_16] [i_3 - 1] [i_16])) : (arr_53 [i_12] [i_3 - 1] [i_12])));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) -1929383193324203575LL))) + (((int) -2897307810597354303LL))));
                    /* LoopSeq 4 */
                    for (int i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        arr_57 [i_3] [i_4] [i_3] [13LL] = ((/* implicit */unsigned char) var_8);
                        arr_58 [(signed char)12] [i_4] [i_3] [i_3] [i_17] = ((/* implicit */long long int) ((((arr_15 [(signed char)21] [i_16 - 1] [i_16 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54754))))) & (((((/* implicit */_Bool) arr_38 [i_3] [i_4] [i_3])) ? (arr_34 [i_17] [i_4] [i_12] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15)))))));
                        var_29 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 12630443106376899681ULL)) ? (arr_53 [4] [i_12] [i_3]) : (((/* implicit */int) arr_48 [i_16] [i_4] [i_3] [i_16]))))));
                        var_30 = ((/* implicit */int) ((_Bool) var_0));
                    }
                    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        arr_63 [i_3] [i_3] [i_18] [(short)16] [i_18] [i_18] [i_18] = ((/* implicit */_Bool) ((arr_47 [i_3] [i_3]) ? (((/* implicit */int) ((unsigned short) arr_45 [i_3] [i_3] [i_18]))) : ((-(((/* implicit */int) (signed char)117))))));
                        var_31 += ((/* implicit */unsigned long long int) (_Bool)1);
                        var_32 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)10782))));
                        var_33 = (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_3] [i_12] [i_3])))) & ((((_Bool)1) ? (arr_60 [i_3] [(unsigned short)17] [i_4] [4] [4] [i_3] [i_3]) : (((/* implicit */int) arr_41 [i_3] [i_4] [i_18] [i_16 - 1] [i_3] [i_4])))));
                    }
                    for (int i_19 = 0; i_19 < 22; i_19 += 1) /* same iter space */
                    {
                        var_34 &= ((((/* implicit */int) arr_22 [i_3] [i_16] [i_4])) >> (((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                        var_35 = ((/* implicit */signed char) (~(arr_42 [i_16] [i_16 + 1] [i_12] [i_3 - 1])));
                        var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-118)) + (2147483647))) << (((((/* implicit */int) arr_18 [i_19] [0ULL] [i_12] [i_3 - 1])) - (1))))))));
                    }
                    for (int i_20 = 0; i_20 < 22; i_20 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */int) var_3);
                        var_38 = ((/* implicit */int) arr_22 [i_3] [i_3] [(signed char)21]);
                    }
                    arr_71 [i_3] [(_Bool)1] [15] [(_Bool)1] [i_3] [i_3] = ((/* implicit */unsigned short) var_8);
                    arr_72 [i_16 - 3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_12] [i_3] [i_3] [i_12])) & (((/* implicit */int) arr_56 [i_3 + 1] [(unsigned char)8] [i_3 + 1] [i_3 - 1] [i_3 + 1]))));
                }
                var_39 = ((/* implicit */int) (unsigned char)30);
                var_40 ^= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned long long int) -2897307810597354303LL)) | (var_6))));
                var_41 = ((signed char) -16777216LL);
            }
        }
        var_42 = (-(((/* implicit */int) arr_62 [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3])));
        arr_73 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (short)32101)) * (((/* implicit */int) arr_16 [i_3] [i_3 + 1]))));
    }
    var_43 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)117)) ? (var_7) : (((/* implicit */unsigned long long int) -1929383193324203575LL)))) > ((+(var_3))))))));
}
