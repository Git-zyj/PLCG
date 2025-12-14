/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175480
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-35)), (((((((/* implicit */int) arr_2 [0ULL])) & (arr_1 [i_0]))) | (((/* implicit */int) (short)-7734))))));
        var_21 += ((/* implicit */long long int) arr_1 [i_0 + 3]);
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32027)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((+(9451735315206207063ULL)))));
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (signed char)37))))) | (arr_3 [i_0] [i_0 - 2])));
            var_23 = ((/* implicit */short) (signed char)-37);
            var_24 = ((/* implicit */long long int) min((9451735315206207063ULL), (max((max((((/* implicit */unsigned long long int) var_5)), (12287516142992997089ULL))), (((/* implicit */unsigned long long int) ((28LL) / (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_0] [i_0] [(unsigned short)19] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2])));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 3; i_3 < 18; i_3 += 4) 
            {
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0 + 2])))))));
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (short)32762)))) ^ (((/* implicit */int) ((short) 12287516142992997089ULL)))));
                arr_14 [(unsigned char)12] [i_2] [(unsigned char)12] = ((/* implicit */signed char) arr_11 [i_3 - 1] [i_3 - 3] [i_0 + 2]);
                var_26 = ((/* implicit */unsigned int) ((short) arr_8 [i_3 - 3]));
            }
            for (long long int i_4 = 1; i_4 < 18; i_4 += 2) 
            {
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1125899906580480ULL)) ? (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)35)) - (13))))) : (((/* implicit */int) arr_15 [i_2] [i_4 + 1]))));
                arr_18 [i_0 + 4] [i_2] [(short)8] |= ((/* implicit */signed char) (-(43LL)));
            }
        }
        for (signed char i_5 = 3; i_5 < 16; i_5 += 1) 
        {
            arr_21 [i_5] [i_5] = (-(((/* implicit */int) (signed char)35)));
            var_28 *= ((/* implicit */signed char) max((var_12), (((/* implicit */int) ((unsigned short) 292087710U)))));
            var_29 &= ((/* implicit */int) arr_17 [i_0 + 1] [i_0 + 3] [i_0 - 1] [i_0]);
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-1)), (arr_6 [i_5 + 3] [i_5 - 3] [i_5 + 4])))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (max((arr_7 [i_5 + 1] [(_Bool)1] [(_Bool)1]), (((/* implicit */long long int) -1256003201))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            var_31 = ((/* implicit */signed char) ((((_Bool) (~(((/* implicit */int) (signed char)7))))) ? (((((/* implicit */unsigned long long int) arr_0 [i_0 + 4])) | (7182415189823549449ULL))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)35)) ? (5181596681931024195LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [(signed char)2]))))), (((/* implicit */long long int) (short)-23635)))))));
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((min((0U), (((/* implicit */unsigned int) (unsigned short)65461)))), (((/* implicit */unsigned int) var_10))))) ? (((unsigned long long int) arr_7 [i_0] [i_0] [i_6])) : (((/* implicit */unsigned long long int) max((arr_1 [i_0 + 3]), (((/* implicit */int) var_0)))))));
        }
        arr_25 [i_0] [i_0] = var_5;
        arr_26 [i_0 + 3] = ((/* implicit */long long int) min((((/* implicit */int) (!(((arr_3 [i_0] [14U]) <= (arr_20 [i_0])))))), (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) arr_2 [i_0 - 2]))))));
    }
    for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 3) /* same iter space */
    {
        arr_29 [(signed char)0] = ((/* implicit */int) max((arr_16 [i_7] [(unsigned char)0] [(unsigned char)0] [i_7]), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) var_3))))))));
        var_32 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4002879586U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_30 [i_7 - 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((2147483632) >= (((int) arr_28 [i_7 - 1] [i_7 - 1])))))));
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-96)) >= (((/* implicit */int) var_18))));
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((1517185286194384312ULL) / (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (arr_8 [i_7 + 1]))), (((/* implicit */unsigned int) (+(var_12))))))))))));
    }
    for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 3) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_15 [i_8] [i_8 - 1]))) ? (arr_4 [i_8] [i_8] [i_8]) : (((/* implicit */int) arr_31 [(signed char)4])))))));
        var_36 ^= arr_11 [i_8] [i_8] [i_8 + 3];
        var_37 = ((/* implicit */short) 5473664995655372075LL);
        /* LoopSeq 2 */
        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            arr_35 [i_8] |= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((short) arr_22 [i_8]))), (min((var_6), (((/* implicit */unsigned long long int) arr_33 [i_8] [i_9])))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)16)), (arr_0 [i_8]))))));
            var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) max((arr_9 [i_8 + 4] [i_9] [i_9]), (min((((/* implicit */unsigned long long int) var_15)), (min((arr_9 [i_8 + 2] [i_8 + 2] [i_8 + 4]), (((/* implicit */unsigned long long int) var_2)))))))))));
            var_39 = ((/* implicit */short) 1688849860263936ULL);
            /* LoopSeq 1 */
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    var_40 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1256003219)) ? (var_9) : (((/* implicit */unsigned long long int) -1256003219)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1419630195U))))))));
                    arr_42 [i_9] [i_10] [i_11] &= 1ULL;
                }
                for (unsigned short i_12 = 2; i_12 < 19; i_12 += 4) 
                {
                    var_41 = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)255)) ^ (min((var_12), (48)))))));
                    var_42 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 3)) ? (2875337069U) : (((/* implicit */unsigned int) 1256003201))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_12 - 2] [i_8 + 2]))) - (arr_9 [i_12 + 1] [i_12 - 2] [i_8 - 2])))) ? (max((arr_9 [i_12 + 1] [i_12 - 1] [i_8 + 2]), (((/* implicit */unsigned long long int) arr_28 [i_12 - 1] [i_8 + 1])))) : (max((((/* implicit */unsigned long long int) -1256003205)), (10143175485942024331ULL))))))));
                        arr_47 [i_13] [i_9] [i_9] [i_10] = ((/* implicit */unsigned char) var_9);
                        arr_48 [i_12] [i_12 - 1] [(_Bool)1] [(_Bool)1] [i_12] = var_5;
                        var_44 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((short) var_15))) ? (((/* implicit */int) (signed char)(-127 - 1))) : ((-(((/* implicit */int) var_15))))))));
                    }
                    for (short i_14 = 4; i_14 < 19; i_14 += 1) 
                    {
                        arr_53 [i_8] [i_8] [14LL] [i_14] [i_8] [i_12] [i_14 - 4] = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), (max((((/* implicit */long long int) arr_12 [i_8] [i_8] [i_14 - 3])), (var_11))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)96))));
                        var_45 = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                }
                /* vectorizable */
                for (long long int i_15 = 2; i_15 < 17; i_15 += 1) 
                {
                    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)-1))));
                    arr_57 [(unsigned short)13] [i_15] [(unsigned short)13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_8] [i_8] [i_8] [i_15] [i_8] [i_15 + 1]))) : (arr_20 [16])))) || (((/* implicit */_Bool) var_10))));
                    arr_58 [i_15] [i_10] [i_9] [i_15] = ((/* implicit */unsigned short) ((unsigned int) arr_33 [i_8 + 1] [i_8 + 1]));
                }
                arr_59 [i_8] [(signed char)3] [i_10] = ((/* implicit */unsigned char) (((((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) arr_8 [i_8 + 4])))) ? (((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1592115287002363587ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_8 + 4]) < (arr_8 [i_8 + 4])))))));
                var_47 = ((/* implicit */signed char) (_Bool)1);
            }
        }
        for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_17 = 0; i_17 < 20; i_17 += 2) 
            {
                var_48 = ((/* implicit */unsigned short) -1416680715046234066LL);
                var_49 = ((/* implicit */short) (+(arr_54 [i_8 + 1] [i_8 + 3] [1U] [i_8 + 3])));
            }
            var_50 = ((/* implicit */unsigned long long int) (+(arr_61 [i_8] [i_16])));
        }
    }
    for (unsigned long long int i_18 = 2; i_18 < 16; i_18 += 3) /* same iter space */
    {
        arr_67 [i_18] = ((((/* implicit */_Bool) ((unsigned char) 1086305489077216279ULL))) ? (var_8) : ((+(((((/* implicit */_Bool) var_3)) ? (arr_11 [i_18 - 1] [(signed char)13] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
        var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) ((signed char) -1416680715046234089LL)))));
        var_52 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_4) << (((((((/* implicit */_Bool) -1256003187)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (16854628786707188013ULL))) - (249ULL))))))));
    }
    var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_54 = ((/* implicit */signed char) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    var_55 = ((/* implicit */short) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_0))));
}
