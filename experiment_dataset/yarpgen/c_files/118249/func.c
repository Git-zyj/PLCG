/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118249
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
    for (int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_13 &= arr_2 [i_0];
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) /* same iter space */
        {
            arr_7 [i_0] = ((/* implicit */unsigned short) (-(((min((((/* implicit */int) var_2)), (arr_0 [i_1]))) & (((/* implicit */int) (signed char)(-127 - 1)))))));
            /* LoopSeq 1 */
            for (short i_2 = 4; i_2 < 7; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 3; i_3 < 10; i_3 += 1) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_11 [i_0] [i_1 - 1] [i_2 - 3] [i_3] [i_3 - 3] [i_2 - 3]), (arr_11 [i_0] [i_0] [i_2 + 3] [i_0] [i_3 - 3] [i_3])))) ? (((/* implicit */int) max((var_0), (arr_11 [i_0] [i_0] [i_2] [i_3 - 1] [i_3 - 2] [i_0])))) : (((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_1] [i_1] [i_1] [i_3 - 3] [i_3 - 3])))));
                            arr_15 [i_3] [i_1] [i_2 - 2] [i_0] [i_1 - 1] [i_2 - 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_11))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2]))) / (72057576858058752ULL)))));
                            arr_16 [i_0] [i_1 - 1] [i_0] [i_0] [i_4 - 1] = ((/* implicit */signed char) ((((((/* implicit */int) min(((unsigned short)7219), (arr_12 [i_0] [i_0])))) == (((/* implicit */int) var_3)))) ? (((/* implicit */int) ((unsigned char) (unsigned short)33343))) : (((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0] [i_4] [i_4 - 1] [i_4] [i_4 - 1])))));
                            var_15 = ((/* implicit */unsigned short) min((max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) arr_12 [i_3 - 2] [i_0])) : (((/* implicit */int) var_1)))))), (((/* implicit */int) ((_Bool) var_8)))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_9)))))) ? (max((((((/* implicit */int) (unsigned char)98)) ^ (((/* implicit */int) (unsigned short)8)))), (((/* implicit */int) var_7)))) : (((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_3])) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_2] [i_4 - 1] [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 1; i_6 < 9; i_6 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((max((var_4), (((/* implicit */unsigned long long int) (_Bool)1)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533))))))));
                            var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_11)), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_1]))) : (arr_3 [i_0] [i_1] [i_6 + 2]))))));
                        }
                    } 
                } 
                var_19 -= ((/* implicit */_Bool) max(((+(((((/* implicit */int) var_12)) << (((arr_3 [i_2] [i_1] [i_0 - 2]) - (10882413669263413966ULL))))))), (((/* implicit */int) var_7))));
            }
            arr_24 [i_0] [i_0] [i_1] |= ((/* implicit */_Bool) var_9);
            /* LoopNest 2 */
            for (unsigned short i_7 = 1; i_7 < 10; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_20 ^= ((/* implicit */_Bool) min((((((/* implicit */int) var_10)) | (((/* implicit */int) arr_21 [i_1 - 2] [i_1 - 1] [i_1 - 1])))), (((/* implicit */int) var_1))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), ((unsigned short)3)));
                        var_22 = ((/* implicit */short) var_9);
                    }
                } 
            } 
            arr_29 [i_0] = ((/* implicit */unsigned long long int) (+(max((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_10 [i_0 - 2])))), (((/* implicit */int) arr_12 [i_0] [i_0]))))));
        }
        /* vectorizable */
        for (signed char i_9 = 2; i_9 < 10; i_9 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */_Bool) (unsigned short)48829);
            var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_9] [i_0 - 2] [i_9 - 1])) ? (((/* implicit */int) arr_21 [i_0] [i_0 - 1] [i_9 - 1])) : (((/* implicit */int) (unsigned short)12260))));
            arr_32 [i_0] = ((/* implicit */unsigned char) arr_20 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]);
            arr_33 [i_0] [i_0] = ((/* implicit */_Bool) ((arr_5 [i_0]) ? (((/* implicit */int) ((_Bool) (signed char)39))) : (((/* implicit */int) (short)-22499))));
        }
    }
    for (unsigned char i_10 = 1; i_10 < 16; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 1) 
        {
            for (unsigned char i_12 = 1; i_12 < 16; i_12 += 3) 
            {
                {
                    var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)15)) : (((((/* implicit */int) var_3)) - (((/* implicit */int) var_2)))))) : (max(((-(((/* implicit */int) arr_36 [i_12])))), (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_8))))))));
                    arr_44 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) (unsigned short)18)), (15125061784335389015ULL)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_13 = 2; i_13 < 16; i_13 += 3) 
        {
            for (signed char i_14 = 1; i_14 < 16; i_14 += 4) 
            {
                {
                    var_26 = ((unsigned short) min((((var_11) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)7065)))), (((((/* implicit */int) (unsigned short)2047)) - (((/* implicit */int) (unsigned short)61444))))));
                    var_27 = ((/* implicit */_Bool) min((var_27), ((!(((/* implicit */_Bool) var_6))))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 1; i_15 < 14; i_15 += 1) 
                    {
                        for (signed char i_16 = 0; i_16 < 17; i_16 += 4) 
                        {
                            {
                                arr_55 [i_10 + 1] [i_10 + 1] [i_14] [i_15 - 1] [i_14] [i_10] = ((/* implicit */unsigned long long int) (((((((_Bool)1) ? (((/* implicit */int) arr_42 [i_10] [i_10] [i_10])) : (((/* implicit */int) var_9)))) % (((((/* implicit */int) var_3)) + (((/* implicit */int) var_1)))))) == (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_1))))) : (((((/* implicit */int) var_5)) << (((((/* implicit */int) var_6)) - (28730)))))))));
                                var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_52 [i_10] [i_10] [i_14] [i_10] [i_16]), (arr_52 [i_14 + 1] [i_13 - 2] [i_14 + 1] [i_15] [i_16])))) < ((-(((/* implicit */int) ((_Bool) (unsigned short)4)))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)64459), (((/* implicit */unsigned short) arr_45 [i_10])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_13 - 1]))) % (var_4))))), (((/* implicit */unsigned long long int) arr_37 [i_13] [i_13 + 1] [i_14])))))));
                }
            } 
        } 
        arr_56 [i_10] [i_10] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_46 [i_10 - 1])) ? (((/* implicit */int) ((_Bool) arr_46 [i_10]))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)56670))))))));
    }
    var_30 = ((/* implicit */signed char) ((((/* implicit */int) min(((((_Bool)1) || (((/* implicit */_Bool) var_2)))), ((!(((/* implicit */_Bool) var_9))))))) >= (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (unsigned short)53267)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))));
}
