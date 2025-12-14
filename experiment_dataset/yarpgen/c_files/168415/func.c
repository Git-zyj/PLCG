/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168415
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((min((((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned char)19)))), ((+(((/* implicit */int) var_2)))))), (((/* implicit */int) (short)-25081)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1])))))));
                var_18 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) arr_0 [i_1] [i_1]))) | (arr_0 [i_0] [i_1])));
                var_19 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_1]), (arr_0 [i_1] [i_1])))), ((((+(var_12))) | (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (var_15))))))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(arr_1 [i_0]))))));
                arr_5 [i_0] [i_0] [i_0] = arr_2 [i_1];
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) - (arr_0 [i_2] [i_2])))) ? (max((arr_0 [i_2] [i_2]), (arr_0 [(unsigned short)9] [i_2]))) : ((+(arr_0 [i_2] [i_2])))));
        /* LoopSeq 4 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) arr_0 [(_Bool)1] [i_3]);
            var_24 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_0 [i_2] [i_3])))) ? (arr_8 [i_2]) : (((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_3])) ? (((/* implicit */int) arr_6 [i_2])) : (arr_1 [i_2]))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) != (arr_9 [i_2]))))));
        }
        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_2])) / (((/* implicit */int) arr_2 [i_4]))))) < (min((arr_10 [i_4] [i_4]), (arr_10 [i_2] [i_2])))));
            var_26 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((648850528U) / (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) + (var_12))), (((/* implicit */unsigned long long int) ((((var_13) ? (((/* implicit */int) arr_2 [i_2])) : (arr_1 [i_2]))) % (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) (unsigned char)194))))))))));
            /* LoopSeq 1 */
            for (long long int i_5 = 4; i_5 < 13; i_5 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) (unsigned char)61);
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_19 [(signed char)1] [(signed char)1] [8] [i_6] [i_6] [(signed char)1])) ? (((/* implicit */long long int) 4184712622U)) : (arr_19 [i_2] [i_4] [i_2] [i_2] [i_6] [i_2])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_2] [i_5 + 1] [i_5] [i_5 + 1]))))) : (var_0)));
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_12 [i_5 - 4] [i_6]))));
                    var_30 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_14 [i_5] [i_5 - 3] [i_5 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [(signed char)2] [i_5 - 2] [i_5 - 3] [i_5]))) : (arr_19 [i_5 - 1] [i_5 - 3] [(signed char)5] [i_5 - 2] [i_5 - 2] [i_5 - 4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (var_3))))));
                }
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_4])) : (arr_13 [i_4] [i_7])))), (4184712636U))))));
                    var_32 *= ((/* implicit */long long int) ((var_10) | ((~(((/* implicit */int) ((((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2])) < (((/* implicit */int) arr_20 [i_2] [i_2] [i_5])))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    arr_26 [i_5] [i_5] [i_5] = ((/* implicit */short) (-(arr_18 [i_5 - 2] [i_4] [i_4] [i_8] [i_2])));
                    var_33 = ((/* implicit */int) (-(18446744073709551615ULL)));
                }
            }
            /* LoopSeq 2 */
            for (unsigned char i_9 = 1; i_9 < 13; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_10 = 3; i_10 < 13; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) arr_23 [i_2] [i_4] [i_9 - 1] [i_4] [i_9])), (((((/* implicit */_Bool) (unsigned short)37863)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_11]))))))));
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (arr_22 [i_2] [i_2] [i_2] [i_9 - 1] [i_9])))) ? (((arr_22 [i_2] [i_4] [8LL] [i_9 - 1] [i_9]) / (arr_22 [i_4] [i_9] [i_4] [i_9 - 1] [i_9]))) : (arr_22 [i_9] [i_9] [i_9] [i_9 - 1] [i_9])));
                            var_36 = ((/* implicit */short) min(((+(arr_33 [i_2] [i_2] [i_10 - 2] [i_11] [i_2] [i_11] [i_11]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_9 - 1] [i_2]))) * (arr_31 [i_2] [i_2] [i_2])))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_21 [i_9 - 1] [i_4] [i_9 - 1] [i_4] [i_9] [i_4])) ? (((/* implicit */int) arr_21 [i_9 - 1] [i_9 - 1] [i_9] [i_2] [i_9] [i_2])) : (((/* implicit */int) arr_21 [i_9 - 1] [i_2] [i_9 - 1] [i_4] [i_9] [i_4]))))));
            }
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                var_38 = ((/* implicit */unsigned int) (~(((min((((/* implicit */long long int) var_3)), (arr_19 [8ULL] [i_4] [i_12] [i_12] [i_2] [i_12]))) % (((/* implicit */long long int) ((/* implicit */int) (short)-25055)))))));
                var_39 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_4] [i_2])) ? (((/* implicit */int) arr_20 [i_2] [i_4] [i_12])) : (1506556606)))) | ((+(arr_31 [i_12] [i_12] [i_12])))))));
                /* LoopNest 2 */
                for (short i_13 = 2; i_13 < 13; i_13 += 4) 
                {
                    for (unsigned int i_14 = 1; i_14 < 12; i_14 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (arr_9 [i_2]) : (((/* implicit */unsigned int) var_16))))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) 2147483647)) : (11U))))))))))));
                            var_41 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */signed char) arr_37 [i_12] [i_12] [i_4]))))))))) % (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (110254680U)))) ? ((+(arr_18 [i_2] [8U] [i_12] [i_13] [i_14 + 1]))) : (((/* implicit */unsigned long long int) ((6864263771595529662LL) << (((10) - (10)))))))));
                            arr_42 [i_14] [(unsigned char)1] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_13] [i_13 - 1] [i_14] [i_13])) : (((/* implicit */int) arr_15 [i_13 - 1] [i_13 + 1] [i_14] [i_13]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_13] [i_13 - 1] [i_14] [i_13]))))) : (((((/* implicit */int) arr_15 [i_13] [i_13 - 1] [i_14] [i_14])) * (((/* implicit */int) arr_15 [i_13 - 1] [i_13 - 1] [i_14] [i_13]))))));
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_12] [i_13 + 1])) > (((/* implicit */int) arr_39 [i_2] [i_2]))));
                        }
                    } 
                } 
                var_43 = ((/* implicit */unsigned int) 6864263771595529684LL);
            }
            var_44 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_4] [i_2]))) ^ (max((arr_19 [i_2] [i_4] [i_2] [i_4] [i_4] [i_2]), (((/* implicit */long long int) arr_9 [i_2]))))));
        }
        for (unsigned char i_15 = 0; i_15 < 14; i_15 += 2) 
        {
            /* LoopNest 2 */
            for (short i_16 = 1; i_16 < 11; i_16 += 4) 
            {
                for (short i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    {
                        var_45 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_16 [i_2] [i_16 + 1] [i_16]))));
                        var_46 -= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_2])))))))) > (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_27 [i_17] [7LL])))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_18 = 1; i_18 < 12; i_18 += 2) 
                        {
                            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) arr_48 [i_2] [i_15]))));
                            var_48 = (((+(((/* implicit */int) arr_6 [i_16 + 2])))) * (((/* implicit */int) arr_6 [i_16 + 1])));
                            var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) (((((~(((((/* implicit */int) arr_25 [i_15] [i_17] [i_16] [i_15])) - (arr_13 [i_2] [i_17]))))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)51733)) > (((/* implicit */int) (signed char)-118))))))))));
                            var_50 = ((/* implicit */unsigned char) var_7);
                        }
                        for (long long int i_19 = 3; i_19 < 12; i_19 += 2) 
                        {
                            var_51 = ((/* implicit */long long int) arr_36 [i_2] [i_15] [i_16 + 1] [i_19 - 2]);
                            var_52 = min((((/* implicit */unsigned long long int) ((arr_34 [i_2] [i_15] [(short)13] [i_16 + 2] [i_19 - 1] [i_17]) ? (((/* implicit */int) arr_34 [i_2] [i_15] [i_16] [i_16 + 3] [i_19 + 2] [i_16 + 1])) : (((/* implicit */int) arr_34 [i_2] [i_17] [i_16] [i_16 + 2] [i_19 - 1] [i_19 - 1]))))), (((arr_45 [i_2] [i_15] [i_16]) & (arr_45 [7ULL] [i_15] [1U]))));
                            arr_55 [i_2] [i_2] [i_2] [i_19] [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) 823139264U)))));
                        }
                        for (short i_20 = 0; i_20 < 14; i_20 += 4) 
                        {
                            var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(arr_8 [i_16])))), (((((/* implicit */_Bool) arr_56 [(signed char)12] [(short)8] [i_16 + 3] [(short)8] [i_2] [(signed char)12] [3ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1))) : (10U)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)117)), ((unsigned short)13802))))) : ((((!(((/* implicit */_Bool) var_16)))) ? (((arr_37 [i_15] [i_15] [i_20]) ? (arr_0 [i_2] [i_20]) : (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) arr_1 [i_2]))))));
                            var_54 ^= ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (16382LL)))));
                        }
                        var_55 = var_15;
                        arr_59 [i_2] [i_2] [(unsigned char)7] [i_2] = ((/* implicit */unsigned int) arr_44 [i_17]);
                    }
                } 
            } 
            var_56 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_2])) ? (arr_44 [i_15]) : (arr_44 [i_15])))));
            arr_60 [(unsigned char)8] [(short)2] [(short)2] &= ((/* implicit */unsigned char) (+((+(arr_45 [i_2] [(signed char)12] [i_2])))));
            var_57 = ((/* implicit */unsigned short) var_7);
            var_58 = ((/* implicit */unsigned long long int) var_8);
        }
        for (long long int i_21 = 3; i_21 < 13; i_21 += 4) 
        {
            var_59 = ((/* implicit */unsigned long long int) 15858476U);
            arr_64 [i_21] = ((/* implicit */int) (+((-(max((arr_45 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
            var_60 = 17ULL;
            var_61 -= ((/* implicit */short) ((var_6) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_53 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_50 [i_2] [i_2] [i_2] [2] [i_21]))) >= (arr_28 [i_2] [i_2] [i_2] [i_2])))) : (((((((/* implicit */int) arr_58 [i_2])) + (2147483647))) >> (((arr_1 [i_21]) + (2004180601))))))))));
        }
    }
    for (unsigned short i_22 = 1; i_22 < 20; i_22 += 2) 
    {
        var_62 -= ((/* implicit */signed char) min(((~((~(((/* implicit */int) (unsigned short)9649)))))), (((/* implicit */int) arr_67 [i_22 + 1] [i_22]))));
        var_63 = ((/* implicit */unsigned char) min((((arr_66 [i_22 - 1]) ? (((/* implicit */int) arr_66 [i_22 - 1])) : (((/* implicit */int) arr_65 [i_22 - 1] [i_22 + 1])))), ((+(((/* implicit */int) arr_65 [i_22 - 1] [i_22 - 1]))))));
        var_64 = ((/* implicit */unsigned short) min((var_64), (((/* implicit */unsigned short) (((!(arr_66 [i_22 + 1]))) ? (((/* implicit */int) var_4)) : ((~(((((/* implicit */_Bool) arr_65 [i_22 - 1] [i_22])) ? (((/* implicit */int) arr_66 [i_22])) : (((/* implicit */int) arr_66 [i_22])))))))))));
    }
}
