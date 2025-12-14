/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13880
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_12 [(_Bool)1] [i_1] [i_2] [i_2] [(signed char)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [i_2 - 3] [i_1] [2ULL]))));
                        arr_13 [i_1] [(unsigned char)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) -1129919611)) ? (-1129919611) : (((/* implicit */int) (unsigned short)62985))))));
                        var_16 *= ((/* implicit */_Bool) ((((arr_10 [i_0] [i_0] [i_1] [i_2] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_8 [i_0] [i_0] [i_0] [i_0]))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_2 - 3] [i_2 - 4] [i_3 + 1])))))));
                    }
                } 
            } 
            arr_14 [i_1] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [(short)5] [i_1]))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741824U)) ? (((/* implicit */int) arr_0 [8ULL] [i_0])) : (-1129919608)))))))));
            arr_19 [(signed char)2] [(unsigned short)0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_18 [i_4] [i_4])) : (arr_11 [i_0] [10ULL] [i_0] [10ULL])))) ? (((/* implicit */long long int) ((unsigned int) arr_5 [(unsigned char)5] [(unsigned short)2] [(short)8] [i_0]))) : (arr_18 [i_0] [i_4])));
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned char) ((arr_5 [i_0] [7] [i_4] [i_0]) ? (((/* implicit */int) var_2)) : (var_4)))))));
            arr_20 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_0] [i_0] [i_4]))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1] [i_0] [i_4] [i_4])))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 4; i_7 < 9; i_7 += 4) 
                {
                    {
                        var_20 += ((/* implicit */unsigned short) var_7);
                        var_21 = ((/* implicit */unsigned char) arr_17 [i_6]);
                        var_22 += var_1;
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) ((signed char) -1129919611));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_0])) ? ((~(arr_11 [i_5] [i_0] [i_5] [i_5]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) : (arr_11 [i_5] [(unsigned char)0] [i_5] [i_5])))));
        }
        arr_28 [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) < ((+(((/* implicit */int) var_2))))));
    }
    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((signed char) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_1)), (var_3))))))));
        arr_31 [(signed char)8] [i_8] = ((/* implicit */int) min((max((arr_29 [i_8]), (((/* implicit */unsigned long long int) var_0)))), ((+(min((var_3), (((/* implicit */unsigned long long int) var_0))))))));
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                var_26 = ((/* implicit */_Bool) min((var_26), (((max((max((((/* implicit */unsigned long long int) var_10)), (var_11))), (((/* implicit */unsigned long long int) var_14)))) == (((/* implicit */unsigned long long int) arr_35 [4U] [(unsigned char)2] [i_10]))))));
                var_27 = ((/* implicit */unsigned short) max((var_1), (((signed char) max((var_7), (((/* implicit */unsigned long long int) var_12)))))));
                /* LoopSeq 2 */
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    arr_39 [i_8] [i_9] [i_9] = ((/* implicit */_Bool) arr_26 [i_8] [i_9] [i_10] [i_11]);
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_14))));
                }
                /* vectorizable */
                for (short i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    arr_42 [i_8] [i_10] [i_10] [i_8] [i_8] = ((/* implicit */long long int) arr_5 [10LL] [10LL] [10LL] [(_Bool)1]);
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        arr_45 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 545458287U)) ? (((/* implicit */unsigned int) -1129919595)) : (31744U)));
                        arr_46 [i_13] [i_12] [0U] [i_10] [(short)6] [i_9] [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_5)) : (arr_18 [i_12] [i_9]))) < (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_8] [i_9] [(signed char)3] [i_10] [(short)0] [i_9])))));
                        arr_47 [i_8] [3ULL] [i_8] [i_8] [3ULL] [i_8] [3ULL] &= ((/* implicit */_Bool) arr_41 [i_9] [i_12] [i_10] [i_9]);
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)11))))))));
                        var_30 += ((/* implicit */unsigned char) var_8);
                    }
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        var_31 = ((/* implicit */short) ((unsigned int) arr_11 [i_9] [i_9] [i_9] [i_9]));
                        var_32 = ((/* implicit */int) ((signed char) arr_4 [i_9] [i_10] [i_12]));
                    }
                    var_33 += ((/* implicit */unsigned short) var_13);
                }
            }
            arr_51 [i_8] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) max((((unsigned short) var_5)), (((unsigned short) var_1))))) ^ (max((var_4), (var_4)))));
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (max((((((/* implicit */_Bool) var_9)) ? (arr_23 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((((/* implicit */_Bool) arr_23 [5LL])) ? (arr_23 [4ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */int) arr_48 [i_9] [i_8])) : (var_4))))));
            arr_52 [i_8] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_24 [i_8] [i_8] [i_9])) ? (((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : ((-(var_7))))));
        }
    }
    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned short i_17 = 4; i_17 < 10; i_17 += 1) 
            {
                for (int i_18 = 0; i_18 < 12; i_18 += 2) 
                {
                    {
                        var_35 ^= ((/* implicit */unsigned char) var_13);
                        arr_65 [i_15] [i_15] [i_17] [i_18] [i_16] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 4503599627370495LL))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) ((short) ((unsigned long long int) arr_64 [i_15] [i_16] [i_17] [i_18] [i_18]))))));
                    }
                } 
            } 
        } 
        arr_66 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((-(arr_32 [i_15]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_37 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))))) : ((~(((/* implicit */int) var_15))))));
    }
    /* vectorizable */
    for (unsigned long long int i_19 = 1; i_19 < 9; i_19 += 4) 
    {
        arr_69 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [6LL] [i_19] [6LL] [10U] [i_19])))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (var_10))) : (((/* implicit */int) arr_5 [(unsigned short)0] [i_19 + 2] [i_19] [i_19]))));
        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)))))))));
        var_37 -= ((/* implicit */int) arr_41 [i_19 + 1] [i_19 + 2] [i_19] [i_19 + 2]);
        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) arr_35 [i_19 - 1] [i_19] [5U])) >= (var_11))))))));
    }
    var_39 = ((/* implicit */long long int) max((((signed char) var_8)), (var_0)));
    var_40 = ((/* implicit */int) min((var_40), (var_4)));
    var_41 = ((/* implicit */unsigned short) (-((-(var_9)))));
}
