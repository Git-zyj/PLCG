/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165351
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0 + 2]) == (arr_0 [i_0 - 1])))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((/* implicit */int) (_Bool)1))))), (arr_0 [i_0 + 1])))) ? (((((/* implicit */_Bool) ((long long int) (short)-6137))) ? (((/* implicit */unsigned long long int) 2215592686U)) : (arr_1 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((int) max((var_12), (((/* implicit */unsigned short) (_Bool)1))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 540431955284459520ULL))));
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                arr_12 [i_1 + 2] [i_1 + 2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) : (((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1])))))))) ? (((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (short)-32759))));
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_1]);
            }
            for (int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                arr_17 [i_1] [i_1] [10ULL] |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-32530)))) ? (3575342148157412449LL) : (var_11))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_15 [i_2])) : (((/* implicit */int) arr_6 [10U] [10U])))))));
                arr_18 [i_1] [i_4] [i_4] [i_1] = ((/* implicit */short) (-(arr_14 [i_1] [i_2] [i_1 + 2] [i_1])));
                /* LoopSeq 4 */
                for (unsigned char i_5 = 2; i_5 < 20; i_5 += 3) 
                {
                    arr_23 [i_1] [i_4] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_16 [i_1 + 1] [i_4] [i_1]))) ? ((~(max((14421459878775193527ULL), (1ULL))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 17189847807471676632ULL)) ? (var_3) : (((/* implicit */long long int) var_14)))))))));
                    arr_24 [i_1] = ((/* implicit */_Bool) var_4);
                    arr_25 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) max((var_9), (((/* implicit */signed char) (_Bool)1)))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-32530)))) >> (((((/* implicit */int) (short)5540)) - (5512))))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) (-(4041296949U)));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 4) 
                    {
                        var_17 ^= ((/* implicit */short) max((((int) var_7)), (((/* implicit */int) var_12))));
                        var_18 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (2695817363U)));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        arr_33 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((short) ((short) 427116144495503444ULL))))));
                        var_19 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)224)), (max((arr_32 [i_1] [i_2] [i_4] [(unsigned short)20] [i_8]), (arr_15 [i_1 - 1])))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        var_20 ^= ((/* implicit */_Bool) max((arr_14 [i_1] [8ULL] [8ULL] [i_9]), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)12)))))));
                        var_21 = ((/* implicit */unsigned long long int) ((((3440612673384815647LL) / (((/* implicit */long long int) 32764U)))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((int) -449246927))) || (((/* implicit */_Bool) max((arr_19 [i_1] [i_1]), (((/* implicit */unsigned short) (_Bool)1))))))))));
                        arr_38 [i_1 - 1] [i_1 - 1] [i_4] [i_6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_1] [i_2] [i_4] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_6])), (23U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 + 1] [i_9]))) : (arr_9 [i_4] [i_1 - 1])))) : (min((((((/* implicit */_Bool) 253670359U)) ? (4483137834307454817ULL) : (((/* implicit */unsigned long long int) -3440612673384815646LL)))), (14971844632380040858ULL)))));
                    }
                }
                for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_11 = 2; i_11 < 20; i_11 += 1) 
                    {
                        arr_44 [i_1] [i_11] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 + 1] [i_4] [i_1])) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) ((signed char) var_7)))))) && (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) > (max((-1917331292708491390LL), (-1917331292708491390LL)))))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_4))));
                    }
                    for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 1) 
                    {
                        var_23 *= ((/* implicit */unsigned int) arr_16 [i_1] [(short)0] [i_10]);
                        var_24 = ((((((/* implicit */unsigned long long int) var_14)) * (arr_46 [i_1 + 2] [2ULL] [i_4] [i_12 - 2] [i_12 + 2]))) * (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                        arr_47 [i_1] [i_2] [i_4] [i_10] = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1 - 1])) || (((/* implicit */_Bool) min((499331142U), (((/* implicit */unsigned int) (short)-10890)))))))));
                        var_25 = ((/* implicit */unsigned long long int) arr_28 [4] [8LL] [(signed char)21] [(signed char)21] [(signed char)21]);
                    }
                    /* LoopSeq 2 */
                    for (int i_13 = 3; i_13 < 21; i_13 += 1) 
                    {
                        arr_50 [i_1] [i_10] [i_1] [i_10] [i_4] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) < (max((var_4), (((/* implicit */unsigned long long int) 4294967291U))))));
                        arr_51 [i_1 + 2] [i_1] [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 - 1] = ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (arr_21 [i_1 - 1] [i_4] [i_10] [i_13 - 2])))) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1256896266237874998ULL)) ? (((/* implicit */unsigned long long int) 10U)) : (arr_46 [i_1] [(short)9] [i_4] [i_1] [i_13 + 2]))))))));
                    }
                    for (int i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        var_26 = ((/* implicit */int) 11945976437172189095ULL);
                        arr_54 [i_1] [i_1] [i_1] [0] [i_10] [i_2] [i_2] = ((/* implicit */long long int) (+(((((((arr_11 [i_2] [i_4] [(short)17] [i_14]) + (((/* implicit */int) (unsigned short)43914)))) + (2147483647))) << (((1753145958) - (1753145958)))))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_15 = 2; i_15 < 22; i_15 += 4) /* same iter space */
                    {
                        arr_59 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_1] [i_1] [i_15])) % (arr_16 [i_1] [i_2] [i_1])));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((17189847807471676632ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)18230)), (744725522U))))))) ? (((((/* implicit */_Bool) 17189847807471676621ULL)) ? ((+(var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_1] [i_2] [i_2] [i_10] [i_10] [7ULL])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (((((/* implicit */unsigned long long int) 6335926441279969698LL)) | (2205526671516673405ULL)))))))));
                    }
                    for (signed char i_16 = 2; i_16 < 22; i_16 += 4) /* same iter space */
                    {
                        arr_62 [i_1] [(signed char)14] [i_1] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_16 + 1])) ? (arr_2 [i_1 - 1] [i_16 - 1]) : (arr_2 [i_1 - 1] [i_16 - 2])))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) max(((-(((((/* implicit */int) (unsigned short)16181)) << (((/* implicit */int) var_6)))))), ((-(((/* implicit */int) ((_Bool) arr_42 [i_1] [i_4] [i_4] [i_10] [(short)16]))))))))));
                        var_29 = ((/* implicit */int) min((((/* implicit */long long int) arr_8 [i_1 + 2] [i_1 + 2])), (((long long int) max((arr_8 [i_1] [i_1]), (((/* implicit */unsigned char) (_Bool)1)))))));
                        var_30 = ((/* implicit */unsigned short) arr_40 [i_1] [i_2] [i_2] [i_10] [i_16]);
                        var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((((/* implicit */int) (unsigned short)65510)) | (((/* implicit */int) (unsigned short)65527)))) != (((/* implicit */int) (signed char)-46)))))));
                    }
                    for (signed char i_17 = 2; i_17 < 22; i_17 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) arr_20 [(_Bool)1] [i_2] [i_4])))) : (((/* implicit */int) var_6)))) - (((/* implicit */int) var_9))));
                        arr_65 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((((/* implicit */_Bool) arr_8 [i_17 + 1] [i_17 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2520080536605965741ULL))))))) : (((/* implicit */int) var_6))));
                        var_33 = ((/* implicit */int) ((((/* implicit */int) ((short) ((unsigned int) (signed char)-17)))) != (((/* implicit */int) ((unsigned char) (signed char)-8)))));
                    }
                    var_34 = (-(((unsigned int) min(((signed char)0), (var_9)))));
                }
                for (unsigned char i_18 = 3; i_18 < 19; i_18 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_19 = 1; i_19 < 22; i_19 += 4) 
                    {
                        var_35 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-53), (((/* implicit */signed char) (_Bool)0)))))) : (var_14)))) && ((((!((_Bool)1))) || (((/* implicit */_Bool) (unsigned short)65534))))));
                        var_36 = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) 1152921504598458368LL)))))), (max((5894174104014700623LL), (((/* implicit */long long int) (short)-27395))))));
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_18] [i_2] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_55 [i_1 - 1] [i_2] [i_2] [i_18] [5ULL] [i_19])), ((unsigned short)13)))) ? (((/* implicit */int) var_6)) : (arr_10 [i_1] [i_2] [i_2])))) : (arr_63 [i_1] [(unsigned short)1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                    }
                    for (unsigned short i_20 = 0; i_20 < 23; i_20 += 2) 
                    {
                        var_38 = ((/* implicit */_Bool) max(((+(var_4))), (((/* implicit */unsigned long long int) (-(994852021))))));
                        var_39 ^= ((/* implicit */signed char) (short)2285);
                    }
                    arr_74 [i_1] [i_2] [i_1] [0ULL] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) arr_42 [i_1] [i_2] [i_4] [i_18] [i_18])) <= (arr_41 [i_1] [i_1 + 2])))))));
                }
                arr_75 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned char) max((min((var_4), (((/* implicit */unsigned long long int) arr_35 [i_1] [i_1] [i_1] [i_4] [i_4])))), (((/* implicit */unsigned long long int) arr_32 [i_1] [i_1] [i_1 + 2] [i_1] [i_1])))));
            }
        }
        var_40 = ((/* implicit */unsigned short) 2520080536605965753ULL);
    }
    var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((var_11) / (var_11))))))));
}
