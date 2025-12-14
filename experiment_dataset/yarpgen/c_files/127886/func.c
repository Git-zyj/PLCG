/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127886
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
    var_10 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)48))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)138);
        var_11 = ((/* implicit */long long int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) min((arr_0 [i_0]), (arr_0 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
        {
            var_12 *= arr_7 [i_1] [i_2];
            arr_9 [i_2] [i_1] = (signed char)-99;
            arr_10 [i_2] [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2]))) ^ (1583175225379243560LL)))) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_1])))) : (((/* implicit */int) arr_7 [i_1] [i_2]))));
        }
        for (int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
        {
            var_13 = ((/* implicit */signed char) (((~(arr_6 [i_1]))) * (arr_6 [i_1])));
            var_14 += ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_1] [i_3]))))))));
        }
        for (signed char i_4 = 1; i_4 < 13; i_4 += 3) 
        {
            arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (short)5543)) && (((/* implicit */_Bool) 3070852353117594459LL))))) > (((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) (unsigned char)126)), (arr_13 [(signed char)15] [i_1] [i_1])))))));
            var_15 = -1583175225379243561LL;
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (max((18433368707839601605ULL), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_4])))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_4])) ? (1939662180) : (((/* implicit */int) var_8))))) ? (((6317050439370040857ULL) * (((/* implicit */unsigned long long int) 13LL)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((-1939662180) + (1939662182))) - (2)))))))))))));
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4 - 1])) << (((((/* implicit */int) arr_8 [i_4 + 1])) - (45)))))) ? (((((/* implicit */unsigned long long int) var_1)) / (var_2))) : (((/* implicit */unsigned long long int) ((int) var_7))))))));
            var_18 ^= ((/* implicit */short) ((unsigned char) max((-1939662184), (((/* implicit */int) var_0)))));
        }
        /* LoopSeq 2 */
        for (long long int i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            var_19 ^= ((/* implicit */unsigned long long int) arr_20 [i_1] [i_5 - 1]);
            arr_22 [i_1] [i_5] [i_1] = ((/* implicit */unsigned char) (signed char)89);
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 13; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    {
                        arr_28 [i_1] [i_5] [i_6] [i_7] = ((((/* implicit */int) (unsigned char)199)) % ((~(((/* implicit */int) (short)18433)))));
                        var_20 = ((/* implicit */long long int) min((var_20), (0LL)));
                        var_21 = (~(min((var_6), (arr_16 [i_5 + 3] [i_6 - 2] [i_6 - 1]))));
                        arr_29 [i_6] [i_6] [i_5 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_24 [i_1] [i_5 + 1] [(unsigned char)2] [i_7]), (((/* implicit */short) arr_14 [i_5 - 1] [i_5]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 126119845))))) : (((/* implicit */int) ((short) max((17268670938237857342ULL), (((/* implicit */unsigned long long int) (unsigned char)130))))))));
                        var_22 *= ((short) ((((/* implicit */int) arr_23 [i_1] [i_1] [i_1])) % (((/* implicit */int) (unsigned char)98))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 4; i_8 < 13; i_8 += 3) 
            {
                for (long long int i_9 = 2; i_9 < 12; i_9 += 4) 
                {
                    {
                        var_23 = ((/* implicit */int) arr_20 [i_5] [i_9]);
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (unsigned char)0))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) min((arr_36 [i_1] [i_1]), ((signed char)119))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            var_26 = arr_14 [i_9] [i_1];
                            arr_39 [i_1] [i_5 + 1] [i_8] [i_9] [i_11] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) arr_33 [i_1] [i_5] [i_8] [i_8] [i_5] [i_9 - 2])) / (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) var_9)))))), (arr_6 [i_5])));
                            var_27 = ((/* implicit */unsigned char) min((((long long int) arr_32 [i_5] [i_5] [i_5] [i_5])), ((~(5398148955629785429LL)))));
                        }
                        arr_40 [i_8] [5ULL] [i_5] [i_8] [i_8] = (signed char)73;
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_13 = 2; i_13 < 15; i_13 += 4) 
            {
                for (short i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    for (long long int i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_34 [i_14]))) || (((/* implicit */_Bool) arr_46 [i_14])))))));
                            arr_55 [i_1] [i_1] [i_13] [i_15] = ((unsigned long long int) arr_54 [i_12] [i_12] [i_12]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_16 = 0; i_16 < 16; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 4; i_17 < 13; i_17 += 3) 
                {
                    {
                        arr_61 [i_12] &= arr_51 [i_17 - 1] [i_17] [i_16] [i_16] [i_16];
                        var_29 = ((/* implicit */unsigned long long int) var_0);
                        /* LoopSeq 2 */
                        for (unsigned char i_18 = 0; i_18 < 16; i_18 += 3) 
                        {
                            arr_66 [i_17] [i_16] [i_12] [i_17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)252))));
                            var_30 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)118))));
                        }
                        for (short i_19 = 0; i_19 < 16; i_19 += 4) 
                        {
                            var_31 = ((/* implicit */short) (signed char)78);
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((273496265) << (((-288230376151711744LL) + (288230376151711745LL)))))))))));
                            var_33 = ((/* implicit */signed char) var_7);
                            var_34 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_17 - 1] [i_17 - 2])) >> (((((/* implicit */int) arr_14 [i_17 - 3] [i_17 + 1])) - (169)))));
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_19 [i_19] [i_12])))))));
                        }
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned char) (signed char)102);
            arr_69 [(unsigned char)2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_12] [i_12] [(unsigned char)12] [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-124)))) : (18446744073709551613ULL)));
        }
        var_37 += ((/* implicit */unsigned char) max((((arr_43 [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) -1583175225379243584LL)))), (((/* implicit */unsigned long long int) min((arr_12 [i_1]), (arr_12 [i_1]))))));
        arr_70 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)157)) && (((/* implicit */_Bool) min((arr_65 [0LL]), (((/* implicit */long long int) min(((short)-6228), (((/* implicit */short) arr_47 [i_1] [i_1] [i_1]))))))))));
    }
    /* vectorizable */
    for (unsigned char i_20 = 0; i_20 < 24; i_20 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_21 = 4; i_21 < 23; i_21 += 3) 
        {
            for (unsigned char i_22 = 0; i_22 < 24; i_22 += 4) 
            {
                {
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_75 [i_20] [i_20] [i_22]))))) ? ((+(arr_76 [i_20] [i_21] [i_21] [i_22]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_74 [i_22]))))));
                    /* LoopNest 2 */
                    for (int i_23 = 1; i_23 < 21; i_23 += 4) 
                    {
                        for (long long int i_24 = 2; i_24 < 21; i_24 += 3) 
                        {
                            {
                                arr_84 [i_20] [i_20] [i_22] [i_23] [i_24] [i_23] = (unsigned char)207;
                                var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_82 [i_20] [i_21 + 1] [i_22] [i_23 + 1] [i_24 + 1] [i_24] [i_24]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_40 += var_0;
        var_41 += ((/* implicit */long long int) arr_78 [i_20] [i_20] [i_20] [i_20]);
    }
}
