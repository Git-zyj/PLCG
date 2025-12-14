/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122333
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
    var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)2)))) : (((/* implicit */int) var_6))))));
    var_14 = ((/* implicit */long long int) ((unsigned char) var_7));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) (~(arr_1 [i_0] [i_0])));
        var_16 = ((/* implicit */_Bool) var_3);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((2147483647) <= (((((/* implicit */int) var_5)) % (var_10)))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))))))));
        arr_4 [i_1 - 1] [i_1] = ((/* implicit */unsigned char) ((-1) > (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 11U))) ? (((((/* implicit */_Bool) var_12)) ? (2U) : (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [15LL] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)178))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (1905029002) : (((/* implicit */int) var_3))))), (-6665898136383836730LL)))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) % (-631664201)));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            arr_11 [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)5766)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) var_3)) : (-1905029000))) >> (((/* implicit */int) ((unsigned char) var_6)))))) : (min((((/* implicit */long long int) min(((short)-7622), (((/* implicit */short) (unsigned char)86))))), (min((var_11), (var_9)))))));
            var_21 = ((/* implicit */long long int) ((unsigned short) var_7));
            /* LoopSeq 3 */
            for (short i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned char)78)))))))));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)110)) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)169)) < (2096478899)))))))));
                /* LoopSeq 4 */
                for (long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                {
                    var_24 = ((/* implicit */long long int) ((unsigned char) ((var_1) << (((max((((/* implicit */long long int) var_2)), (var_12))) - (224554754724200657LL))))));
                    arr_19 [i_5] [i_3] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)23)), (arr_2 [i_4] [i_3])));
                }
                for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    arr_22 [i_6] [i_4] [i_3] [(unsigned short)6] [i_2] = ((/* implicit */signed char) min((((((/* implicit */int) (unsigned char)31)) ^ ((-(((/* implicit */int) (unsigned char)187)))))), (((/* implicit */int) arr_16 [i_6] [(_Bool)1] [i_3]))));
                    arr_23 [i_6] [i_4] [i_2] = var_4;
                    arr_24 [i_4] [i_4] [i_3] [i_2] [i_2] = ((/* implicit */long long int) min(((unsigned short)3945), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (unsigned char)192)) >> (((-3721451153711741714LL) + (3721451153711741744LL)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_7] [14LL] [i_4] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */short) arr_26 [i_7 - 1] [i_7] [i_7 - 1] [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_7 - 1] [i_4] [i_4] [i_4] [i_4] [i_4]))))) : (min((-1), (((/* implicit */int) (unsigned char)135))))));
                        arr_28 [i_7] [i_6] [i_3] |= ((/* implicit */int) var_1);
                        arr_29 [i_6] [11U] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */int) ((unsigned short) var_5))) / (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_26 [i_7 - 1] [i_7 - 1] [(signed char)0] [i_7 - 1] [i_4] [i_2])) ? (((/* implicit */int) arr_20 [i_7 - 1] [i_7] [i_7 - 1] [i_7] [i_6])) : (((/* implicit */int) arr_26 [i_7] [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_4]))))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_33 [i_8] [i_8] [5LL] [i_8] [2LL] = ((/* implicit */unsigned char) var_3);
                        var_25 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)55330))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((unsigned int) 759524749)) : (max((((((/* implicit */_Bool) arr_6 [(short)5] [i_2])) ? (10U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) arr_32 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (short)-1))));
                    arr_36 [i_3] [9LL] = ((/* implicit */int) var_9);
                }
                /* vectorizable */
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                {
                    var_28 += ((/* implicit */signed char) arr_9 [i_10]);
                    var_29 = ((/* implicit */unsigned char) ((3564951700934874657LL) | (14LL)));
                    arr_39 [i_10] [i_4] [i_3] [i_2] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [7] [i_4])))))));
                }
                var_30 = ((/* implicit */short) ((signed char) min((arr_17 [i_2]), (arr_17 [i_4]))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    for (long long int i_12 = 1; i_12 < 14; i_12 += 4) 
                    {
                        {
                            var_31 += ((/* implicit */long long int) ((signed char) ((unsigned char) (!(((/* implicit */_Bool) 1456377575639228902LL))))));
                            var_32 = ((/* implicit */unsigned short) (unsigned char)1);
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)31)), (1889212121))))));
                            arr_44 [i_12] [i_11] [(unsigned short)9] [i_3] [i_12] = ((/* implicit */int) min((((((/* implicit */_Bool) 3388516612473000165LL)) ? (((var_8) | (((/* implicit */unsigned long long int) 1176232606)))) : (max((((/* implicit */unsigned long long int) -1889212119)), (arr_1 [i_11] [i_2]))))), (((/* implicit */unsigned long long int) var_3))));
                        }
                    } 
                } 
            }
            for (signed char i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                arr_47 [i_13] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_42 [i_13]), (arr_42 [i_13])))) ? (((((/* implicit */_Bool) arr_42 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_13] [i_3] [i_2] [i_2]))) : (4212459116U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_2])) ? (arr_42 [i_2]) : (arr_42 [i_13]))))));
                var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 3388516612473000168LL))))))));
                arr_48 [i_13] [i_3] [i_2] = ((/* implicit */_Bool) var_8);
                arr_49 [8LL] [i_3] [(unsigned char)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_13] [4])), (var_10)))) ? (((/* implicit */int) (short)-16412)) : (((((/* implicit */_Bool) min((var_8), (7959542216925553476ULL)))) ? (min((((/* implicit */int) (short)22960)), (arr_13 [i_13] [i_3] [i_3] [i_2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3] [i_3])))))))));
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    for (unsigned char i_15 = 4; i_15 < 13; i_15 += 1) 
                    {
                        {
                            arr_55 [i_15] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2] [i_2]))) : (6581165297401169525ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-21711)) ^ (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (short)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_8)))))));
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (var_11)))) ? (((int) -1824811508291010324LL)) : (((((/* implicit */int) arr_26 [1LL] [i_14] [(_Bool)0] [i_3] [i_3] [i_2])) / (((/* implicit */int) (unsigned char)145))))))) ? (((min((((/* implicit */long long int) arr_10 [i_15] [(unsigned short)1] [i_3])), (-2915185367058285073LL))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (arr_32 [i_15] [i_14] [(unsigned char)5] [i_3] [i_2])))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-27380)))));
                        }
                    } 
                } 
            }
            for (unsigned short i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                var_36 = ((/* implicit */long long int) var_8);
                arr_60 [i_16] [5LL] [i_2] = ((/* implicit */unsigned short) arr_34 [i_3]);
            }
        }
        /* vectorizable */
        for (unsigned char i_17 = 0; i_17 < 16; i_17 += 1) 
        {
            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_17] [i_17] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (318429062U))))));
            var_38 = ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (((((/* implicit */_Bool) 0LL)) ? (-927260370504115475LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)86))))));
        }
        var_39 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((long long int) arr_16 [1ULL] [i_2] [3U]))), (min((((/* implicit */unsigned long long int) (short)-8)), (var_1))))) == (((/* implicit */unsigned long long int) 0LL))));
    }
    var_40 = ((/* implicit */signed char) (-(min((((/* implicit */long long int) (short)27380)), ((-(var_9)))))));
}
