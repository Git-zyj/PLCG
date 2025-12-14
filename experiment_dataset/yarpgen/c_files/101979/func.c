/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101979
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_10 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min(((signed char)82), ((signed char)-65)))) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) ((unsigned char) (short)-22057))))), (((/* implicit */int) (signed char)-65))));
                        var_11 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_3] [(short)7] [i_2] [i_1] [i_0] [i_0])), (arr_0 [i_1] [i_2])))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)49640)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))), (((((/* implicit */_Bool) var_9)) ? (min((8672862251710604183LL), (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-89)), (arr_1 [i_0])))))))));
                    }
                } 
            } 
        } 
        var_12 ^= (!((_Bool)1));
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-85)) && ((_Bool)1)));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)103)))))));
        arr_13 [i_4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (signed char)98)) * (((/* implicit */int) (unsigned char)160)))))), (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (1279383053)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)69))) : (-1927441481085327874LL)))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_11 [i_4]))))))) % (((min((15018294622087328496ULL), (((/* implicit */unsigned long long int) (unsigned char)121)))) << (((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) (_Bool)1)))))))))));
    }
    for (unsigned short i_5 = 2; i_5 < 10; i_5 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                for (unsigned char i_8 = 4; i_8 < 12; i_8 += 4) 
                {
                    {
                        var_16 ^= ((/* implicit */unsigned int) ((0ULL) <= (((/* implicit */unsigned long long int) 0))));
                        /* LoopSeq 2 */
                        for (short i_9 = 1; i_9 < 11; i_9 += 4) /* same iter space */
                        {
                            arr_26 [i_5 - 2] [i_6] [i_7] [i_6] [(signed char)12] [11U] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)121)) ? (((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (unsigned char)249)))) : (((((/* implicit */int) (unsigned char)186)) * (((/* implicit */int) (signed char)45))))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2692171563U)) ? (1460406354U) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-64)) | (((/* implicit */int) (unsigned char)86)))))));
                        }
                        for (short i_10 = 1; i_10 < 11; i_10 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)202))));
                            arr_29 [i_10] [i_10] [i_6] [i_10] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-26)) ? (4059144442804669457ULL) : (11860397792420579843ULL)));
                            var_19 = ((/* implicit */unsigned long long int) ((arr_9 [i_10 - 1] [i_5 + 3]) - (arr_14 [i_10 + 1])));
                            arr_30 [i_6] [i_7] [i_10 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_5 - 1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                        }
                        arr_31 [i_5] [i_6] [i_6] [3ULL] [(_Bool)1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_5 + 3]))));
                        arr_32 [i_5] [i_6] [i_6] [i_8 - 2] = ((/* implicit */unsigned char) (~(0U)));
                        arr_33 [i_5] [i_5 + 2] [i_6] [4ULL] [i_8] [i_8 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)13))));
                    }
                } 
            } 
            var_20 -= ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (signed char)31)))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)111))))));
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                for (signed char i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32449)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-31)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_23 [(signed char)11] [(signed char)11] [i_6] [i_12]) <= (((/* implicit */unsigned long long int) var_1)))))) : (arr_23 [i_6] [i_6] [i_6] [i_5])));
                        var_23 ^= ((((/* implicit */_Bool) arr_17 [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) ^ (arr_35 [i_11] [i_11] [i_11]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                for (signed char i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (var_0)));
                            arr_49 [i_13] [i_13] [i_6] [i_13] = ((/* implicit */signed char) (((_Bool)0) ? (-1279383047) : (((/* implicit */int) var_2))));
                        }
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)185)) * (((/* implicit */int) (signed char)-68))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) + (6150865951714141215ULL)));
                        arr_50 [i_13] [i_13] [8] [i_6] [i_13] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_7)) : (9094925523054851728ULL)));
                    }
                } 
            } 
            var_27 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_5] [i_5 + 2] [i_5 + 2] [i_5])) >= (((/* implicit */int) var_3))));
        }
        /* vectorizable */
        for (unsigned int i_16 = 1; i_16 < 12; i_16 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                for (unsigned char i_18 = 2; i_18 < 12; i_18 += 3) 
                {
                    for (signed char i_19 = 0; i_19 < 13; i_19 += 3) 
                    {
                        {
                            arr_62 [i_19] [i_16] [i_17] [i_18 - 2] [i_18 - 2] = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_17])) / (var_8)));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (signed char)74))) >> (((((/* implicit */int) var_9)) - (15103))))))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_23 [i_16] [i_16 - 1] [(short)2] [i_16 - 1]) : (arr_23 [(signed char)10] [i_16 + 1] [4ULL] [i_16 - 1])));
            arr_63 [i_5] [i_5 + 3] [i_16] = ((/* implicit */long long int) ((unsigned long long int) (_Bool)1));
        }
        var_30 = ((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned int) 9553157469744655552ULL))) ? (min((((/* implicit */unsigned long long int) 1626334066U)), (18446744073709551612ULL))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-124)) | (((/* implicit */int) var_9))))) ? (((/* implicit */int) max(((signed char)-32), ((signed char)44)))) : (((/* implicit */int) ((unsigned char) (short)19123))))))));
    }
    for (int i_20 = 0; i_20 < 24; i_20 += 1) 
    {
        arr_68 [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)250)) && (((/* implicit */_Bool) (short)21802)))))) <= (((((/* implicit */_Bool) (signed char)31)) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)3350)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92)))))));
        /* LoopNest 2 */
        for (unsigned int i_21 = 0; i_21 < 24; i_21 += 2) 
        {
            for (unsigned char i_22 = 0; i_22 < 24; i_22 += 2) 
            {
                {
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (arr_64 [i_20] [i_21])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) arr_69 [11LL]))))) : (max((((/* implicit */unsigned long long int) var_8)), (arr_72 [i_21] [i_22])))))) ? (((((/* implicit */_Bool) (short)16177)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (0U)))) < (((((/* implicit */unsigned long long int) arr_67 [i_22] [i_22])) / (17746808955925787480ULL))))))))))));
                    arr_74 [i_20] [14U] [i_22] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_22])) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_70 [i_20] [i_22])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_22])) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) arr_69 [i_20]))))))))) : ((((_Bool)1) ? (3497013584U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */signed char) min((((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_1))) / (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)58)), (var_3))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))), ((~(4294967295U)))))));
    /* LoopNest 3 */
    for (short i_23 = 2; i_23 < 14; i_23 += 3) 
    {
        for (long long int i_24 = 0; i_24 < 16; i_24 += 3) 
        {
            for (unsigned long long int i_25 = 0; i_25 < 16; i_25 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_26 = 1; i_26 < 15; i_26 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-72)) <= (((/* implicit */int) (short)-12674))));
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2448))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (var_5)))));
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4294967289U)) * (17460872723935859152ULL)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)84)) > (((/* implicit */int) (unsigned short)33176))))) : (((/* implicit */int) ((signed char) var_8)))));
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) (unsigned short)32148)) : (((/* implicit */int) (_Bool)0))))) ? (13268835101257865498ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145)))));
                    }
                    /* vectorizable */
                    for (signed char i_27 = 0; i_27 < 16; i_27 += 2) 
                    {
                        arr_87 [i_25] [i_25] [i_25] = ((/* implicit */unsigned long long int) ((unsigned char) arr_77 [i_23 + 2]));
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_7))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_28 = 0; i_28 < 16; i_28 += 2) 
                    {
                        for (short i_29 = 2; i_29 < 14; i_29 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((var_8), (var_8)))), (((((/* implicit */unsigned long long int) ((var_1) >> (((arr_72 [i_23] [i_28]) - (4538328978210191611ULL)))))) ^ (min((((/* implicit */unsigned long long int) (signed char)-89)), (arr_64 [i_25] [i_28])))))));
                                var_39 -= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12666)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62298))) : (2218289598U))))))), ((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)16168)) == (((/* implicit */int) (short)-16177)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 65535U)))))) - (1930649559U))))));
}
