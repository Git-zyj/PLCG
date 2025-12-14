/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165775
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
    var_18 = ((/* implicit */int) ((unsigned int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (2365381950U))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_19 *= ((/* implicit */signed char) 1498573049U);
        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) var_2)))))) * ((-(var_10)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) min((min((((/* implicit */int) ((((/* implicit */int) (signed char)-102)) == (((/* implicit */int) (unsigned char)26))))), (arr_4 [i_1] [i_1 - 1]))), (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : ((((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_17))))))));
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_2]))))) ? (((((/* implicit */long long int) ((arr_2 [i_1]) ? (((/* implicit */int) arr_3 [i_1] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_2]))))) | (var_1))) : (((/* implicit */long long int) max((arr_4 [i_1] [i_1]), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) || (((/* implicit */_Bool) (signed char)-127))))))))));
            var_23 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) var_10)), (507904U)))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            arr_8 [i_3] [i_1] = ((/* implicit */long long int) (!(arr_2 [i_1 - 1])));
            /* LoopSeq 4 */
            for (short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                var_24 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 8518785179782271069LL)) ? (((/* implicit */int) arr_3 [i_3] [i_4])) : (((/* implicit */int) arr_11 [i_4] [i_3] [i_3] [i_1 - 1]))))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        {
                            arr_18 [i_4] [i_3] [i_4] = ((/* implicit */short) var_17);
                            var_25 = ((/* implicit */short) var_8);
                        }
                    } 
                } 
                arr_19 [i_1] [i_1] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_1 + 1])) ? (((var_5) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)253)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (_Bool)1))))));
                var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (unsigned char)201)))));
                var_27 -= ((/* implicit */signed char) ((int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_16)))));
            }
            for (short i_7 = 2; i_7 < 18; i_7 += 2) 
            {
                var_28 -= ((/* implicit */unsigned short) var_14);
                var_29 = (-(((/* implicit */int) (unsigned char)17)));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_30 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)24)) || ((_Bool)1)));
                arr_24 [(short)14] [13] [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)12);
            }
            for (int i_9 = 2; i_9 < 17; i_9 += 1) 
            {
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_1 + 1] [i_9 + 1])))))));
                arr_27 [i_1 + 1] [i_1 + 1] [i_9] = ((((/* implicit */_Bool) (~(var_12)))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_9]))))));
            }
        }
        for (unsigned int i_10 = 2; i_10 < 18; i_10 += 1) 
        {
            arr_32 [7ULL] [i_1] [i_1] = ((/* implicit */short) -8518785179782271096LL);
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-12560)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56313))) : (15615020754672302681ULL)));
            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (~(((((((/* implicit */int) var_3)) == (((/* implicit */int) var_14)))) ? ((+(((/* implicit */int) arr_26 [(signed char)1] [i_10] [(signed char)1] [i_10])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)192)) < (((/* implicit */int) arr_3 [i_1] [i_1]))))))))))));
            /* LoopSeq 2 */
            for (unsigned int i_11 = 1; i_11 < 19; i_11 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned int) var_1);
                var_35 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)33)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_12 [i_1 + 1] [i_10 - 2] [i_11 + 1] [(signed char)14])) + (2147483647))) >> (((/* implicit */int) arr_28 [i_1 + 1] [i_10 - 2] [i_11 + 1]))))) : (min((((/* implicit */long long int) arr_28 [i_1 + 1] [i_10 - 2] [i_11 + 1])), (9223372036854775807LL)))));
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        {
                            arr_41 [i_1 + 1] [i_10] [i_11] [i_11] [i_10] [i_12] [i_12] = ((/* implicit */int) 9223372036854775807LL);
                            var_36 &= ((/* implicit */short) max((((/* implicit */long long int) min((((arr_38 [i_1] [(unsigned char)12] [i_1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_12])))), (((int) -1490057332397715747LL))))), (((((/* implicit */_Bool) arr_35 [i_13] [i_12] [i_12] [i_12] [(short)18])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned int i_14 = 1; i_14 < 19; i_14 += 1) /* same iter space */
            {
                arr_45 [i_1] = ((/* implicit */unsigned long long int) arr_25 [i_1] [i_1] [i_10 - 2] [i_14]);
                var_37 -= ((((/* implicit */int) (signed char)127)) & (((/* implicit */int) var_11)));
            }
            var_38 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((_Bool) arr_40 [i_10] [i_10] [i_10] [i_10] [(signed char)8] [i_10 - 2]))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_10] [i_10] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1]))) > (-4253723046506792139LL)))))) ? (((/* implicit */int) var_14)) : (var_10)));
        }
        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-1303))))));
        /* LoopSeq 1 */
        for (int i_15 = 3; i_15 < 17; i_15 += 1) 
        {
            var_40 = ((((/* implicit */_Bool) (short)-12547)) ? (7222227988022638686LL) : (((/* implicit */long long int) 4294967293U)));
            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1 + 1] [i_1 - 1])) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_43 [i_1] [i_1] [i_1] [(signed char)18])))), (var_1))), (((/* implicit */long long int) ((int) arr_26 [17LL] [i_15] [i_15 - 2] [i_15]))))))));
            arr_49 [i_15] [i_1] &= ((/* implicit */unsigned char) min((((/* implicit */int) (short)13075)), ((((~(((/* implicit */int) var_11)))) * (((/* implicit */int) arr_42 [i_1] [i_1] [i_15]))))));
            var_42 -= ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_15]))) / (4294967293U)))) ? ((~(((/* implicit */int) var_11)))) : ((-(((/* implicit */int) var_0)))))) | (max((((((/* implicit */_Bool) var_10)) ? (arr_6 [i_1] [i_1] [i_1]) : (2038589932))), (((/* implicit */int) ((arr_30 [i_1] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
        }
        /* LoopNest 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned char i_17 = 1; i_17 < 19; i_17 += 1) 
            {
                for (long long int i_18 = 1; i_18 < 19; i_18 += 2) 
                {
                    {
                        var_43 = min((((((-8052247463260579803LL) / (((/* implicit */long long int) 4294967274U)))) % (((/* implicit */long long int) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_2 [i_1]))))))), (((/* implicit */long long int) 1041767728)));
                        /* LoopSeq 3 */
                        for (signed char i_19 = 0; i_19 < 20; i_19 += 2) 
                        {
                            var_44 = ((/* implicit */short) ((((long long int) (_Bool)1)) * (((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_16] [i_16] [(signed char)17] [i_1 - 1])))))));
                            var_45 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_16 [i_19] [(_Bool)1] [i_1] [i_1] [i_17] [(short)11] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_18] [i_17]))) : (22U)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_20 = 3; i_20 < 19; i_20 += 3) 
                        {
                            var_46 = ((/* implicit */signed char) ((arr_4 [i_18 + 1] [8U]) ^ (((((/* implicit */int) var_11)) | (((/* implicit */int) var_15))))));
                            var_47 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_55 [i_17] [i_17 - 1] [i_20 + 1] [i_20 - 1] [i_20 + 1]))));
                        }
                        for (signed char i_21 = 0; i_21 < 20; i_21 += 1) 
                        {
                            arr_65 [i_17 + 1] [i_18] [i_21] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_18 - 1] [i_18 + 1] [i_18 - 1])) || (((/* implicit */_Bool) arr_9 [i_18 + 1] [i_18 + 1] [i_18 + 1])))) ? (min((min((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)31978)))), (((/* implicit */long long int) min((arr_6 [i_16] [i_18 - 1] [i_16]), (((/* implicit */int) var_2))))))) : (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_1] [i_1]))) : (var_1)))));
                            var_48 &= ((/* implicit */long long int) min((((/* implicit */int) arr_13 [i_21] [(_Bool)1] [i_16])), (var_10)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_22 = 1; i_22 < 19; i_22 += 2) 
                        {
                            var_49 = ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_31 [i_1 - 1] [i_1 - 1] [i_17]), (((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) 711026271U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) : (711026291U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_7 [i_1]), (((/* implicit */unsigned char) var_6)))))))) << (((((/* implicit */int) max((arr_67 [i_1 + 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10)))))))) - (83)))));
                            var_50 ^= ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)78)), (arr_7 [i_1 + 1])))), (min((((((/* implicit */_Bool) (short)12561)) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) (signed char)-120)))), (((/* implicit */int) min(((signed char)-107), (var_14))))))));
                        }
                        for (short i_23 = 0; i_23 < 20; i_23 += 2) 
                        {
                            arr_73 [i_16] [i_16] [i_16] [i_18 + 1] [2LL] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))), (max((2308948179U), (((/* implicit */unsigned int) var_5))))))));
                            var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)18)) ? (((((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)101))) : (9223372036854775802LL))) << (((5892007810053824735ULL) - (5892007810053824684ULL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))))))));
                            var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) var_9))));
                            var_53 = ((/* implicit */signed char) ((((((arr_6 [i_1] [i_16] [i_16]) >= (((/* implicit */int) var_8)))) ? (((/* implicit */long long int) ((unsigned int) var_2))) : (arr_54 [i_17 + 1] [i_17 - 1]))) >> (((min(((-(arr_36 [i_16] [i_18] [i_16] [i_16] [i_1 - 1]))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_23] [i_23])) : (((/* implicit */int) var_16)))))) - (24)))));
                        }
                    }
                } 
            } 
        } 
    }
    var_54 = ((/* implicit */signed char) var_3);
    var_55 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
    var_56 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)27549))));
}
