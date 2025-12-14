/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166812
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0]))));
        var_16 = ((/* implicit */short) 923734545);
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (~(2097151U)))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */int) (short)-10857)))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (617490982) : (arr_5 [i_1]))))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))) : (8011169139517960787ULL)));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (signed char)4)) : (923734545)));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                for (int i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 127)) >= (arr_9 [i_5 + 1]))))));
                        var_21 &= ((/* implicit */int) max((((/* implicit */long long int) 2494254400U)), (((((/* implicit */_Bool) arr_10 [i_5 + 1] [i_5] [i_5 - 1])) ? (arr_10 [i_5] [i_5] [i_5 + 1]) : (arr_10 [i_5] [i_5] [i_5 - 1])))));
                    }
                } 
            } 
            var_22 &= ((/* implicit */signed char) arr_5 [i_2]);
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */unsigned int) -135912817)) : (2931737925U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 274877906943LL)) && (((/* implicit */_Bool) 135912816)))))));
                var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)77))));
                var_25 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)6412)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_4 [i_2]) : (((/* implicit */int) arr_16 [i_2] [i_6])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (short)-3977)))))) < (((/* implicit */int) (short)-21071))));
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) (signed char)-28))) != (max((((/* implicit */unsigned long long int) (signed char)30)), (arr_14 [i_3]))))))));
                arr_18 [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 127)) ? (8) : (((/* implicit */int) (signed char)-70))));
            }
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 1; i_8 < 9; i_8 += 2) 
                {
                    for (unsigned short i_9 = 1; i_9 < 9; i_9 += 3) 
                    {
                        {
                            var_27 = (~(-617490983));
                            var_28 -= (signed char)108;
                            var_29 |= (~(((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */unsigned int) 8)) : (arr_22 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8]))));
                            var_30 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)-1)) ? (arr_5 [i_8 + 1]) : (((/* implicit */int) (_Bool)1))))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1536194768)) ? ((+(((/* implicit */int) arr_23 [i_9] [i_9 + 2] [i_9] [i_9 + 1] [i_9 - 1] [i_9])))) : ((~(var_8)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2147483647))));
                    arr_29 [i_2] [i_3] [i_7] [i_3] [i_7] [i_3] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) % (arr_27 [i_3] [7]))) << (((((((/* implicit */_Bool) arr_27 [i_3] [i_3])) ? (arr_27 [i_2] [i_2]) : (arr_27 [i_2] [i_7]))) - (16972865068143068253ULL)))));
                    var_33 = ((/* implicit */long long int) var_7);
                    var_34 = ((unsigned char) ((arr_21 [i_2] [i_2] [i_2]) & (((/* implicit */int) (signed char)1))));
                }
                /* LoopNest 2 */
                for (long long int i_11 = 4; i_11 < 10; i_11 += 4) 
                {
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        {
                            var_35 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) 17682600844364590080ULL))), (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27355))) >= (arr_28 [i_3] [i_12])))), (arr_9 [i_11 - 1])))));
                            var_36 += ((/* implicit */unsigned long long int) ((signed char) var_8));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_14 = 1; i_14 < 10; i_14 += 3) 
            {
                for (int i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    {
                        var_37 = ((/* implicit */_Bool) 1800712895U);
                        /* LoopSeq 1 */
                        for (short i_16 = 2; i_16 < 10; i_16 += 1) 
                        {
                            var_38 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-71)), ((((-(58720256))) / (((/* implicit */int) arr_23 [i_16 - 2] [i_14] [i_14 + 1] [i_14 + 1] [i_14] [i_14 - 1]))))));
                            var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((1623405861) << (((((/* implicit */int) var_2)) - (111)))))) ? (((/* implicit */unsigned int) ((int) var_14))) : (1800712898U))))));
                            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (1800712898U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32761))))) : (((int) arr_10 [i_13] [i_15] [i_16]))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_14] [i_14 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_14] [i_13]))) : (arr_28 [i_2] [i_2]))))));
                            var_41 &= ((/* implicit */int) (~(((((/* implicit */long long int) 2494254400U)) / (-2626267911471999316LL)))));
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)182))) < (((((/* implicit */_Bool) var_11)) ? (arr_42 [i_14] [i_15] [i_14] [i_13] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                        }
                        arr_44 [i_2] [i_2] [i_2] [i_14] [i_14] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) arr_20 [i_2] [i_13] [i_14 - 1] [i_15]))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_3))))))));
                        var_43 = ((/* implicit */int) ((arr_25 [i_2] [i_2] [i_13] [i_14 + 1] [i_15]) ? (((arr_19 [i_14] [i_13] [i_14 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30)))));
                    }
                } 
            } 
            var_44 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_13] [i_13])) ? (arr_26 [i_13]) : (((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_13])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1536194768)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)255))))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_32 [i_2] [i_13] [i_2] [i_2])) <= ((+(var_8))))))));
        }
        arr_45 [i_2] [i_2] = ((/* implicit */int) max((1472792309619928511ULL), (((max((arr_6 [i_2]), (((/* implicit */unsigned long long int) 8)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1))))))));
        var_45 ^= ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_12 [i_2] [i_2])) >> (((-128) + (150)))))));
        var_46 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-122)) ? (15115830671500259922ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5274457558611195423LL)) ? (((/* implicit */int) arr_0 [i_2] [i_2])) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) var_11))))) : (2272562489U))))));
    }
    var_47 = ((/* implicit */int) var_7);
}
