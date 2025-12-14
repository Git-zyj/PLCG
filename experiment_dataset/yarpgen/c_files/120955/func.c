/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120955
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
    var_18 ^= ((/* implicit */_Bool) ((unsigned int) var_7));
    var_19 = ((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) ((unsigned long long int) var_11))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) arr_1 [7LL])) > (((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */long long int) arr_1 [i_0])))))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_1 + 2] [4]), (arr_0 [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((-(144115050636902400ULL))) : (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (((+(arr_1 [i_1 + 4]))) | (((/* implicit */unsigned int) var_4))))) > (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (arr_4 [i_1]))) >> (min((((/* implicit */unsigned int) arr_3 [8ULL] [i_1 + 3])), (var_8)))))));
            var_23 *= ((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_1 + 3]));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_7 [i_0]) : (arr_7 [i_0])));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                var_25 ^= ((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [0U])))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) ((unsigned int) 18302629023072649216ULL));
                            var_27 *= ((((/* implicit */_Bool) (signed char)127)) ? (144115050636902412ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                            var_28 = ((/* implicit */int) (+(var_5)));
                            arr_14 [(unsigned short)8] [(unsigned short)8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)42153))));
                        }
                    } 
                } 
            }
            var_29 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
            arr_15 [i_0] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_9 [i_0] [i_2])))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
        {
            var_30 *= min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [8U] [(unsigned short)9] [i_0]))) : (3901529638U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)52))))));
            /* LoopSeq 2 */
            for (unsigned int i_7 = 3; i_7 < 9; i_7 += 1) 
            {
                /* LoopSeq 4 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((((((/* implicit */long long int) -1731860056)) > (-7718184173410147743LL))) ? (((((/* implicit */_Bool) arr_19 [i_0])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_6] [(_Bool)1] [i_8]))))) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_11 [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7 - 2])), (144115050636902437ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)1300), (arr_21 [i_7 - 2] [i_7 - 3] [(unsigned short)5]))))) : (min((var_8), (((/* implicit */unsigned int) arr_16 [i_7 - 1] [i_7 - 3] [i_7 - 1]))))));
                    var_33 = ((/* implicit */unsigned int) var_5);
                    arr_22 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) arr_12 [5ULL] [i_6] [i_7 - 3] [i_0] [5ULL] [i_0] [i_7 - 3]))) ^ (var_5)));
                    arr_23 [i_7] [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)1)))))));
                }
                for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((unsigned long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (var_9)))))))));
                    arr_26 [i_0] [i_6] [i_7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7] [8U] [i_7 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7 + 1]))) : (arr_25 [i_7] [i_7] [i_7 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_7 - 3] [i_6] [i_7] [i_0])))) : (((((/* implicit */unsigned long long int) 3857819514U)) + (arr_17 [i_7 - 3])))));
                    var_35 = ((/* implicit */long long int) min((((unsigned long long int) arr_18 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) arr_0 [i_7 - 3] [i_9]))))) ? (((((/* implicit */_Bool) arr_20 [6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (var_6) : (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                    var_36 = ((/* implicit */int) ((((144115050636902458ULL) % (((/* implicit */unsigned long long int) 569920817)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 393437648U))))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    arr_31 [i_10] [i_6] [i_7] [i_10] &= ((/* implicit */long long int) ((unsigned int) var_3));
                    var_37 = ((/* implicit */_Bool) var_4);
                }
                for (signed char i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    var_38 &= ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_21 [i_0] [i_0] [(unsigned short)5])), (var_15)))) ? (((/* implicit */unsigned long long int) var_1)) : ((((_Bool)1) ? (144115050636902437ULL) : (18302629023072649188ULL))))) * ((-(min((arr_28 [i_0] [3U] [i_0] [3U]), (((/* implicit */unsigned long long int) 277640418U))))))));
                    var_39 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_17) >> (((140737484161024ULL) - (140737484161003ULL))))) % (((/* implicit */long long int) var_8))))) ? (569920817) : ((~(((/* implicit */int) arr_20 [i_7 - 3] [i_7 - 1] [i_7 - 3] [i_7] [i_7 - 3] [i_7 + 1]))))));
                    arr_34 [i_0] [i_0] [i_0] [i_0] [i_11] = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) ((long long int) var_3))))));
                    arr_35 [(_Bool)1] [i_11] [i_7] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */int) (short)-20641)) > (((/* implicit */int) (_Bool)1))))), ((unsigned char)192)));
                }
                arr_36 [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) (((_Bool)1) ? ((~(arr_18 [i_7] [0U] [i_7 + 1]))) : (((6837019655988559694ULL) / (((/* implicit */unsigned long long int) min((393437639U), (((/* implicit */unsigned int) (short)16901)))))))));
                arr_37 [i_0] = ((/* implicit */unsigned int) ((((_Bool) ((unsigned int) var_2))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) : ((-(((/* implicit */int) ((unsigned char) arr_7 [i_0])))))));
                var_40 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_10)))) ? ((~((~(var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_7 + 1]) < (arr_4 [i_7 + 1])))))));
            }
            for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) var_7))));
                arr_42 [0ULL] = (-(((((/* implicit */_Bool) arr_38 [i_6] [i_6])) ? (arr_6 [i_0]) : (arr_13 [i_0] [i_6] [i_0]))));
            }
        }
        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
        {
            arr_45 [i_0] [7] [i_13] = ((((/* implicit */_Bool) ((unsigned long long int) min((arr_32 [(unsigned char)5] [i_0] [(unsigned char)5] [i_0]), (var_6))))) ? (min((min((((/* implicit */unsigned long long int) var_15)), (var_9))), (((/* implicit */unsigned long long int) arr_40 [i_13] [5ULL] [i_13])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) & (((/* implicit */unsigned long long int) var_4))))))))));
            arr_46 [i_0] [i_13] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))) : (0LL)));
        }
        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) var_10))));
        arr_47 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (var_10)))) < (((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned int) var_13))))) ^ (max((((/* implicit */unsigned long long int) (unsigned short)51173)), (144115050636902428ULL)))))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 10; i_15 += 3) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) 
            {
                {
                    var_43 = ((/* implicit */_Bool) var_7);
                    arr_56 [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) + ((-(-5035122234212862679LL)))))) < (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_30 [i_14] [i_14] [i_14] [i_14]) : (arr_24 [2ULL] [3] [i_16] [2ULL] [i_16])))), (((arr_28 [i_15] [i_15] [i_15] [i_15]) >> (((arr_32 [i_14] [1U] [i_14] [i_14]) - (2007631624225519920ULL)))))))));
                    var_44 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-1))));
                    arr_57 [i_14] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((short) var_13))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_8 [i_14] [i_15] [i_14])))) : (((unsigned int) var_16)))) == (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                }
            } 
        } 
        arr_58 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_38 [(unsigned char)3] [6LL]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) + (var_15))))))) && (((/* implicit */_Bool) arr_9 [i_14] [1LL]))));
    }
}
