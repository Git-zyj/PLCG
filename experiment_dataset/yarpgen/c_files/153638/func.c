/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153638
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)127)), (9223372036854775807LL)))) ? (((unsigned long long int) arr_6 [i_1] [i_1 - 1])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0])))))));
                    arr_9 [(short)4] [i_1 - 1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3ULL)))) ? (max((arr_7 [i_0] [(unsigned char)5] [(unsigned char)5] [5LL]), (((/* implicit */unsigned long long int) (signed char)119)))) : (((arr_7 [i_0] [i_0] [i_1] [i_0]) / (((/* implicit */unsigned long long int) 9223372036854775783LL))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        var_11 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) & (((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */unsigned long long int) -9223372036854775807LL)) : (8444910165859295761ULL)))))) ? ((~(((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (26ULL))))) : (max((((((/* implicit */unsigned long long int) arr_13 [(unsigned char)4] [8LL] [(unsigned char)4] [i_5])) | (11257342927897441674ULL))), (min((((/* implicit */unsigned long long int) var_9)), (var_0)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_12 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [12LL] [8]))));
                            arr_19 [i_0] [i_3] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))) : (arr_14 [i_6] [i_3] [i_6] [i_6] [i_6])));
                        }
                        var_13 ^= ((((min((10133381526577311837ULL), (((/* implicit */unsigned long long int) (short)-25666)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))))) << (0LL));
                        var_14 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41323))) <= (3ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21017))) : ((((+(14866718854012508953ULL))) % (((/* implicit */unsigned long long int) arr_4 [i_3])))));
                    }
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_0] [18LL] |= arr_21 [9] [i_3] [10ULL] [i_4] [13ULL] [i_7];
                        arr_23 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_3]))))));
                    }
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 16; i_9 += 3) 
                        {
                            var_15 = ((/* implicit */short) -9223372036854775804LL);
                            arr_31 [i_0] [i_3] [i_3] [i_8] [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_20 [i_0]))));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [i_9 + 3])) : (var_0)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))) % (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
                            var_17 = ((/* implicit */unsigned char) (-(arr_17 [i_4] [i_4] [i_9 - 1] [i_4] [i_4])));
                            arr_32 [i_0] [i_3] [i_4] [i_8] [i_3] = ((/* implicit */_Bool) arr_5 [i_9 - 1] [i_9] [i_9 - 2]);
                        }
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_10] [i_3] [i_10] [i_8] [i_8])) ? (arr_34 [i_10] [i_8] [i_4] [i_3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
                            var_19 &= ((/* implicit */unsigned char) 0ULL);
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_8] [i_3]))))) ? (((/* implicit */unsigned long long int) ((int) arr_27 [i_0] [7ULL] [(unsigned char)17] [(short)5]))) : (((((/* implicit */_Bool) arr_14 [i_0] [8LL] [i_4] [i_8] [10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (arr_6 [(_Bool)1] [(_Bool)1]))))))));
                            arr_36 [16] [i_3] [i_3] [i_8] [i_10] = ((/* implicit */signed char) (unsigned char)137);
                            arr_37 [i_0] [i_3] [(unsigned short)12] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) var_9))))));
                        }
                        var_21 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)13928)), (16194973935638745513ULL)));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max(((unsigned char)63), ((unsigned char)14)))) : (((/* implicit */int) arr_25 [i_3] [i_8]))));
                        var_23 = ((/* implicit */int) (signed char)-84);
                        arr_38 [i_3] [3] [5ULL] = ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8313362547132239778ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)119))))), (var_2))) << (((((/* implicit */int) (short)-10690)) + (10713))));
                    }
                    arr_39 [i_3] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) (short)26136);
                    var_24 = ((/* implicit */unsigned char) (-((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32749))) : (((((/* implicit */_Bool) var_7)) ? (12376323430767633841ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25666)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) ((unsigned long long int) arr_1 [i_11]));
        /* LoopNest 3 */
        for (short i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            for (short i_13 = 1; i_13 < 19; i_13 += 3) 
            {
                for (unsigned short i_14 = 4; i_14 < 18; i_14 += 3) 
                {
                    {
                        arr_51 [16ULL] [6ULL] [i_14] |= ((/* implicit */int) ((((/* implicit */_Bool) ((9223372036854775807LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_11] [i_11] [i_11] [3]))) : (((((/* implicit */_Bool) arr_45 [i_11])) ? (((/* implicit */unsigned long long int) arr_13 [i_11] [18] [i_13] [i_14 + 1])) : (arr_11 [(unsigned char)16])))));
                        arr_52 [i_11] = ((/* implicit */long long int) arr_49 [i_11] [i_11] [i_13 - 1] [i_11]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
    {
        arr_55 [i_15] = ((/* implicit */unsigned char) 2251770138070806102ULL);
        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20212)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30671))) : (-5026409795683503967LL)))) ? (-2107659020) : (((/* implicit */int) arr_48 [i_15] [i_15] [i_15] [i_15] [18]))));
    }
    for (int i_16 = 0; i_16 < 20; i_16 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_34 [(unsigned char)10] [(unsigned char)10] [(short)9] [i_16] [6]), (((/* implicit */unsigned long long int) (unsigned char)6))))) ? (((/* implicit */int) arr_27 [i_16] [13ULL] [i_16] [i_16])) : ((-(((/* implicit */int) arr_18 [i_16] [i_16] [(unsigned char)8] [i_16] [i_16]))))))) ? (((unsigned long long int) 13375690898868569397ULL)) : (max((2251770138070806090ULL), (((/* implicit */unsigned long long int) (unsigned char)241)))))))));
        var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1243006680672131927LL)))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32756)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) -5026409795683503967LL)) ? (arr_34 [i_16] [i_16] [i_16] [i_16] [i_16]) : (15367092387987526413ULL))) : (2251770138070806113ULL)))));
    }
    var_29 = ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */unsigned long long int) 25LL)) : (((((/* implicit */_Bool) -6257027950711384100LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16477))) : (16194973935638745509ULL))));
}
