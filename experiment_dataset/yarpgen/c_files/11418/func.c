/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11418
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
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0 - 1]) ? (10382642) : (((/* implicit */int) (unsigned short)57868))))) ? (((/* implicit */int) ((unsigned char) var_4))) : (((/* implicit */int) max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0] [i_0 + 1]))))));
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)18630))));
        var_13 = var_0;
        arr_4 [i_0 + 1] [i_0 - 1] = ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) (unsigned char)49)))))) + (max((var_11), (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])))));
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1 - 1] = (+(((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46905))))));
        /* LoopSeq 4 */
        for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                for (int i_4 = 3; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)203)) ? (-805472004) : (((/* implicit */int) (unsigned char)189))))));
                            arr_17 [i_2] [i_3 - 1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)18)), (var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)23)) : (-14)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))) : ((~(((/* implicit */int) var_5))))));
                            var_15 = ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
            } 
            arr_18 [i_2] = ((/* implicit */unsigned long long int) var_0);
        }
        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 1) 
            {
                arr_23 [i_1] [i_6] [i_7] = ((/* implicit */long long int) min(((+(((((/* implicit */_Bool) var_9)) ? (1838163963334172086ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18633))))))), ((~(((((/* implicit */unsigned long long int) var_11)) + (var_3)))))));
                arr_24 [i_7] [i_6] [i_1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46903))) % (637590960322509866ULL)));
                var_16 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_16 [i_1 - 1] [i_1 - 1] [i_6] [i_7] [i_7]))))));
                arr_25 [i_1 + 1] [i_1 + 2] [i_7] [i_7 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [(signed char)13] [(signed char)13])) ? ((~(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) 805471992)) ? (-1) : (((/* implicit */int) (unsigned char)135)))))) <= (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)185)) % (-398947707)))))));
            }
            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)18638))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                var_18 = (_Bool)1;
                arr_29 [i_1 - 1] [i_1 - 1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_1 + 1] [i_1 + 2] [i_1 + 1])) <= (((/* implicit */int) var_5))));
            }
            for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((arr_5 [i_1 + 2]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_1 + 2]))))) != (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46902))) * (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                arr_32 [i_1] [i_6] [i_9] [i_9] = ((/* implicit */unsigned short) arr_22 [i_1] [i_1] [i_6] [i_9]);
            }
        }
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_14 [i_1 + 2] [i_10] [3ULL] [3ULL] [i_1 + 2])) ? (((/* implicit */int) arr_10 [i_1] [(signed char)0])) : (((/* implicit */int) (short)-10014))))))) - ((-(min((arr_6 [i_1]), (((/* implicit */unsigned long long int) var_6))))))));
            arr_36 [i_1 + 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((var_10) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
            arr_37 [i_1] [i_10] [i_1] = ((/* implicit */signed char) max(((-(((((/* implicit */int) var_2)) / (var_11))))), (((((/* implicit */_Bool) (~(var_11)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)255)) : (arr_14 [(unsigned char)5] [i_10] [(unsigned char)5] [i_10] [i_10]))) : (((((/* implicit */int) var_4)) << (((((/* implicit */int) var_0)) - (7330)))))))));
        }
        for (unsigned short i_11 = 1; i_11 < 11; i_11 += 3) 
        {
            var_21 = ((/* implicit */short) ((unsigned long long int) var_4));
            var_22 = ((((/* implicit */_Bool) (~(arr_33 [i_1 + 2])))) ? (((/* implicit */unsigned int) ((((var_2) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_1 + 2] [i_1] [i_11 + 1] [i_1])))) | (((((/* implicit */_Bool) (short)-19)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))) : (var_8));
        }
        /* LoopSeq 2 */
        for (unsigned int i_12 = 2; i_12 < 12; i_12 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) ((((min((var_3), (((/* implicit */unsigned long long int) (unsigned char)165)))) & (((/* implicit */unsigned long long int) min((arr_9 [i_12]), (((/* implicit */long long int) arr_14 [i_1] [5ULL] [i_1] [i_1] [i_1]))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)204)))));
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned short)18638))) ? (var_3) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) (~(arr_14 [i_1] [i_1] [i_1 + 2] [i_1] [i_12])))) : (var_3)))));
            var_25 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (unsigned int i_13 = 2; i_13 < 12; i_13 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */int) (((+(((/* implicit */int) arr_28 [i_1 - 1] [i_1] [3ULL] [i_13 + 1])))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4833573844981568457LL)) ? (var_11) : (((/* implicit */int) (unsigned short)46902))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20054)) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (16608580110375379529ULL))))))));
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (unsigned char)118))));
            var_28 = ((/* implicit */_Bool) ((min((919761554), (((/* implicit */int) var_2)))) + (((/* implicit */int) ((var_2) || (arr_26 [i_1] [i_1 + 2] [i_1 - 1] [i_13 - 2]))))));
        }
        var_29 *= ((/* implicit */unsigned char) max((((unsigned long long int) (short)-47)), (((((/* implicit */_Bool) ((arr_5 [i_1 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)))) ? (arr_33 [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_38 [i_1 + 1])), (var_4)))))))));
        var_30 &= ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_6 [i_1 - 1])))));
    }
    /* vectorizable */
    for (long long int i_14 = 1; i_14 < 11; i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_15 = 1; i_15 < 12; i_15 += 3) 
        {
            for (unsigned char i_16 = 0; i_16 < 13; i_16 += 1) 
            {
                {
                    arr_58 [i_14] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                    arr_59 [i_15] [(unsigned char)2] = ((/* implicit */unsigned short) (((+(var_8))) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                }
            } 
        } 
        arr_60 [i_14] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_3)))) ? (1123228769) : (((/* implicit */int) ((unsigned short) arr_11 [i_14])))));
        arr_61 [i_14] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57131)) && (((/* implicit */_Bool) 8597304913539417289ULL)))))));
        var_31 = ((/* implicit */_Bool) ((short) arr_16 [i_14] [i_14] [i_14 - 1] [(_Bool)0] [i_14 + 2]));
    }
    var_32 = ((/* implicit */unsigned long long int) var_11);
    var_33 = ((/* implicit */unsigned long long int) min((((_Bool) (-(((/* implicit */int) var_2))))), (var_10)));
    /* LoopSeq 1 */
    for (short i_17 = 1; i_17 < 12; i_17 += 1) 
    {
        arr_64 [i_17 + 1] = ((/* implicit */long long int) (+(((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_13 [i_17 + 1] [(unsigned char)0]) : (((/* implicit */int) arr_54 [10LL] [i_17 + 1] [10LL])))))));
        var_34 -= ((/* implicit */unsigned char) max((((var_10) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_15 [i_17 + 1] [(signed char)6] [i_17 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51044)) ? (var_3) : (8597304913539417288ULL)))))))));
    }
}
